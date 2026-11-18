// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayerProxy
// Functions: 7

// BlockingFinished @ 14454e650

void __cdecl FMoviePlayerProxy::BlockingFinished(void)

{
  return;
}

// BlockingForceFinished @ 14454e660

void __cdecl FMoviePlayerProxy::BlockingForceFinished(void)

{
  if (Server != (IMoviePlayerProxyServer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014454e66f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Server + 0x10))();
    return;
  }
  return;
}

// BlockingStarted @ 14454e680

void __cdecl FMoviePlayerProxy::BlockingStarted(void)

{
  if (Server != (IMoviePlayerProxyServer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014454e68f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*Server)();
    return;
  }
  return;
}

// BlockingTick @ 14454e6a0

void __cdecl FMoviePlayerProxy::BlockingTick(void)

{
  if (Server != (IMoviePlayerProxyServer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014454e6af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Server + 8))();
    return;
  }
  return;
}

// RegisterServer @ 14454e6c0

void __cdecl FMoviePlayerProxy::RegisterServer(IMoviePlayerProxyServer *param_1)

{
  Server = param_1;
  return;
}

// SetIsSlateThreadAllowed @ 14454e6d0

void __cdecl FMoviePlayerProxy::SetIsSlateThreadAllowed(bool param_1)

{
  if (Server != (IMoviePlayerProxyServer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014454e6e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Server + 0x18))(Server,param_1);
    return;
  }
  return;
}

// UnregisterServer @ 14454e6f0

void __cdecl FMoviePlayerProxy::UnregisterServer(void)

{
  Server = (IMoviePlayerProxyServer *)0x0;
  return;
}

