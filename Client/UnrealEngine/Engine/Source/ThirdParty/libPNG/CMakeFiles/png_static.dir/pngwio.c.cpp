// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 5

// png_write_data @ 140dc5fe0

void __cdecl png_write_data(png_struct_def_conflict *param_1,uchar *param_2,ulong64 param_3)

{
  if (param_1->write_data_fn !=
      (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dc5ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_1->write_data_fn)(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Call to NULL write function");
}

// png_default_write_data @ 140dc6010

void __cdecl png_default_write_data(png_struct_def_conflict *param_1,uchar *param_2,ulong64 param_3)

{
  size_t sVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    sVar1 = fwrite(param_2,1,param_3,param_1->io_ptr);
    if (sVar1 != param_3) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Write Error");
    }
  }
  return;
}

// png_flush @ 140dc6060

void __cdecl png_flush(png_struct_def_conflict *param_1)

{
  if (param_1->output_flush_fn != (_func___cdecl_void_png_struct_def_ptr_conflict *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dc606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_1->output_flush_fn)(param_1);
    return;
  }
  return;
}

// png_default_flush @ 140dc6080

void __cdecl png_default_flush(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dc608c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fflush(param_1->io_ptr);
    return;
  }
  return;
}

// png_set_write_fn @ 140dc60a0

void __cdecl
png_set_write_fn(png_struct_def_conflict *param_1,void *param_2,
                _func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *param_3,
                _func___cdecl_void_png_struct_def_ptr_conflict *param_4)

{
  code *pcVar1;
  code *pcVar2;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->io_ptr = param_2;
    pcVar1 = png_default_write_data;
    if (param_3 != (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0) {
      pcVar1 = param_3;
    }
    pcVar2 = png_default_flush;
    if (param_4 != (_func___cdecl_void_png_struct_def_ptr_conflict *)0x0) {
      pcVar2 = param_4;
    }
    param_1->write_data_fn = pcVar1;
    param_1->output_flush_fn = pcVar2;
    if (param_1->read_data_fn !=
        (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0) {
      param_1->read_data_fn =
           (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
      return;
    }
  }
  return;
}

