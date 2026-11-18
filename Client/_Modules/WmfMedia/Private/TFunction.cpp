// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 2

// ~TFunction<FMediaTimeStamp___cdecl(FTimespan,enum_EMediaTrackType)> @ 14ea966b0

void __thiscall
TFunction<FMediaTimeStamp___cdecl(FTimespan,enum_EMediaTrackType)>::
~TFunction<FMediaTimeStamp___cdecl(FTimespan,enum_EMediaTrackType)>(void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x28);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ~TFunction<enum_FWmfMediaSession::EWorkItemResult___cdecl(TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*)> @ 14ea966e0

void __thiscall
TFunction<enum_FWmfMediaSession::EWorkItemResult___cdecl(TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*)>
::
~TFunction<enum_FWmfMediaSession::EWorkItemResult___cdecl(TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*)>
          (void *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x28);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

