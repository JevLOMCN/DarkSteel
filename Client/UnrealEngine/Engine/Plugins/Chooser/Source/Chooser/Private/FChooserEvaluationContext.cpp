// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 3

// StaticStruct @ 14a871240

UScriptStruct * __cdecl FChooserEvaluationContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserEvaluationContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserEvaluationContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserEvaluationContext,(UObject *)pUVar1,
                         L"ChooserEvaluationContext");
  }
  return Z_Registration_Info_UScriptStruct_FChooserEvaluationContext.OuterSingleton;
}

// AddObjectParam @ 14a8812b0

void __thiscall
FChooserEvaluationContext::AddObjectParam(FChooserEvaluationContext *this,UObject *param_1)

{
  TArray<FChooserEvaluationInputObject,TFixedAllocator<4>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UPackage *pUVar7;
  uint uVar8;
  TTypeCompatibleBytes<FChooserEvaluationInputObject> local_28 [2];
  FStructView local_18;
  
  pTVar1 = &this->ObjectParams;
  local_28[0].Pad = (uchar  [8])param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  if ((pTVar1 <= local_28) &&
     (local_28 < (pTVar1->AllocatorInstance).InlineData + (this->ObjectParams).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ObjectParams).ArrayNum;
  piVar2 = &(this->ObjectParams).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FChooserEvaluationInputObject>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ObjectParams).ArrayNum = iVar5 + 1;
  *&(pTVar1->AllocatorInstance).InlineData[iVar5].Pad = local_28[0].Pad;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0].Pad != (uchar  [8])0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_28[0].Pad);
  }
  iVar5 = (this->ObjectParams).ArrayNum;
  uVar8 = iVar5 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar5) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ObjectParams).ArrayNum;
  if (Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserEvaluationInputObject,(UObject *)pUVar7,
                         L"ChooserEvaluationInputObject");
  }
  local_18.ScriptStruct =
       Z_Registration_Info_UScriptStruct_FChooserEvaluationInputObject.OuterSingleton;
  local_18.StructMemory = (pTVar1->AllocatorInstance).InlineData[iVar5 + -1].Pad;
  AddStructViewParam(this,(FStructView *)(local_28 + 2));
  return;
}

// AddStructViewParam @ 14a881440

void __thiscall
FChooserEvaluationContext::AddStructViewParam(FChooserEvaluationContext *this,FStructView *param_1)

{
  TArray<FStructView,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FStructView> FVar9;
  
  FVar9 = (this->Params).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Params;
  if (FVar9 == (ForElementType<FStructView>)0x0) {
    FVar9 = (ForElementType<FStructView>)pTVar1;
  }
  if (((ulonglong)FVar9 <= param_1) &&
     (param_1 < (FStructView *)((longlong)(this->Params).ArrayMax * 0x10 + (longlong)FVar9))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->Params).ArrayNum;
  piVar2 = &(this->Params).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStructView>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  pUVar5 = param_1->ScriptStruct;
  puVar6 = param_1->StructMemory;
  (this->Params).ArrayNum = iVar8 + 1;
  FVar9 = (this->Params).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FStructView>)0x0) {
    FVar9 = (ForElementType<FStructView>)pTVar1;
  }
  puVar3 = (undefined8 *)((longlong)FVar9 + (longlong)iVar8 * 0x10);
  *puVar3 = pUVar5;
  puVar3[1] = puVar6;
  return;
}

