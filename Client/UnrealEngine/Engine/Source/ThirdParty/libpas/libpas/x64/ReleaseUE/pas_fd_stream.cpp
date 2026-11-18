// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// fd_stream_vprintf @ 140d921f0

void __cdecl fd_stream_vprintf(pas_stream *param_1,char *param_2,char *param_3)

{
  pas_vlog_fd(*(int *)&param_1[1].functions,param_2,param_3);
  return;
}

// pas_fd_stream_construct @ 140d92200

void __cdecl pas_fd_stream_construct(pas_fd_stream *param_1,int param_2)

{
  (param_1->base).functions = &pas_fd_stream_functions;
  param_1->fd = param_2;
  return;
}

// pas_fd_stream_vprintf @ 140d92220

void __cdecl pas_fd_stream_vprintf(pas_fd_stream *param_1,char *param_2,char *param_3)

{
  pas_vlog_fd(param_1->fd,param_2,param_3);
  return;
}

