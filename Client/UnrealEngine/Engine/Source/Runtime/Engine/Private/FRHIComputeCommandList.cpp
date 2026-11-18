// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// BeginUAVOverlap @ 147c38520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::BeginUAVOverlap
          (FRHIComputeCommandList *this,TArrayView<FRHIUnorderedAccessView_*_const,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IRHIComputeContext *pIVar4;
  void *_Dst;
  undefined8 *puVar5;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar4 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_18 = *(undefined4 *)&param_1->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_10 = param_1->ArrayNum;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pIVar4->_padding_ + 0x80))(pIVar4,&local_18);
    return;
  }
  iVar1 = param_1->ArrayNum;
  _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(ulonglong)(uint)(iVar1 * 8),8);
  memcpy(_Dst,param_1->DataPtr,(ulonglong)(uint)(iVar1 * 8));
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar5;
  *(undefined8 **)&this->field_0x30 = puVar5 + 1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5[1] = 0;
  puVar5[2] = _Dst;
  puVar5[3] = CONCAT44(uStack_1c,iVar1);
  *puVar5 = &___7FRHICommandBeginSpecificUAVOverlap__6B_;
  return;
}

// EndUAVOverlap @ 147c4d950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::EndUAVOverlap
          (FRHIComputeCommandList *this,TArrayView<FRHIUnorderedAccessView_*_const,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IRHIComputeContext *pIVar4;
  void *_Dst;
  undefined8 *puVar5;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar4 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    local_18 = *(undefined4 *)&param_1->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_10 = param_1->ArrayNum;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(pIVar4->_padding_ + 0x90))(pIVar4,&local_18);
    return;
  }
  iVar1 = param_1->ArrayNum;
  _Dst = FMemStackBase::Alloc((FMemStackBase *)this,(ulonglong)(uint)(iVar1 * 8),8);
  memcpy(_Dst,param_1->DataPtr,(ulonglong)(uint)(iVar1 * 8));
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar5;
  *(undefined8 **)&this->field_0x30 = puVar5 + 1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5[1] = 0;
  puVar5[2] = _Dst;
  puVar5[3] = CONCAT44(uStack_1c,iVar1);
  *puVar5 = &___7FRHICommandEndSpecificUAVOverlap__6B_;
  return;
}

// Transition @ 1486699a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::Transition
          (FRHIComputeCommandList *this,FRHITransitionInfo *param_1,
          ERHITransitionCreateFlags param_2)

{
  TArrayView<FRHITransitionInfo_const_,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = param_1;
  Transition(this,&local_18,param_2);
  return;
}

