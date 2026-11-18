// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// AppendLine @ 141744070

void __thiscall FTextBuilder::AppendLine(FTextBuilder *this,FName *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FName::ToString(param_1,&local_18);
  BuildAndAppendLine(this,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendLine @ 1417440b0

void __thiscall FTextBuilder::AppendLine(FTextBuilder *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar1 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  BuildAndAppendLine(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendLine @ 141744150

void __thiscall FTextBuilder::AppendLine(FTextBuilder *this,FText *param_1)

{
  undefined1 local_res10 [24];
  FText local_18;
  
  local_18.TextData.Reference = (param_1->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res10);
  }
  local_18.Flags = param_1->Flags;
  BuildAndAppendLine(this,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// AppendLine @ 1417441b0

void __thiscall FTextBuilder::AppendLine(FTextBuilder *this)

{
  FText *pFVar1;
  undefined1 local_res10 [24];
  FText local_18;
  
  pFVar1 = FText::GetEmpty();
  local_18.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res10);
  }
  local_18.Flags = 0;
  BuildAndAppendLine(this,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417441fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// AppendLineFormat @ 141744210

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextBuilder::AppendLineFormat
          (FTextBuilder *this,FTextFormat *param_1,
          TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FFormatArgumentValue *pFVar2;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_38;
  FTextFormat local_28;
  FText local_18;
  
  local_28.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_28.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_28.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = (FFormatArgumentValue *)(param_2->AllocatorInstance).Data;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_38.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,0,&local_38.AllocatorInstance,iVar1,&local_38.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_38.AllocatorInstance.Data,pFVar2,iVar1);
  }
  FTextFormatter::Format(&local_18,&local_28,&local_38,false,false);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FFormatArgumentValue *)local_38.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.TextFormatData.SharedReferenceCount.ReferenceController);
  BuildAndAppendLine(this,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// AppendLineFormat @ 141744310

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextBuilder::AppendLineFormat
          (FTextBuilder *this,FTextFormat *param_1,
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
          *param_2)

{
  FText *pFVar1;
  FTextFormat local_28;
  FText local_18;
  
  local_28.TextFormatData.Object = (param_1->TextFormatData).Object;
  local_28.TextFormatData.SharedReferenceCount.ReferenceController =
       (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_28.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = FText::Format(&local_18,&local_28,param_2);
  BuildAndAppendLine(this,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// BuildAndAppendLine @ 141748f80

void __thiscall FTextBuilder::BuildAndAppendLine(FTextBuilder *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ITextData *pIVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  ITextData IVar10;
  ITextData IVar11;
  uint uVar12;
  uint uVar13;
  TRefCountPtr<ITextData> TVar14;
  TRefCountPtr<ITextData> TVar15;
  ITextData local_res8;
  FText local_28;
  
  IVar11 = (ITextData)0x0;
  uVar12 = 0;
  local_res8 = (ITextData)((ulonglong)local_res8 & 0xffffffff00000000);
  if (this->IndentCount < 1) {
    pFVar9 = FText::AsCultureInvariant(&local_28,param_1);
    piVar1 = &(this->Lines).ArrayMax;
    iVar8 = (this->Lines).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->Lines).ArrayNum = iVar8 + 1;
    FText::FText((FText *)((this->Lines).AllocatorInstance.Data + (longlong)iVar8 * 0x10),pFVar9);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    iVar2 = (param_1->Data).ArrayNum;
    iVar8 = this->IndentCount * 4;
    local_28.TextData.Reference = (ITextData *)0x0;
    local_28.Flags = 0;
    local_28._12_4_ = 0;
    iVar5 = iVar2 + -1 + iVar8;
    if (iVar2 == 0) {
      iVar5 = iVar8;
    }
    ::FString::Reserve((FString *)&local_28,iVar5);
    IVar10 = IVar11;
    if (0 < this->IndentCount) {
      do {
        ::FString::AppendChars((FString *)&local_28,L"    ",4);
        IVar10._0_4_ = IVar10._0_4_ + 1;
        IVar10._4_4_ = 0;
      } while ((int)IVar10._0_4_ < this->IndentCount);
    }
    iVar8 = (param_1->Data).ArrayNum;
    uVar13 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar13 = uVar12;
    }
    ::FString::AppendChars
              ((FString *)&local_28,(wchar_t *)(param_1->Data).AllocatorInstance.Data,uVar13);
    if ((int)local_28.Flags < 2) {
      pFVar9 = FText::GetEmpty();
      IVar11 = (ITextData)(pFVar9->TextData).Reference;
      if (IVar11 != (ITextData)0x0) {
        (**(code **)((longlong)*(ITextData *)IVar11 + 8))(IVar11,&local_res8);
      }
      uVar12 = pFVar9->Flags;
      bVar7 = true;
      bVar6 = false;
      TVar14.Reference = (ITextData *)IVar11;
      TVar15.Reference = local_28.TextData.Reference;
    }
    else {
      local_res8 = (ITextData)0xffffffffffffffff;
      IVar10 = (ITextData)::operator_new(0x38);
      if (IVar10 != (ITextData)0x0) {
        *(ITextData *)((longlong)IVar10 + 8) = (ITextData)0x0;
        *(undefined1 *)((longlong)IVar10 + 0x10) = 0;
        *(undefined ***)IVar10 = &___7FTextHistory_Base__6B_;
        *(ITextData *)((longlong)IVar10 + 0x18) = local_res8;
        *(ITextData **)((longlong)IVar10 + 0x20) = local_28.TextData.Reference;
        local_28.TextData.Reference = (ITextData *)0x0;
        *(uint *)((longlong)IVar10 + 0x28) = local_28.Flags;
        *(undefined4 *)((longlong)IVar10 + 0x2c) = local_28._12_4_;
        local_28.Flags = 0;
        local_28._12_4_ = 0;
        *(ITextData *)((longlong)IVar10 + 0x30) = (ITextData)0x0;
        LOCK();
        *(int *)((longlong)IVar10 + 8) = *(int *)((longlong)IVar10 + 8) + 1;
        UNLOCK();
        IVar11 = IVar10;
      }
      bVar7 = false;
      bVar6 = true;
      TVar14.Reference = local_28.TextData.Reference;
      TVar15.Reference = (ITextData *)IVar11;
    }
    if (IVar11 != (ITextData)0x0) {
      (**(code **)((longlong)*(ITextData *)IVar11 + 8))(IVar11,&local_res8);
    }
    if ((bVar6) && ((ITextData)TVar15.Reference != (ITextData)0x0)) {
      (**(code **)((longlong)*TVar15.Reference + 0x10))(TVar15.Reference);
    }
    if ((bVar7) && ((ITextData)TVar14.Reference != (ITextData)0x0)) {
      (**(code **)((longlong)*TVar14.Reference + 0x10))(TVar14.Reference);
    }
    iVar8 = (this->Lines).ArrayNum;
    piVar1 = &(this->Lines).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->Lines).ArrayNum = iVar8 + 1;
    pFVar3 = (this->Lines).AllocatorInstance.Data;
    *(ITextData *)(pFVar3 + (longlong)iVar8 * 0x10) = IVar11;
    *(uint *)(pFVar3 + (longlong)iVar8 * 0x10 + 8) = uVar12 | 2;
    pFVar9 = FText::GetEmpty();
    pIVar4 = (pFVar9->TextData).Reference;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_res8);
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
    if ((ITextData)local_28.TextData.Reference != (ITextData)0x0) {
      FMemory::Free(local_28.TextData.Reference);
    }
  }
  return;
}

// BuildAndAppendLine @ 1417491f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FTextBuilder::BuildAndAppendLine(FTextBuilder *this,FText *param_1)

{
  int *piVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  ITextData *pIVar9;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ITextData *pIVar13;
  uint uVar14;
  ETextFormatFlags local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_118;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_108;
  FText local_f8;
  ITextData local_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined1 local_d8 [8];
  FText local_d0;
  FText local_c0;
  ITextData *local_b0;
  undefined4 local_a8;
  ITextData *local_a0;
  uint local_98;
  FTextFormat local_88;
  FFormatArgumentValue local_78;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_58;
  TSharedRef<FTextFormatData,1> local_48;
  
  pIVar13 = (ITextData *)0x0;
  uVar14 = 0;
  local_res8[0] = None;
  local_res8[1] = None;
  local_res8[2] = None;
  local_res8[3] = None;
  if (this->IndentCount < 1) {
    iVar7 = (this->Lines).ArrayNum;
    piVar1 = &(this->Lines).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->Lines).ArrayNum = iVar7 + 1;
    FText::FText((FText *)((this->Lines).AllocatorInstance.Data + (longlong)iVar7 * 0x10),param_1);
    return;
  }
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  ::FString::Reserve(&local_118,this->IndentCount * 4 + 3);
  pIVar9 = pIVar13;
  if (0 < this->IndentCount) {
    do {
      ::FString::AppendChars(&local_118,L"    ",4);
      uVar12 = (int)pIVar9 + 1;
      pIVar9 = (ITextData *)(ulonglong)uVar12;
    } while ((int)uVar12 < this->IndentCount);
  }
  ::FString::AppendChars(&local_118,L"{0}",3);
  local_c0.TextData.Reference = (param_1->TextData).Reference;
  (param_1->TextData).Reference = (ITextData *)0x0;
  local_c0.Flags = param_1->Flags;
  pFVar8 = FText::GetEmpty();
  pIVar9 = (param_1->TextData).Reference;
  pIVar2 = (pFVar8->TextData).Reference;
  if (pIVar9 != pIVar2) {
    (param_1->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
    }
    if (pIVar9 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
    }
  }
  param_1->Flags = 0;
  if (local_118.Data.ArrayNum < 2) {
    pFVar8 = FText::GetEmpty();
    pIVar13 = (pFVar8->TextData).Reference;
    local_a0 = pIVar13;
    if (pIVar13 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar13 + 8))(pIVar13,local_res20);
    }
    uVar14 = pFVar8->Flags;
    bVar4 = true;
    bVar6 = false;
    pIVar9 = pIVar13;
    local_98 = uVar14;
  }
  else {
    local_e8 = (ITextData)0xffffffffffffffff;
    pIVar9 = ::operator_new(0x38);
    if (pIVar9 != (ITextData *)0x0) {
      pIVar9[1] = (ITextData)0x0;
      *(undefined1 *)(pIVar9 + 2) = 0;
      *pIVar9 = (ITextData)&___7FTextHistory_Base__6B_;
      pIVar9[3] = local_e8;
      pIVar9[4] = (ITextData)local_118.Data.AllocatorInstance.Data;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pIVar9 + 5) = local_118.Data.ArrayNum;
      *(int *)&pIVar9[5].field_0x4 = local_118.Data.ArrayMax;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      pIVar9[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar9 + 1) = *(int *)(pIVar9 + 1) + 1;
      UNLOCK();
      pIVar13 = pIVar9;
    }
    bVar4 = false;
    bVar6 = true;
    local_a8 = 0;
    pIVar9 = local_a0;
    local_b0 = pIVar13;
  }
  pIVar2 = local_b0;
  if (pIVar13 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar13 + 8))(pIVar13,local_e0);
  }
  if ((bVar6) && (pIVar2 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  }
  if ((bVar4) && (pIVar9 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
  }
  local_res8[0] = 1;
  pTVar10 = FTextFormatPatternDefinition::GetDefault(&local_58);
  local_d0.TextData.Reference = pIVar13;
  if (pIVar13 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar13 + 8))(pIVar13,local_dc);
  }
  local_d0.Flags = uVar14 | 2;
  MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&local_48,&local_d0,local_res8,pTVar10);
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  local_78.Type = Text;
  FText::FText((FText *)&local_78.TextValue,&local_c0);
  if ((local_78.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_108.AllocatorInstance.Data,&local_78,1);
  local_88.TextFormatData.Object = local_48.Object;
  local_88.TextFormatData.SharedReferenceCount.ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTextFormatter::Format(&local_f8,&local_88,&local_108,false,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.TextFormatData.SharedReferenceCount.ReferenceController);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FFormatArgumentValue *)local_108.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
  }
  iVar7 = (this->Lines).ArrayNum;
  piVar1 = &(this->Lines).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Lines).ArrayNum = iVar7 + 1;
  pFVar11 = (this->Lines).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar11 = 0;
  *(ITextData **)pFVar11 = local_f8.TextData.Reference;
  local_f8.TextData.Reference = (ITextData *)0x0;
  *(uint *)(pFVar11 + 8) = local_f8.Flags;
  pFVar8 = FText::GetEmpty();
  TVar5.Reference = local_f8.TextData.Reference;
  pIVar9 = (pFVar8->TextData).Reference;
  if (local_f8.TextData.Reference != pIVar9) {
    local_f8.TextData.Reference = pIVar9;
    if (pIVar9 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar9 + 8))(pIVar9,local_d8);
    }
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
    }
  }
  local_f8.Flags = 0;
  if (local_f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
  }
  if (pIVar13 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar13 + 0x10))(pIVar13);
  }
  if ((ITextData)local_118.Data.AllocatorInstance.Data != (ITextData)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// Clear @ 14174b780

void __thiscall FTextBuilder::Clear(FTextBuilder *this)

{
  int *piVar1;
  int iVar2;
  FText *pFVar3;
  
  piVar1 = &(this->Lines).ArrayMax;
  pFVar3 = (FText *)(this->Lines).AllocatorInstance.Data;
  iVar2 = (this->Lines).ArrayNum;
  if (-1 < (this->Lines).ArrayMax) {
    DestructItems<FText,int>(pFVar3,iVar2);
    (this->Lines).ArrayNum = 0;
    return;
  }
  DestructItems<FText,int>(pFVar3,iVar2);
  (this->Lines).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// GetNumLines @ 1417606e0

int __thiscall FTextBuilder::GetNumLines(FTextBuilder *this)

{
  return (this->Lines).ArrayNum;
}

// Indent @ 141764880

void __thiscall FTextBuilder::Indent(FTextBuilder *this)

{
  this->IndentCount = this->IndentCount + 1;
  return;
}

// IsEmpty @ 141766c60

bool __thiscall FTextBuilder::IsEmpty(FTextBuilder *this)

{
  return (this->Lines).ArrayNum == 0;
}

// ToText @ 14177f950

FText * __thiscall FTextBuilder::ToText(FTextBuilder *this,FText *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FText local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Flags = 2;
  local_28.TextData.Reference = (ITextData *)0x150627e0c;
  local_18._12_4_ = local_28._12_4_;
  local_18.Size = 2;
  local_18.DataPtr = L"\r\n";
  FText::AsCultureInvariant(&local_28,&local_18);
  if ((this->Lines).ArrayNum == 1) {
    pFVar1 = (this->Lines).AllocatorInstance.Data;
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = *(ITextData **)pFVar1;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = *(uint *)(pFVar1 + 8);
  }
  else {
    TextJoinImpl<FText>(__return_storage_ptr__,&local_28,&this->Lines);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// Unindent @ 141781c20

void __thiscall FTextBuilder::Unindent(FTextBuilder *this)

{
  this->IndentCount = this->IndentCount + -1;
  return;
}

