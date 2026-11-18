// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// Run @ 14724a9d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassCommandAddElement::Run(FMassCommandAddElement *this,FMassEntityManager *param_1)

{
  int iVar1;
  FMassEntityHandle *pFVar2;
  TNotNull<UScriptStruct_const_*> TVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uStack_1c;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassCommandAddElement::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId474,"MassCommandAddElement_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x1da);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassCommandAddElement::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId474);
  }
  pFVar2 = (FMassEntityHandle *)this->_padding_;
  TVar3.Val = (this->ElementType).Val;
  iVar1 = (int)this->_padding_;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  FMassEntityManager::AddElementToEntities(param_1,&local_18,TVar3);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

