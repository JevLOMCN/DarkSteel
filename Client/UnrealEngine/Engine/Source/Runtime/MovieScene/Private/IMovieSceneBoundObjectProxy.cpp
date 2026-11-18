// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// BP_GetBoundObjectForSequencer @ 14605a210

UObject * __thiscall
IMovieSceneBoundObjectProxy::BP_GetBoundObjectForSequencer
          (IMovieSceneBoundObjectProxy *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"Do not directly call Event functions in Interfaces. Call Execute_BP_GetBoundObjectForSequencer instead.\""
                     ,
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\IMovieSceneBoundObjectProxy.gen.cpp"
                     ,0x24,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  return (UObject *)0x0;
}

// Execute_BP_GetBoundObjectForSequencer @ 14605a8d0

UObject * __cdecl
IMovieSceneBoundObjectProxy::Execute_BP_GetBoundObjectForSequencer
          (UObject *param_1,UObject *param_2)

{
  UClass *this;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UFunction *pUVar5;
  UObject *local_18;
  UObject *local_10;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O != 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\IMovieSceneBoundObjectProxy.gen.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  this = *(UClass **)&param_1->field_0x10;
  pUVar4 = UMovieSceneBoundObjectProxy::StaticClass();
  bVar2 = UClass::ImplementsInterface(this,pUVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("O->GetClass()->ImplementsInterface(UMovieSceneBoundObjectProxy::StaticClass())"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\IMovieSceneBoundObjectProxy.gen.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  local_10 = (UObject *)0x0;
  pUVar5 = UObject::FindFunction
                     (param_1,NAME_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer);
  if (pUVar5 != (UFunction *)0x0) {
    local_18 = param_2;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar5,&local_18);
  }
  return local_10;
}

