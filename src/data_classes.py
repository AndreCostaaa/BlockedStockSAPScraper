from typing import Optional, Any
from dataclasses import dataclass
from datetime import datetime

@dataclass
class NCData:
    nc_number:Optional[str] #Title
    type_nc:Optional[str]
    batch_sap:Optional[str]
    item_code:Optional[str]
    purchase_order:Optional[str]
    description_nc:Optional[str] #DescriptionNC
    category:Optional[str]
    responsable_nc:Optional[str]
    quantity:Optional[str]
    uom:Optional[str]
    created_by:Optional[str] #Created By1
    created1:Optional[datetime] #Created1
    lu:Optional[str]
    vendor_id:Optional[str]
    vendor_name:Optional[str] #vendor_id:vendor_x00
    vendor_batch_id:Optional[str]
    origin:Optional[str]
    delivery_date:Optional[datetime]
    traitement_nc:Optional[str] #Traitement NC _x0028
    status_nc:Optional[str]
    dim_derogation_conv:Optional[str]
    commentaire:Optional[str]
    code_raison_de_blocage:Optional[str] #Code raison de_x0020
    decision_mqa:Optional[str] #DecisionMQA
    impact_on_brand_image:Optional[bool] #impact on brand_x002
    impact_on_product_perfomance:Optional[bool] #impact on Product_x0
    impact_on_regulatory:Optional[bool]
    impact_on_product_identification:Optional[bool]
    impact_on_machine_efficiency:Optional[bool] #impact on Machine_x0
    recurrent_nc:Optional[bool]
    total_cost_over_20:Optional[bool] #Total cost >20
    risk_evaluation:Optional[str]
    criticity:Optional[str]
    free_mailing:Optional[str]
    year_created:Optional[str]
    ncr_number:Optional[str]
    opening_ncr_date:Optional[datetime]
    approver:Optional[str]
    capa_impl_date:Optional[datetime] #CAPA-Impl. Date
    content_type_id:Optional[str] #ContentTypeId
    compliance_asset_id:Optional[str]
    stock_exit_code:Optional[str]
    destruction_at_vendors_cost:Optional[str] #Destruction at vendo
    n_capa_relance:Optional[str | int]
    date_capa_refresh: Optional[datetime]
    odata_color_tag:Optional[str] #OData__ColorTag
    modified: Optional[datetime]
    created: Optional[datetime]
    author_id:Optional[str]
    editor_id:Optional[str]

NC_TRANSLATOR_MAP = {
    "title": "nc_number",
    "descriptionnc": "description_nc",
    "created_by1": "created_by",
    "created1": "created",
    "vendor_id:vendor_x00":"vendor_name",
    "traitement_nc__x0028": "traitement_nc",
    "code_raison_de_x0020": "code_raison_de_blocage",
    "decisionmqa":"decision_mqa",
    "impact_on_brand_x002": "impact_on_brand_image",
    "impact_on_product_x0": "impact_on_product_identification",
    "impact_on_machine_x0": "impact_on_machine_efficiency",
    "total_cost_>20": "total_cost_over_20",
    "capa-impl._dat":"capa_impl_date",
    "contenttypeid":"content_type_id",
    "destruction_at_vendo" :"destruction_at_vendors_cost",
    "odata__colortag":"odata_color_tag"
}
@dataclass
class StockExitData:
    stock_exit_code:Optional[str]
    nc_nr:Optional[str]
    batch_sap:Optional[str]
    item_code:Optional[str]
    purchase_order:Optional[str]
    quantity:Optional[str]
    uom:Optional[str]
    vendor_batch_id:Optional[str]
    ncr_number:Optional[str]
    initial_location:Optional[str]
    stock_exit_type:Optional[str]
    cost_center:Optional[str]
    wbs:Optional[str]
    action_dim:Optional[datetime]
    reception_entrepot:Optional[str]
    odn_number:Optional[str]
    odn_comment:Optional[str]
    stock_exit_sap:Optional[datetime]
    odn_completed:Optional[datetime]
    dim_action:Optional[str]
    action_wh:Optional[str]
    action_warehouse_completed:Optional[str]
    information_transporteur:Optional[str]
    a_traiter_par_chavornay:Optional[bool]
    item_type:Optional[str]
    path:Optional[str]

@dataclass
class BlockedStockLine:
    material:str
    batch:str
    material_description:str
    material_type:str
    plant: str
    storage_location:str
    base_unit_of_measure:str
    blocked:float
    dif_stock: Optional[str]
    value_blockedstock:float
    currency:str
    commentaire:Optional[str]
    cc_rrp:str
    type:str
    resp:Optional[str]
    provision:Optional[str] 
    nc_number_match:int
    ncf:Optional[str]
    ncr:Optional[str]
    others_ncf:Optional[str]
    others_ncr:Optional[str]
    step_ncf:Optional[str]
    stock_exit_type:Optional[str]
    vendor_id:Optional[str]
    reason_code:Optional[str]
    vendor_name:Optional[str]
    destruction_at_vendors_cost:Optional[str]
    date_created:str
    date_archived:Optional[str]
    done:bool