
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 22 > 0
static unsigned char *bytecode_data[22];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_blocked_stock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dacite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dacite$cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dacite$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dacite$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dacite$data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dacite$dataclasses(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dacite$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dacite$frozen_dict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dacite$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_data_fetcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile$xmlfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mouseinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$read_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$rich_text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$area_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bar_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bubble_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$chartspace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$data_source(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$descriptors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$error_bar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$label(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$line_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$marker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pie_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$plotarea(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$print_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$radar_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$scatter_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series_factory(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$shapes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$stock_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$surface_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$title(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$trendline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$updown_bars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$chartsheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$custom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$publish(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$relation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$author(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comment_sheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$shape_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$namespace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$nested(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$sequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$serialisable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$connector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$effect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$fill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$geometry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$graphic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$line(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$relation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$spreadsheet_drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$xdr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$rule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$tokenizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$translate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$custom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$extended(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$manifest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$relationship(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$record(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$drawings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$alignment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$borders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$builtins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$cell_style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$differential(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fills(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fonts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$named_styles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$styleable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$stylesheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$bound_dictionary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$datetime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$escape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$formulas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$indexed_list(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$child(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$defined_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link$external(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$function_group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$smart_tags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$web(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_read_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_write_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$cell_range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$copier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$datavalidation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$dimensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$formula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$header_footer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$hyperlink(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$merge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$page(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$pagebreak(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$print_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$related(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$scenario(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$worksheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$theme(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyautogui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyautogui$_pyautogui_win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygetwindow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygetwindow$_pygetwindow_win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymsgbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymsgbox$_native_win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyperclip(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyrect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyscreeze(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytweening(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\155\141\151\156\56\160\171"
#endif
},
    {"_pydecimal", NULL, 0, 157749, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\137\160\171\144\145\143\151\155\141\154\56\160\171"
#endif
},
    {"blocked_stock", modulecode_blocked_stock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\142\154\157\143\153\145\144\137\163\164\157\143\153\56\160\171"
#endif
},
    {"config", modulecode_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\143\157\156\146\151\147\56\160\171"
#endif
},
    {"ctypes", NULL, 1, 15877, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"ctypes._endian", NULL, 2, 1896, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\164\171\160\145\163\134\137\145\156\144\151\141\156\56\160\171"
#endif
},
    {"ctypes.wintypes", NULL, 3, 4853, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\143\164\171\160\145\163\134\167\151\156\164\171\160\145\163\56\160\171"
#endif
},
    {"dacite", modulecode_dacite, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\143\151\164\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dacite.cache", modulecode_dacite$cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\143\151\164\145\134\143\141\143\150\145\56\160\171"
#endif
},
    {"dacite.config", modulecode_dacite$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\143\151\164\145\134\143\157\156\146\151\147\56\160\171"
#endif
},
    {"dacite.core", modulecode_dacite$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\143\151\164\145\134\143\157\162\145\56\160\171"
#endif
},
    {"dacite.data", modulecode_dacite$data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\143\151\164\145\134\144\141\164\141\56\160\171"
#endif
},
    {"dacite.dataclasses", modulecode_dacite$dataclasses, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\143\151\164\145\134\144\141\164\141\143\154\141\163\163\145\163\56\160\171"
#endif
},
    {"dacite.exceptions", modulecode_dacite$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\143\151\164\145\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"dacite.frozen_dict", modulecode_dacite$frozen_dict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\143\151\164\145\134\146\162\157\172\145\156\137\144\151\143\164\56\160\171"
#endif
},
    {"dacite.types", modulecode_dacite$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\143\151\164\145\134\164\171\160\145\163\56\160\171"
#endif
},
    {"data_fetcher", modulecode_data_fetcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\144\141\164\141\137\146\145\164\143\150\145\162\56\160\171"
#endif
},
    {"decimal", NULL, 4, 357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\144\145\143\151\155\141\154\56\160\171"
#endif
},
    {"et_xmlfile", modulecode_et_xmlfile, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\145\164\137\170\155\154\146\151\154\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"et_xmlfile.xmlfile", modulecode_et_xmlfile$xmlfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\145\164\137\170\155\154\146\151\154\145\134\170\155\154\146\151\154\145\56\160\171"
#endif
},
    {"hashlib", NULL, 5, 6840, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\150\141\163\150\154\151\142\56\160\171"
#endif
},
    {"mouseinfo", modulecode_mouseinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\155\157\165\163\145\151\156\146\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl", modulecode_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl._constants", modulecode_openpyxl$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"openpyxl.cell", modulecode_openpyxl$cell, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.cell._writer", modulecode_openpyxl$cell$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.cell.cell", modulecode_openpyxl$cell$cell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\143\145\154\154\56\160\171"
#endif
},
    {"openpyxl.cell.read_only", modulecode_openpyxl$cell$read_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\162\145\141\144\137\157\156\154\171\56\160\171"
#endif
},
    {"openpyxl.cell.rich_text", modulecode_openpyxl$cell$rich_text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\162\151\143\150\137\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.cell.text", modulecode_openpyxl$cell$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\145\154\154\134\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.chart", modulecode_openpyxl$chart, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.chart._3d", modulecode_openpyxl$chart$_3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\137\63\144\56\160\171"
#endif
},
    {"openpyxl.chart._chart", modulecode_openpyxl$chart$_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.area_chart", modulecode_openpyxl$chart$area_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\141\162\145\141\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.axis", modulecode_openpyxl$chart$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\141\170\151\163\56\160\171"
#endif
},
    {"openpyxl.chart.bar_chart", modulecode_openpyxl$chart$bar_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\142\141\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.bubble_chart", modulecode_openpyxl$chart$bubble_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\142\165\142\142\154\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.chartspace", modulecode_openpyxl$chart$chartspace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\143\150\141\162\164\163\160\141\143\145\56\160\171"
#endif
},
    {"openpyxl.chart.data_source", modulecode_openpyxl$chart$data_source, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\144\141\164\141\137\163\157\165\162\143\145\56\160\171"
#endif
},
    {"openpyxl.chart.descriptors", modulecode_openpyxl$chart$descriptors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\144\145\163\143\162\151\160\164\157\162\163\56\160\171"
#endif
},
    {"openpyxl.chart.error_bar", modulecode_openpyxl$chart$error_bar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\145\162\162\157\162\137\142\141\162\56\160\171"
#endif
},
    {"openpyxl.chart.label", modulecode_openpyxl$chart$label, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\141\142\145\154\56\160\171"
#endif
},
    {"openpyxl.chart.layout", modulecode_openpyxl$chart$layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\141\171\157\165\164\56\160\171"
#endif
},
    {"openpyxl.chart.legend", modulecode_openpyxl$chart$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\145\147\145\156\144\56\160\171"
#endif
},
    {"openpyxl.chart.line_chart", modulecode_openpyxl$chart$line_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\154\151\156\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.marker", modulecode_openpyxl$chart$marker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\155\141\162\153\145\162\56\160\171"
#endif
},
    {"openpyxl.chart.picture", modulecode_openpyxl$chart$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\151\143\164\165\162\145\56\160\171"
#endif
},
    {"openpyxl.chart.pie_chart", modulecode_openpyxl$chart$pie_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\151\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.pivot", modulecode_openpyxl$chart$pivot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\151\166\157\164\56\160\171"
#endif
},
    {"openpyxl.chart.plotarea", modulecode_openpyxl$chart$plotarea, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\154\157\164\141\162\145\141\56\160\171"
#endif
},
    {"openpyxl.chart.print_settings", modulecode_openpyxl$chart$print_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\160\162\151\156\164\137\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.chart.radar_chart", modulecode_openpyxl$chart$radar_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\162\141\144\141\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.reader", modulecode_openpyxl$chart$reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\162\145\141\144\145\162\56\160\171"
#endif
},
    {"openpyxl.chart.reference", modulecode_openpyxl$chart$reference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\162\145\146\145\162\145\156\143\145\56\160\171"
#endif
},
    {"openpyxl.chart.scatter_chart", modulecode_openpyxl$chart$scatter_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\143\141\164\164\145\162\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.series", modulecode_openpyxl$chart$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\145\162\151\145\163\56\160\171"
#endif
},
    {"openpyxl.chart.series_factory", modulecode_openpyxl$chart$series_factory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\145\162\151\145\163\137\146\141\143\164\157\162\171\56\160\171"
#endif
},
    {"openpyxl.chart.shapes", modulecode_openpyxl$chart$shapes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\150\141\160\145\163\56\160\171"
#endif
},
    {"openpyxl.chart.stock_chart", modulecode_openpyxl$chart$stock_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\164\157\143\153\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.surface_chart", modulecode_openpyxl$chart$surface_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\163\165\162\146\141\143\145\137\143\150\141\162\164\56\160\171"
#endif
},
    {"openpyxl.chart.text", modulecode_openpyxl$chart$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.chart.title", modulecode_openpyxl$chart$title, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\164\151\164\154\145\56\160\171"
#endif
},
    {"openpyxl.chart.trendline", modulecode_openpyxl$chart$trendline, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\164\162\145\156\144\154\151\156\145\56\160\171"
#endif
},
    {"openpyxl.chart.updown_bars", modulecode_openpyxl$chart$updown_bars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\134\165\160\144\157\167\156\137\142\141\162\163\56\160\171"
#endif
},
    {"openpyxl.chartsheet", modulecode_openpyxl$chartsheet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.chartsheet.chartsheet", modulecode_openpyxl$chartsheet$chartsheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\143\150\141\162\164\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.chartsheet.custom", modulecode_openpyxl$chartsheet$custom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\143\165\163\164\157\155\56\160\171"
#endif
},
    {"openpyxl.chartsheet.properties", modulecode_openpyxl$chartsheet$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.chartsheet.protection", modulecode_openpyxl$chartsheet$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.chartsheet.publish", modulecode_openpyxl$chartsheet$publish, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\160\165\142\154\151\163\150\56\160\171"
#endif
},
    {"openpyxl.chartsheet.relation", modulecode_openpyxl$chartsheet$relation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\162\145\154\141\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.chartsheet.views", modulecode_openpyxl$chartsheet$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\150\141\162\164\163\150\145\145\164\134\166\151\145\167\163\56\160\171"
#endif
},
    {"openpyxl.comments", modulecode_openpyxl$comments, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.comments.author", modulecode_openpyxl$comments$author, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\141\165\164\150\157\162\56\160\171"
#endif
},
    {"openpyxl.comments.comment_sheet", modulecode_openpyxl$comments$comment_sheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\143\157\155\155\145\156\164\137\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.comments.comments", modulecode_openpyxl$comments$comments, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\143\157\155\155\145\156\164\163\56\160\171"
#endif
},
    {"openpyxl.comments.shape_writer", modulecode_openpyxl$comments$shape_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\155\145\156\164\163\134\163\150\141\160\145\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.compat", modulecode_openpyxl$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.compat.numbers", modulecode_openpyxl$compat$numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\160\141\164\134\156\165\155\142\145\162\163\56\160\171"
#endif
},
    {"openpyxl.compat.strings", modulecode_openpyxl$compat$strings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\143\157\155\160\141\164\134\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.descriptors", modulecode_openpyxl$descriptors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.descriptors.base", modulecode_openpyxl$descriptors$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\142\141\163\145\56\160\171"
#endif
},
    {"openpyxl.descriptors.excel", modulecode_openpyxl$descriptors$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\145\170\143\145\154\56\160\171"
#endif
},
    {"openpyxl.descriptors.namespace", modulecode_openpyxl$descriptors$namespace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\156\141\155\145\163\160\141\143\145\56\160\171"
#endif
},
    {"openpyxl.descriptors.nested", modulecode_openpyxl$descriptors$nested, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\156\145\163\164\145\144\56\160\171"
#endif
},
    {"openpyxl.descriptors.sequence", modulecode_openpyxl$descriptors$sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\163\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"openpyxl.descriptors.serialisable", modulecode_openpyxl$descriptors$serialisable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\145\163\143\162\151\160\164\157\162\163\134\163\145\162\151\141\154\151\163\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.drawing", modulecode_openpyxl$drawing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.drawing.colors", modulecode_openpyxl$drawing$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\143\157\154\157\162\163\56\160\171"
#endif
},
    {"openpyxl.drawing.connector", modulecode_openpyxl$drawing$connector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\143\157\156\156\145\143\164\157\162\56\160\171"
#endif
},
    {"openpyxl.drawing.drawing", modulecode_openpyxl$drawing$drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\144\162\141\167\151\156\147\56\160\171"
#endif
},
    {"openpyxl.drawing.effect", modulecode_openpyxl$drawing$effect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\145\146\146\145\143\164\56\160\171"
#endif
},
    {"openpyxl.drawing.fill", modulecode_openpyxl$drawing$fill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\146\151\154\154\56\160\171"
#endif
},
    {"openpyxl.drawing.geometry", modulecode_openpyxl$drawing$geometry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\147\145\157\155\145\164\162\171\56\160\171"
#endif
},
    {"openpyxl.drawing.graphic", modulecode_openpyxl$drawing$graphic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\147\162\141\160\150\151\143\56\160\171"
#endif
},
    {"openpyxl.drawing.image", modulecode_openpyxl$drawing$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\151\155\141\147\145\56\160\171"
#endif
},
    {"openpyxl.drawing.line", modulecode_openpyxl$drawing$line, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\154\151\156\145\56\160\171"
#endif
},
    {"openpyxl.drawing.picture", modulecode_openpyxl$drawing$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\160\151\143\164\165\162\145\56\160\171"
#endif
},
    {"openpyxl.drawing.properties", modulecode_openpyxl$drawing$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.drawing.relation", modulecode_openpyxl$drawing$relation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\162\145\154\141\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.drawing.spreadsheet_drawing", modulecode_openpyxl$drawing$spreadsheet_drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\163\160\162\145\141\144\163\150\145\145\164\137\144\162\141\167\151\156\147\56\160\171"
#endif
},
    {"openpyxl.drawing.text", modulecode_openpyxl$drawing$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\164\145\170\164\56\160\171"
#endif
},
    {"openpyxl.drawing.xdr", modulecode_openpyxl$drawing$xdr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\144\162\141\167\151\156\147\134\170\144\162\56\160\171"
#endif
},
    {"openpyxl.formatting", modulecode_openpyxl$formatting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\141\164\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.formatting.formatting", modulecode_openpyxl$formatting$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\141\164\164\151\156\147\134\146\157\162\155\141\164\164\151\156\147\56\160\171"
#endif
},
    {"openpyxl.formatting.rule", modulecode_openpyxl$formatting$rule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\141\164\164\151\156\147\134\162\165\154\145\56\160\171"
#endif
},
    {"openpyxl.formula", modulecode_openpyxl$formula, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\165\154\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.formula.tokenizer", modulecode_openpyxl$formula$tokenizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\165\154\141\134\164\157\153\145\156\151\172\145\162\56\160\171"
#endif
},
    {"openpyxl.formula.translate", modulecode_openpyxl$formula$translate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\146\157\162\155\165\154\141\134\164\162\141\156\163\154\141\164\145\56\160\171"
#endif
},
    {"openpyxl.packaging", modulecode_openpyxl$packaging, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.packaging.core", modulecode_openpyxl$packaging$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\143\157\162\145\56\160\171"
#endif
},
    {"openpyxl.packaging.custom", modulecode_openpyxl$packaging$custom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\143\165\163\164\157\155\56\160\171"
#endif
},
    {"openpyxl.packaging.extended", modulecode_openpyxl$packaging$extended, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\145\170\164\145\156\144\145\144\56\160\171"
#endif
},
    {"openpyxl.packaging.manifest", modulecode_openpyxl$packaging$manifest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\155\141\156\151\146\145\163\164\56\160\171"
#endif
},
    {"openpyxl.packaging.relationship", modulecode_openpyxl$packaging$relationship, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\162\145\154\141\164\151\157\156\163\150\151\160\56\160\171"
#endif
},
    {"openpyxl.packaging.workbook", modulecode_openpyxl$packaging$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\141\143\153\141\147\151\156\147\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"openpyxl.pivot", modulecode_openpyxl$pivot, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.pivot.cache", modulecode_openpyxl$pivot$cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\143\141\143\150\145\56\160\171"
#endif
},
    {"openpyxl.pivot.fields", modulecode_openpyxl$pivot$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\146\151\145\154\144\163\56\160\171"
#endif
},
    {"openpyxl.pivot.record", modulecode_openpyxl$pivot$record, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\162\145\143\157\162\144\56\160\171"
#endif
},
    {"openpyxl.pivot.table", modulecode_openpyxl$pivot$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\160\151\166\157\164\134\164\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.reader", modulecode_openpyxl$reader, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.reader.drawings", modulecode_openpyxl$reader$drawings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\144\162\141\167\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.reader.excel", modulecode_openpyxl$reader$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\145\170\143\145\154\56\160\171"
#endif
},
    {"openpyxl.reader.strings", modulecode_openpyxl$reader$strings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.reader.workbook", modulecode_openpyxl$reader$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\162\145\141\144\145\162\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"openpyxl.styles", modulecode_openpyxl$styles, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.styles.alignment", modulecode_openpyxl$styles$alignment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\141\154\151\147\156\155\145\156\164\56\160\171"
#endif
},
    {"openpyxl.styles.borders", modulecode_openpyxl$styles$borders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\142\157\162\144\145\162\163\56\160\171"
#endif
},
    {"openpyxl.styles.builtins", modulecode_openpyxl$styles$builtins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\142\165\151\154\164\151\156\163\56\160\171"
#endif
},
    {"openpyxl.styles.cell_style", modulecode_openpyxl$styles$cell_style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\143\145\154\154\137\163\164\171\154\145\56\160\171"
#endif
},
    {"openpyxl.styles.colors", modulecode_openpyxl$styles$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\143\157\154\157\162\163\56\160\171"
#endif
},
    {"openpyxl.styles.differential", modulecode_openpyxl$styles$differential, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\144\151\146\146\145\162\145\156\164\151\141\154\56\160\171"
#endif
},
    {"openpyxl.styles.fills", modulecode_openpyxl$styles$fills, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\146\151\154\154\163\56\160\171"
#endif
},
    {"openpyxl.styles.fonts", modulecode_openpyxl$styles$fonts, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\146\157\156\164\163\56\160\171"
#endif
},
    {"openpyxl.styles.named_styles", modulecode_openpyxl$styles$named_styles, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\156\141\155\145\144\137\163\164\171\154\145\163\56\160\171"
#endif
},
    {"openpyxl.styles.numbers", modulecode_openpyxl$styles$numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\156\165\155\142\145\162\163\56\160\171"
#endif
},
    {"openpyxl.styles.protection", modulecode_openpyxl$styles$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.styles.proxy", modulecode_openpyxl$styles$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\160\162\157\170\171\56\160\171"
#endif
},
    {"openpyxl.styles.styleable", modulecode_openpyxl$styles$styleable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\163\164\171\154\145\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.styles.stylesheet", modulecode_openpyxl$styles$stylesheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\163\164\171\154\145\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.styles.table", modulecode_openpyxl$styles$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\163\164\171\154\145\163\134\164\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.utils", modulecode_openpyxl$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.utils.bound_dictionary", modulecode_openpyxl$utils$bound_dictionary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\142\157\165\156\144\137\144\151\143\164\151\157\156\141\162\171\56\160\171"
#endif
},
    {"openpyxl.utils.cell", modulecode_openpyxl$utils$cell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\143\145\154\154\56\160\171"
#endif
},
    {"openpyxl.utils.datetime", modulecode_openpyxl$utils$datetime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\144\141\164\145\164\151\155\145\56\160\171"
#endif
},
    {"openpyxl.utils.escape", modulecode_openpyxl$utils$escape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\145\163\143\141\160\145\56\160\171"
#endif
},
    {"openpyxl.utils.exceptions", modulecode_openpyxl$utils$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"openpyxl.utils.formulas", modulecode_openpyxl$utils$formulas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\146\157\162\155\165\154\141\163\56\160\171"
#endif
},
    {"openpyxl.utils.indexed_list", modulecode_openpyxl$utils$indexed_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\151\156\144\145\170\145\144\137\154\151\163\164\56\160\171"
#endif
},
    {"openpyxl.utils.protection", modulecode_openpyxl$utils$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.utils.units", modulecode_openpyxl$utils$units, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\165\164\151\154\163\134\165\156\151\164\163\56\160\171"
#endif
},
    {"openpyxl.workbook", modulecode_openpyxl$workbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.workbook._writer", modulecode_openpyxl$workbook$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.workbook.child", modulecode_openpyxl$workbook$child, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\143\150\151\154\144\56\160\171"
#endif
},
    {"openpyxl.workbook.defined_name", modulecode_openpyxl$workbook$defined_name, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\144\145\146\151\156\145\144\137\156\141\155\145\56\160\171"
#endif
},
    {"openpyxl.workbook.external_link", modulecode_openpyxl$workbook$external_link, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\145\170\164\145\162\156\141\154\137\154\151\156\153\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.workbook.external_link.external", modulecode_openpyxl$workbook$external_link$external, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\145\170\164\145\162\156\141\154\137\154\151\156\153\134\145\170\164\145\162\156\141\154\56\160\171"
#endif
},
    {"openpyxl.workbook.external_reference", modulecode_openpyxl$workbook$external_reference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\145\170\164\145\162\156\141\154\137\162\145\146\145\162\145\156\143\145\56\160\171"
#endif
},
    {"openpyxl.workbook.function_group", modulecode_openpyxl$workbook$function_group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\146\165\156\143\164\151\157\156\137\147\162\157\165\160\56\160\171"
#endif
},
    {"openpyxl.workbook.properties", modulecode_openpyxl$workbook$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.workbook.protection", modulecode_openpyxl$workbook$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.workbook.smart_tags", modulecode_openpyxl$workbook$smart_tags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\163\155\141\162\164\137\164\141\147\163\56\160\171"
#endif
},
    {"openpyxl.workbook.views", modulecode_openpyxl$workbook$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\166\151\145\167\163\56\160\171"
#endif
},
    {"openpyxl.workbook.web", modulecode_openpyxl$workbook$web, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\167\145\142\56\160\171"
#endif
},
    {"openpyxl.workbook.workbook", modulecode_openpyxl$workbook$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\142\157\157\153\134\167\157\162\153\142\157\157\153\56\160\171"
#endif
},
    {"openpyxl.worksheet", modulecode_openpyxl$worksheet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.worksheet._read_only", modulecode_openpyxl$worksheet$_read_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\162\145\141\144\137\157\156\154\171\56\160\171"
#endif
},
    {"openpyxl.worksheet._reader", modulecode_openpyxl$worksheet$_reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\162\145\141\144\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet._write_only", modulecode_openpyxl$worksheet$_write_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\167\162\151\164\145\137\157\156\154\171\56\160\171"
#endif
},
    {"openpyxl.worksheet._writer", modulecode_openpyxl$worksheet$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\137\167\162\151\164\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet.cell_range", modulecode_openpyxl$worksheet$cell_range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\143\145\154\154\137\162\141\156\147\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.copier", modulecode_openpyxl$worksheet$copier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\143\157\160\151\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet.datavalidation", modulecode_openpyxl$worksheet$datavalidation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\144\141\164\141\166\141\154\151\144\141\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.worksheet.dimensions", modulecode_openpyxl$worksheet$dimensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\144\151\155\145\156\163\151\157\156\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.drawing", modulecode_openpyxl$worksheet$drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\144\162\141\167\151\156\147\56\160\171"
#endif
},
    {"openpyxl.worksheet.filters", modulecode_openpyxl$worksheet$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\146\151\154\164\145\162\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.formula", modulecode_openpyxl$worksheet$formula, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\146\157\162\155\165\154\141\56\160\171"
#endif
},
    {"openpyxl.worksheet.header_footer", modulecode_openpyxl$worksheet$header_footer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\150\145\141\144\145\162\137\146\157\157\164\145\162\56\160\171"
#endif
},
    {"openpyxl.worksheet.hyperlink", modulecode_openpyxl$worksheet$hyperlink, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\150\171\160\145\162\154\151\156\153\56\160\171"
#endif
},
    {"openpyxl.worksheet.merge", modulecode_openpyxl$worksheet$merge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\155\145\162\147\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.page", modulecode_openpyxl$worksheet$page, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\141\147\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.pagebreak", modulecode_openpyxl$worksheet$pagebreak, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\141\147\145\142\162\145\141\153\56\160\171"
#endif
},
    {"openpyxl.worksheet.print_settings", modulecode_openpyxl$worksheet$print_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\162\151\156\164\137\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.properties", modulecode_openpyxl$worksheet$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\162\157\160\145\162\164\151\145\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.protection", modulecode_openpyxl$worksheet$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\160\162\157\164\145\143\164\151\157\156\56\160\171"
#endif
},
    {"openpyxl.worksheet.related", modulecode_openpyxl$worksheet$related, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\162\145\154\141\164\145\144\56\160\171"
#endif
},
    {"openpyxl.worksheet.scenario", modulecode_openpyxl$worksheet$scenario, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\163\143\145\156\141\162\151\157\56\160\171"
#endif
},
    {"openpyxl.worksheet.table", modulecode_openpyxl$worksheet$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\164\141\142\154\145\56\160\171"
#endif
},
    {"openpyxl.worksheet.views", modulecode_openpyxl$worksheet$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\166\151\145\167\163\56\160\171"
#endif
},
    {"openpyxl.worksheet.worksheet", modulecode_openpyxl$worksheet$worksheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\157\162\153\163\150\145\145\164\134\167\157\162\153\163\150\145\145\164\56\160\171"
#endif
},
    {"openpyxl.writer", modulecode_openpyxl$writer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\162\151\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.writer.excel", modulecode_openpyxl$writer$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\162\151\164\145\162\134\145\170\143\145\154\56\160\171"
#endif
},
    {"openpyxl.writer.theme", modulecode_openpyxl$writer$theme, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\167\162\151\164\145\162\134\164\150\145\155\145\56\160\171"
#endif
},
    {"openpyxl.xml", modulecode_openpyxl$xml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"openpyxl.xml.constants", modulecode_openpyxl$xml$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\170\155\154\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"openpyxl.xml.functions", modulecode_openpyxl$xml$functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\157\160\145\156\160\171\170\154\134\170\155\154\134\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pyautogui", modulecode_pyautogui, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\141\165\164\157\147\165\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pyautogui._pyautogui_win", modulecode_pyautogui$_pyautogui_win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\141\165\164\157\147\165\151\134\137\160\171\141\165\164\157\147\165\151\137\167\151\156\56\160\171"
#endif
},
    {"pygetwindow", modulecode_pygetwindow, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\145\164\167\151\156\144\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pygetwindow._pygetwindow_win", modulecode_pygetwindow$_pygetwindow_win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\145\164\167\151\156\144\157\167\134\137\160\171\147\145\164\167\151\156\144\157\167\137\167\151\156\56\160\171"
#endif
},
    {"pymsgbox", modulecode_pymsgbox, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\155\163\147\142\157\170\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pymsgbox._native_win", modulecode_pymsgbox$_native_win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\155\163\147\142\157\170\134\137\156\141\164\151\166\145\137\167\151\156\56\160\171"
#endif
},
    {"pyperclip", modulecode_pyperclip, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\160\145\162\143\154\151\160\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pyrect", modulecode_pyrect, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\162\145\143\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pyscreeze", modulecode_pyscreeze, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\163\143\162\145\145\172\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pytweening", modulecode_pytweening, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\144\145\166\134\123\101\120\134\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\167\145\145\156\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"site", NULL, 6, 17375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\151\164\145\56\160\171"
#endif
},
    {"subprocess", NULL, 7, 44435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\163\165\142\160\162\157\143\145\163\163\56\160\171"
#endif
},
    {"tkinter", NULL, 8, 169297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"tkinter.commondialog", NULL, 9, 1343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\143\157\155\155\157\156\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.constants", NULL, 10, 1652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"tkinter.dialog", NULL, 11, 1505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.filedialog", NULL, 12, 12448, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\146\151\154\145\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.messagebox", NULL, 13, 2921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\155\145\163\163\141\147\145\142\157\170\56\160\171"
#endif
},
    {"tkinter.simpledialog", NULL, 14, 10926, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\163\151\155\160\154\145\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.ttk", NULL, 15, 55672, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\164\153\151\156\164\145\162\134\164\164\153\56\160\171"
#endif
},
    {"xml", NULL, 16, 688, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.etree", NULL, 17, 129, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\134\145\164\162\145\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.etree.ElementPath", NULL, 18, 9033, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\134\145\164\162\145\145\134\105\154\145\155\145\156\164\120\141\164\150\56\160\171"
#endif
},
    {"xml.etree.ElementTree", NULL, 19, 55916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\134\145\164\162\145\145\134\105\154\145\155\145\156\164\124\162\145\145\56\160\171"
#endif
},
    {"xml.parsers", NULL, 20, 303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\134\160\141\162\163\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"xml.parsers.expat", NULL, 21, 332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\120\162\157\147\162\141\155\40\106\151\154\145\163\134\120\171\164\150\157\156\63\61\60\134\154\151\142\134\170\155\154\134\160\141\162\163\145\162\163\134\145\170\160\141\164\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

