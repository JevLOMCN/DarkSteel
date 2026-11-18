// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// UpdateAnimatedBoneAttributes @ 14747f4a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Anim::DataModel::FHasherBase<UE::Anim::DataModel::FHasherSha>::UpdateAnimatedBoneAttributes
          (FHasherBase<UE::Anim::DataModel::FHasherSha> *this,
          TArrayView<FAnimatedBoneAttribute_const_,int> *param_1,wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  int iVar3;
  UScriptStruct *this_00;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FString *pFVar7;
  TArray<FAttributeKey,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FAnimatedBoneAttribute *this_01;
  undefined1 local_res10 [8];
  int local_res20 [2];
  undefined4 local_98 [2];
  FAnimatedBoneAttribute *local_90;
  FName local_88;
  FAnimatedBoneAttribute *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this_01 = param_1->DataPtr;
  local_80 = this_01 + param_1->ArrayNum;
  if (this_01 != local_80) {
    do {
      this_00 = (this_01->Identifier).ScriptStruct.field0_0x0.DebugPtr;
      lVar5 = this_00->_padding_;
      local_90 = this_01;
      if (this_00->bPrepareCppStructOpsCompleted == false) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_78,(UObject *)0x0);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bPrepareCppStructOpsCompleted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x8f6,
                           L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                          );
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      bVar2 = (this_00->CppStructOps->FakeVPtr->Capabilities).field_0xe;
      pFVar7 = ::FName::ToString((FName *)this_01,&local_68);
      FSHA1::Update((FSHA1 *)this,(uchar *)(pFVar7->Data).AllocatorInstance.Data,
                    (longlong)((pFVar7->Data).ArrayNum * 2));
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar7 = ::FName::ToString(&(this_01->Identifier).BoneName,&local_58);
      FSHA1::Update((FSHA1 *)this,(uchar *)(pFVar7->Data).AllocatorInstance.Data,
                    (longlong)((pFVar7->Data).ArrayNum * 2));
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_res20[0] = (this_01->Identifier).BoneIndex;
      FSHA1::Update((FSHA1 *)this,(uchar *)local_res20,4);
      local_88 = (FName)this_00->_padding_;
      pFVar7 = ::FName::ToString(&local_88,&local_48);
      FSHA1::Update((FSHA1 *)this,(uchar *)(pFVar7->Data).AllocatorInstance.Data,
                    (longlong)((pFVar7->Data).ArrayNum * 2));
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pTVar8 = FAttributeCurve::GetConstRefOfKeys(&this_01->Curve);
      iVar3 = pTVar8->ArrayNum;
      pFVar9 = (pTVar8->AllocatorInstance).Data;
      pFVar1 = pFVar9 + (longlong)iVar3 * 0x18;
      while( true ) {
        if (pTVar8->ArrayNum != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FAttributeKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar9 == pFVar1) break;
        FSHA1::Update((FSHA1 *)this,(uchar *)pFVar9,4);
        if ((bVar2 & 0x10) == 0) {
          FSHA1::Update((FSHA1 *)this,*(uchar **)(pFVar9 + 8),(longlong)(int)lVar5);
          pFVar9 = pFVar9 + 0x18;
        }
        else {
          local_98[0] = (**(code **)(this_00->_padding_ + 0x370))(this_00);
          FSHA1::Update((FSHA1 *)this,(uchar *)local_98,4);
          pFVar9 = pFVar9 + 0x18;
        }
      }
      this_01 = local_90 + 1;
    } while (this_01 != local_80);
  }
  return;
}

// UpdateTransformCurves @ 147482bc0

void __thiscall
UE::Anim::DataModel::FHasherBase<UE::Anim::DataModel::FHasherSha>::UpdateTransformCurves
          (FHasherBase<UE::Anim::DataModel::FHasherSha> *this,
          TArrayView<FTransformCurve_const_,int> *param_1,wchar_t *param_2)

{
  FString *pFVar1;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FTransformCurve *pFVar4;
  FRichCurve *pFVar5;
  FTransformCurve *pFVar6;
  FName local_res8;
  FString local_28;
  
  pFVar4 = param_1->DataPtr;
  pFVar6 = pFVar4 + param_1->ArrayNum;
  for (; pFVar4 != pFVar6; pFVar4 = pFVar4 + 1) {
    local_res8 = (FName)pFVar4->_padding_;
    pFVar1 = ::FName::ToString(&local_res8,&local_28);
    FSHA1::Update((FSHA1 *)this,(uchar *)(pFVar1->Data).AllocatorInstance.Data,
                  (longlong)((pFVar1->Data).ArrayNum * 2));
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar5 = (pFVar4->TranslationCurve).FloatCurves;
    lVar3 = 3;
    do {
      FSHA1::Update((FSHA1 *)this,(uchar *)&pFVar5->_padding_,4);
      pTVar2 = FRichCurve::GetConstRefOfKeys(pFVar5);
      FSHA1::Update((FSHA1 *)this,(uchar *)(pTVar2->AllocatorInstance).Data,
                    (longlong)(pTVar2->ArrayNum * 0x1c));
      FSHA1::Update((FSHA1 *)this,(uchar *)((longlong)&pFVar5->_padding_ + 4),1);
      FSHA1::Update((FSHA1 *)this,(uchar *)((longlong)&pFVar5->_padding_ + 5),1);
      pFVar5 = pFVar5 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    pFVar5 = (pFVar4->RotationCurve).FloatCurves;
    lVar3 = 3;
    do {
      FSHA1::Update((FSHA1 *)this,(uchar *)&pFVar5->_padding_,4);
      pTVar2 = FRichCurve::GetConstRefOfKeys(pFVar5);
      FSHA1::Update((FSHA1 *)this,(uchar *)(pTVar2->AllocatorInstance).Data,
                    (longlong)(pTVar2->ArrayNum * 0x1c));
      FSHA1::Update((FSHA1 *)this,(uchar *)((longlong)&pFVar5->_padding_ + 4),1);
      FSHA1::Update((FSHA1 *)this,(uchar *)((longlong)&pFVar5->_padding_ + 5),1);
      pFVar5 = pFVar5 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    pFVar5 = (pFVar4->ScaleCurve).FloatCurves;
    lVar3 = 3;
    do {
      FSHA1::Update((FSHA1 *)this,(uchar *)&pFVar5->_padding_,4);
      pTVar2 = FRichCurve::GetConstRefOfKeys(pFVar5);
      FSHA1::Update((FSHA1 *)this,(uchar *)(pTVar2->AllocatorInstance).Data,
                    (longlong)(pTVar2->ArrayNum * 0x1c));
      FSHA1::Update((FSHA1 *)this,(uchar *)((longlong)&pFVar5->_padding_ + 4),1);
      FSHA1::Update((FSHA1 *)this,(uchar *)((longlong)&pFVar5->_padding_ + 5),1);
      pFVar5 = pFVar5 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

