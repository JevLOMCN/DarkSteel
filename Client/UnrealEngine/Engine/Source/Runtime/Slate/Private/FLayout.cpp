// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 15

// AddArea @ 14270a220

TSharedRef<FTabManager::FLayout,1> * __thiscall
FTabManager::FLayout::AddArea
          (FLayout *this,TSharedRef<FTabManager::FLayout,1> *__return_storage_ptr__,
          TSharedRef<FTabManager::FArea,1> *param_1)

{
  int *piVar1;
  TSharedRef<FTabManager::FArea,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FTabManager::FLayout,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TSharedRef<FTabManager::FLayout,1> local_18;
  
  pTVar2 = (TSharedRef<FTabManager::FArea,1> *)(this->Areas).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Areas).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  iVar6 = (this->Areas).ArrayNum;
  piVar1 = &(this->Areas).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Areas).AllocatorInstance,piVar1);
  }
  (this->Areas).ArrayNum = iVar6 + 1;
  pFVar8 = (this->Areas).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FArea **)pFVar8 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = TSharedFromThis<FTabManager::FLayout,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayout,1> *)this,&local_18);
  __return_storage_ptr__->Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetLayoutName @ 14273f860

FName __thiscall FTabManager::FLayout::GetLayoutName(FLayout *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->LayoutName;
  return in_RDX;
}

// NewFromJson @ 14275d130

TSharedPtr<FTabManager::FLayout,1> * __cdecl
FTabManager::FLayout::NewFromJson
          (TSharedPtr<FTabManager::FLayout,1> *__return_storage_ptr__,
          TSharedPtr<FJsonObject,1> *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FName FVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FLayout *pFVar15;
  TSharedPtr<FTabManager::FLayout,1> *pTVar16;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined8 *puVar18;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar19;
  TSharedRef<FTabManager::FLayout,1> *pTVar20;
  ForAnyElementType FVar21;
  FLayout *pFVar22;
  uint uVar23;
  FLayout *pFVar24;
  TRawPtrProxy<FTabManager::FLayout> local_res10 [2];
  FName local_res20;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  FArea *local_108;
  TReferenceControllerBase<1> *local_100;
  TSharedRef<FTabManager::FLayout,1> local_f8;
  FString local_e8;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TSharedPtr<FJsonObject,1> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TSharedRef<FTabManager::FLayoutNode,1> local_68;
  TSharedRef<FTabManager::FLayout,1> local_58;
  
  if (param_1->Object == (FJsonObject *)0x0) {
    __return_storage_ptr__->Object = (FLayout *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  local_d8 = L"Name";
  uStack_d0 = 4;
  local_98._12_4_ = uStack_cc;
  local_98.Size = 4;
  local_98.DataPtr = L"Name";
  FJsonObject::GetStringField(param_1->Object,&local_e8,&local_98);
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar21.Data = local_e8.Data.AllocatorInstance.Data;
  }
  pFVar14 = ::FName::FName(&local_res20,(wchar_t *)FVar21.Data);
  FVar4 = *pFVar14;
  pFVar15 = ::operator_new(0x38);
  pFVar22 = (FLayout *)0x0;
  local_res10[0].Object = pFVar22;
  if (pFVar15 != (FLayout *)0x0) {
    pFVar15->_padding_ = 0;
    pFVar15->_padding_ = 0;
    (pFVar15->PrimaryArea).Object = (FArea *)0x0;
    (pFVar15->PrimaryArea).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar15->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar15->Areas).ArrayNum = 0;
    (pFVar15->Areas).ArrayMax = 0;
    pFVar15->LayoutName = FVar4;
    local_res10[0].Object = pFVar15;
  }
  TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
            (&local_f8,local_res10);
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar16 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
    return pTVar16;
  }
  local_c8 = L"PrimaryAreaIndex";
  uStack_c0 = 0x10;
  local_88._12_4_ = uStack_bc;
  local_88.Size = 0x10;
  local_88.DataPtr = L"PrimaryAreaIndex";
  dVar10 = FJsonObject::GetNumberField(param_1->Object,&local_88);
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pTVar16 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
    return pTVar16;
  }
  local_b8 = L"Areas";
  uStack_b0 = 5;
  local_78._12_4_ = uStack_ac;
  local_78.Size = 5;
  local_78.DataPtr = L"Areas";
  pTVar17 = FJsonObject::GetArrayField(param_1->Object,&local_78);
  local_118.Data = (FScriptContainerElement *)0x0;
  iVar13 = pTVar17->ArrayNum;
  pTVar5 = (TSharedPtr<FJsonValue,1> *)(pTVar17->AllocatorInstance).Data;
  local_110 = iVar13;
  if (iVar13 == 0) {
    local_10c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar13,0,&local_118,iVar13,&local_10c);
    ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
              (local_118.Data,pTVar5,iVar13);
  }
  if (0 < local_110) {
    pFVar15 = pFVar22;
    pFVar24 = pFVar22;
    do {
      uVar23 = (uint)pFVar24;
      uVar12 = 0;
      if ((int)uVar23 < local_110) {
        uVar12 = ~uVar23 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar16 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
        return pTVar16;
      }
      FVar21.Data = local_118.Data;
      if ((*(longlong *)(local_118.Data + (longlong)&pFVar15->_padding_) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar16 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
        return pTVar16;
      }
      puVar18 = (undefined8 *)
                (**(code **)**(undefined8 **)(FVar21.Data + (longlong)&pFVar15->_padding_))();
      local_a8.Object = (FJsonObject *)*puVar18;
      local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar18[1];
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar19 = NewFromString_Helper(&local_68,&local_a8);
      local_108 = (FArea *)pTVar19->Object;
      local_100 = (pTVar19->SharedReferenceCount).ReferenceController;
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      pFVar24 = local_f8.Object;
      pFVar6 = ((local_f8.Object)->Areas).AllocatorInstance.Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           pFVar6 + (longlong)((local_f8.Object)->Areas).ArrayMax * 0x10)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar16 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
        return pTVar16;
      }
      iVar13 = (pFVar24->Areas).ArrayNum;
      piVar1 = &(pFVar24->Areas).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar24->Areas).AllocatorInstance,piVar1);
      }
      pFVar6 = (pFVar24->Areas).AllocatorInstance.Data;
      (pFVar24->Areas).ArrayNum = iVar13 + 1;
      *(FArea **)(pFVar6 + (longlong)iVar13 * 0x10) = local_108;
      *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar13 * 0x10 + 8) = local_100;
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar20 = TSharedFromThis<FTabManager::FLayout,1>::AsShared
                          ((TSharedFromThis<FTabManager::FLayout,1> *)pFVar24,&local_58);
      pTVar7 = (pTVar20->SharedReferenceCount).ReferenceController;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      pFVar24 = local_f8.Object;
      pTVar7 = local_100;
      if ((pFVar22 == (FLayout *)(longlong)(int)dVar10) &&
         (((local_f8.Object)->PrimaryArea).Object = local_108,
         local_100 != ((local_f8.Object)->PrimaryArea).WeakReferenceCount.ReferenceController)) {
        if (local_100 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_100->WeakReferenceCount = (atomic<int>)((int)local_100->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar8 = ((local_f8.Object)->PrimaryArea).WeakReferenceCount.ReferenceController;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar8->WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
          }
        }
        (pFVar24->PrimaryArea).WeakReferenceCount.ReferenceController = pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
      pFVar24 = (FLayout *)(ulonglong)(uVar23 + 1);
      pFVar22 = (FLayout *)((longlong)&pFVar22->_padding_ + 1);
      pFVar15 = (FLayout *)&pFVar15->PrimaryArea;
    } while ((int)(uVar23 + 1) < local_110);
  }
  __return_storage_ptr__->Object = local_f8.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_f8.SharedReferenceCount.ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>((TSharedPtr<FJsonValue,1> *)local_118.Data,local_110);
  if ((TSharedPtr<FJsonValue,1> *)local_118.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_118.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// NewFromString @ 14275d600

TSharedPtr<FTabManager::FLayout,1> * __cdecl
FTabManager::FLayout::NewFromString
          (TSharedPtr<FTabManager::FLayout,1> *__return_storage_ptr__,FString *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TJsonStringReader<wchar_t> *pTVar4;
  FName FVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar14;
  TSharedPtr<FTabManager::FLayout,1> *pTVar15;
  FName *pFVar16;
  FLayout *pFVar17;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined8 *puVar19;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar20;
  TSharedRef<FTabManager::FLayout,1> *pTVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  FLayout *pFVar24;
  TReferenceControllerBase<1> *pTVar25;
  uint uVar26;
  TRawPtrProxy<FTabManager::FLayout> local_res18 [2];
  ForAnyElementType local_178;
  int local_170;
  int local_16c;
  FArea *local_168;
  TReferenceControllerBase<1> *local_160;
  TSharedPtr<FJsonObject,1> local_158;
  StackState local_148;
  TSharedRef<FTabManager::FLayout,1> local_110;
  TReferenceControllerBase<1> *local_100;
  FString local_f8;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TSharedPtr<FJsonObject,1> local_b8;
  FName local_a8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_a0;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TSharedRef<FTabManager::FLayoutNode,1> local_58;
  TSharedRef<FTabManager::FLayout,1> local_48;
  
  local_158.Object = (FJsonObject *)0x0;
  local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar14 = TJsonStringReader<wchar_t>::Create(&local_a0,param_1);
  pTVar25 = (pTVar14->SharedReferenceCount).ReferenceController;
  pTVar4 = pTVar14->Object;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_100 = pTVar25;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.SharedReferenceCount.ReferenceController);
  pFVar24 = (FLayout *)0x0;
  local_148.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Identifier.Data.ArrayNum = 0;
  local_148.Identifier.Data.ArrayMax = 0;
  local_148.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Object.Object = (FJsonObject *)0x0;
  local_148.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_148.Array.ArrayNum = 0;
  local_148.Array.ArrayMax = 0;
  bVar11 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                     ((TJsonReader<wchar_t> *)pTVar4,&local_148,None);
  if (bVar11) {
    bVar11 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_148,&local_158);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_148.Array.AllocatorInstance.Data,
               local_148.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_148.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_148.Array.AllocatorInstance.Data);
    }
    if (local_148.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar11) && (local_158.Object != (FJsonObject *)0x0)) {
      if ((local_158.Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
        return pTVar15;
      }
      uStack_e0 = 4;
      local_e8 = L"Name";
      local_88._12_4_ = uStack_dc;
      local_88.Size = 4;
      local_88.DataPtr = L"Name";
      FJsonObject::GetStringField(local_158.Object,&local_f8,&local_88);
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar22.Data = local_f8.Data.AllocatorInstance.Data;
      }
      pFVar16 = ::FName::FName(&local_a8,(wchar_t *)FVar22.Data);
      FVar5 = *pFVar16;
      pFVar17 = ::operator_new(0x38);
      local_res18[0].Object = pFVar24;
      if (pFVar17 != (FLayout *)0x0) {
        pFVar17->_padding_ = 0;
        pFVar17->_padding_ = 0;
        (pFVar17->PrimaryArea).Object = (FArea *)0x0;
        (pFVar17->PrimaryArea).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar17->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar17->Areas).ArrayNum = 0;
        (pFVar17->Areas).ArrayMax = 0;
        pFVar17->LayoutName = FVar5;
        local_res18[0].Object = pFVar17;
      }
      TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
                (&local_110,local_res18);
      if ((local_158.Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
        return pTVar15;
      }
      local_d8 = L"PrimaryAreaIndex";
      uStack_d0 = 0x10;
      local_78._12_4_ = uStack_cc;
      local_78.Size = 0x10;
      local_78.DataPtr = L"PrimaryAreaIndex";
      dVar10 = FJsonObject::GetNumberField(local_158.Object,&local_78);
      if ((local_158.Object == (FJsonObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pTVar15 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
        return pTVar15;
      }
      local_c8 = L"Areas";
      uStack_c0 = 5;
      local_68._12_4_ = uStack_bc;
      local_68.Size = 5;
      local_68.DataPtr = L"Areas";
      pTVar18 = FJsonObject::GetArrayField(local_158.Object,&local_68);
      local_178.Data = (FScriptContainerElement *)0x0;
      iVar13 = pTVar18->ArrayNum;
      pTVar6 = (TSharedPtr<FJsonValue,1> *)(pTVar18->AllocatorInstance).Data;
      local_170 = iVar13;
      if (iVar13 == 0) {
        local_16c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar13,0,&local_178,iVar13,&local_16c);
        ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                  (local_178.Data,pTVar6,iVar13);
      }
      if (0 < local_170) {
        lVar23 = 0;
        pFVar17 = pFVar24;
        do {
          uVar26 = (uint)pFVar17;
          uVar12 = 0;
          if ((int)uVar26 < local_170) {
            uVar12 = ~uVar26 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar15 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
            return pTVar15;
          }
          FVar22.Data = local_178.Data;
          if ((*(longlong *)(local_178.Data + lVar23) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar15 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
            return pTVar15;
          }
          puVar19 = (undefined8 *)(**(code **)**(undefined8 **)(FVar22.Data + lVar23))();
          local_b8.Object = (FJsonObject *)*puVar19;
          local_b8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar19[1];
          if (local_b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pTVar20 = NewFromString_Helper(&local_58,&local_b8);
          local_168 = (FArea *)pTVar20->Object;
          local_160 = (pTVar20->SharedReferenceCount).ReferenceController;
          if (local_160 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_160->SharedReferenceCount =
                 (atomic<int>)((int)local_160->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          pFVar17 = local_110.Object;
          pFVar7 = ((local_110.Object)->Areas).AllocatorInstance.Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 <
               pFVar7 + (longlong)((local_110.Object)->Areas).ArrayMax * 0x10)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar15 = (TSharedPtr<FTabManager::FLayout,1> *)(*pcVar9)();
            return pTVar15;
          }
          iVar13 = (pFVar17->Areas).ArrayNum;
          piVar1 = &(pFVar17->Areas).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(pFVar17->Areas).AllocatorInstance,piVar1);
          }
          pFVar7 = (pFVar17->Areas).AllocatorInstance.Data;
          (pFVar17->Areas).ArrayNum = iVar13 + 1;
          *(FArea **)(pFVar7 + (longlong)iVar13 * 0x10) = local_168;
          *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)iVar13 * 0x10 + 8) = local_160;
          if (local_160 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_160->SharedReferenceCount =
                 (atomic<int>)((int)local_160->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar21 = TSharedFromThis<FTabManager::FLayout,1>::AsShared
                              ((TSharedFromThis<FTabManager::FLayout,1> *)pFVar17,&local_48);
          pTVar25 = (pTVar21->SharedReferenceCount).ReferenceController;
          if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar25);
          pFVar17 = local_110.Object;
          pTVar25 = local_160;
          if ((pFVar24 == (FLayout *)(longlong)(int)dVar10) &&
             (((local_110.Object)->PrimaryArea).Object = local_168,
             local_160 != ((local_110.Object)->PrimaryArea).WeakReferenceCount.ReferenceController))
          {
            if (local_160 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_160->WeakReferenceCount = (atomic<int>)((int)local_160->WeakReferenceCount + 1);
              UNLOCK();
            }
            pTVar8 = ((local_110.Object)->PrimaryArea).WeakReferenceCount.ReferenceController;
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar2 = &pTVar8->WeakReferenceCount;
              aVar3 = *paVar2;
              *paVar2 = (atomic<int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
              }
            }
            (pFVar17->PrimaryArea).WeakReferenceCount.ReferenceController = pTVar25;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_160);
          pFVar17 = (FLayout *)(ulonglong)(uVar26 + 1);
          pFVar24 = (FLayout *)((longlong)&pFVar24->_padding_ + 1);
          lVar23 = lVar23 + 0x10;
          pTVar25 = local_100;
        } while ((int)(uVar26 + 1) < local_170);
      }
      __return_storage_ptr__->Object = local_110.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_110.SharedReferenceCount.ReferenceController;
      if (local_110.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_178.Data,local_170);
      if ((TSharedPtr<FJsonValue,1> *)local_178.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_178.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      goto LAB_14275d6b1;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_148.Array.AllocatorInstance.Data,
               local_148.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_148.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_148.Array.AllocatorInstance.Data);
    }
    if (local_148.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Identifier.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Object = (FLayout *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14275d6b1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// NewFromString_Helper @ 14275dbd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager::FLayoutNode,1> * __cdecl
FTabManager::FLayout::NewFromString_Helper
          (TSharedRef<FTabManager::FLayoutNode,1> *__return_storage_ptr__,
          TSharedPtr<FJsonObject,1> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TArray<FTabManager::FPanelDrawerTab,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  code *pcVar9;
  FPanelDrawerSize FVar10;
  TVector2<double>_u_0 TVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  FArea *pFVar15;
  FSharedReferencer<1> FVar16;
  float fVar17;
  FSplitter *pFVar18;
  FStack *this;
  undefined3 uVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  EWindowPlacement EVar23;
  EOrientation EVar24;
  uint uVar25;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar26;
  FJsonObject *pFVar27;
  FString *pFVar28;
  TSharedRef<FTabManager::FArea,1> *pTVar29;
  FName *pFVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar33;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar34;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TSharedPtr<FJsonValue,1> *pTVar35;
  TSharedRef<FGlobalTabmanager,1> *pTVar36;
  FName *pFVar37;
  FJsonValue *pFVar38;
  ForAnyElementType FVar39;
  wchar_t *pwVar40;
  uint uVar41;
  ulonglong uVar42;
  ESidebarLocation EVar43;
  FScriptContainerElement *pFVar44;
  Type TVar45;
  FScriptContainerElement *pFVar46;
  bool local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_7c8 [8];
  FArea *local_7c0;
  FSharedReferencer<1> local_7b8;
  undefined1 local_7b0 [4];
  float local_7ac;
  ForAnyElementType local_7a8;
  int local_7a0;
  int local_79c;
  ForAnyElementType local_798;
  int local_790;
  int local_78c;
  ForAnyElementType local_788;
  int local_780;
  int local_77c;
  FString local_778;
  FName local_768;
  FName FStack_760;
  float local_758;
  float fStack_754;
  FString local_750;
  uint local_740;
  FName local_738;
  FString local_730;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_720;
  FName local_718 [2];
  wchar_t *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  TSharedRef<FTabManager::FSplitter,1> local_6f8;
  wchar_t *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  TSharedRef<FTabManager::FStack,1> local_6d8;
  FName local_6c8;
  FName local_6c0;
  TStringView<wchar_t> local_6b8;
  undefined8 local_6a8;
  FSharedReferencer<1> local_6a0;
  undefined8 local_698;
  FSharedReferencer<1> local_690;
  undefined8 local_688;
  FSharedReferencer<1> local_680;
  FName local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  FName local_668;
  undefined4 uStack_660;
  uint uStack_65c;
  TStringView<wchar_t> local_658;
  FTabId local_648;
  wchar_t *local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  wchar_t *local_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  wchar_t *local_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  wchar_t *local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  wchar_t *local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  wchar_t *local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  wchar_t *local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  wchar_t *local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  TVector2<double>_u_0 local_5b8;
  wchar_t *local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  wchar_t *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  TVector2<double>_u_0 local_588;
  wchar_t *local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  wchar_t *local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  wchar_t *local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  wchar_t *local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  wchar_t *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  wchar_t *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  wchar_t *local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  wchar_t *local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  TSharedPtr<FJsonObject,1> local_4e8;
  wchar_t *local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  wchar_t *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  wchar_t *local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  TSharedPtr<FJsonObject,1> local_4a8;
  wchar_t *local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  wchar_t *local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  wchar_t *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  wchar_t *local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  wchar_t *local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  wchar_t *local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  wchar_t *local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  wchar_t *local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  FName local_418 [2];
  TStringView<wchar_t> local_408;
  TStringView<wchar_t> local_3f8;
  FString local_3e8;
  TStringView<wchar_t> local_3d8;
  TStringView<wchar_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  TStringView<wchar_t> local_3a8;
  TStringView<wchar_t> local_398;
  TSharedRef<FTabManager::FArea,1> local_388;
  TSharedRef<FTabManager::FLayoutNode,1> local_378;
  TStringView<wchar_t> local_368;
  TStringView<wchar_t> local_358;
  TSharedRef<FTabManager::FArea,1> local_348;
  TSharedRef<FTabManager::FArea,1> local_338;
  TStringView<wchar_t> local_328;
  TSharedRef<FTabManager::FLayoutNode,1> local_318;
  TStringView<wchar_t> local_308;
  TSharedRef<FTabManager::FLayoutNode,1> local_2f8;
  FString local_2e8;
  TStringView<wchar_t> local_2d8;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  TSharedRef<FTabManager::FLayoutNode,1> local_2a8;
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  FString local_278;
  TStringView<wchar_t> local_268;
  TSharedRef<FTabManager::FLayoutNode,1> local_258;
  TStringView<wchar_t> local_248;
  TSharedRef<FTabManager::FLayoutNode,1> local_238;
  TStringView<wchar_t> local_228;
  TSharedRef<FTabManager::FLayoutNode,1> local_218;
  TStringView<wchar_t> local_208;
  TSharedRef<FTabManager::FLayoutNode,1> local_1f8;
  FString local_1e8;
  TStringView<wchar_t> local_1d8;
  TSharedRef<FTabManager::FLayoutNode,1> local_1c8;
  TStringView<wchar_t> local_1b8;
  TSharedRef<FTabManager::FStack,1> local_1a8;
  TStringView<wchar_t> local_198;
  TSharedRef<FTabManager::FStack,1> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  FString local_158;
  TSharedRef<FTabManager::FStack,1> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  FString local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TSharedRef<FTabManager::FStack,1> local_d8;
  FString local_c8;
  TSharedRef<FTabManager::FArea,1> local_b8;
  FName local_a8;
  FName local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  TSharedRef<FTabManager::FLayoutNode,1> local_88;
  TSharedRef<FTabManager::FLayoutNode,1> local_78 [3];
  
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
    return pTVar26;
  }
  local_628 = L"Type";
  uStack_620 = 4;
  local_408._12_4_ = uStack_61c;
  local_408.Size = 4;
  local_408.DataPtr = L"Type";
  FJsonObject::GetStringField(param_1->Object,&local_778,&local_408);
  FVar39.Data = (FScriptContainerElement *)L"";
  if (local_778.Data.ArrayNum != 0) {
    FVar39.Data = local_778.Data.AllocatorInstance.Data;
  }
  iVar22 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar39.Data,L"Area");
  if (iVar22 == 0) {
    uVar42 = 0;
    local_7b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
    uStack_610 = 0xf;
    local_618 = L"WindowPlacement";
    local_3f8._12_4_ = uStack_60c;
    local_3f8.Size = 0xf;
    local_3f8.DataPtr = L"WindowPlacement";
    pFVar28 = FJsonObject::GetStringField(pFVar27,&local_3e8,&local_3f8);
    EVar23 = `FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString(pFVar28)
    ;
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (EVar23 == Placement_NoWindow) {
LAB_14275e070:
      pTVar29 = NewPrimaryArea(&local_338);
      local_680.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
      local_7c0 = pTVar29->Object;
      if (local_680.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_680.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_680.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_688 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_7b8,&local_680);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_680.ReferenceController);
    }
    else if (EVar23 == Placement_Automatic) {
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_5a0 = 0xc;
      local_5a8 = L"WindowSize_X";
      local_368._12_4_ = uStack_59c;
      local_368.Size = 0xc;
      local_368.DataPtr = L"WindowSize_X";
      dVar12 = FJsonObject::GetNumberField(pFVar27,&local_368);
      local_588._s_0.X = (double)(float)dVar12;
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_590 = 0xc;
      local_598 = L"WindowSize_Y";
      local_358._12_4_ = uStack_58c;
      local_358.Size = 0xc;
      local_358.DataPtr = L"WindowSize_Y";
      dVar12 = FJsonObject::GetNumberField(pFVar27,&local_358);
      local_588._s_0.Y = (double)(float)dVar12;
      pTVar29 = NewArea(&local_348,(TVector2<double> *)&local_588._s_0);
      local_690.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
      local_7c0 = pTVar29->Object;
      if (local_690.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_690.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_690.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_698 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_7b8,&local_690);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_690.ReferenceController);
      local_338.SharedReferenceCount.ReferenceController =
           local_348.SharedReferenceCount.ReferenceController;
    }
    else {
      if (EVar23 != Placement_Specified) goto LAB_14275e070;
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_600 = 0x10;
      local_608 = L"WindowPosition_X";
      local_3d8._12_4_ = uStack_5fc;
      local_3d8.Size = 0x10;
      local_3d8.DataPtr = L"WindowPosition_X";
      dVar12 = FJsonObject::GetNumberField(pFVar27,&local_3d8);
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_5f0 = 0x10;
      local_5f8 = L"WindowPosition_Y";
      local_3c8._12_4_ = uStack_5ec;
      local_3c8.Size = 0x10;
      local_3c8.DataPtr = L"WindowPosition_Y";
      dVar13 = FJsonObject::GetNumberField(pFVar27,&local_3c8);
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_5e0 = 0xc;
      local_5e8 = L"WindowSize_X";
      local_3b8._12_4_ = uStack_5dc;
      local_3b8.Size = 0xc;
      local_3b8.DataPtr = L"WindowSize_X";
      dVar14 = FJsonObject::GetNumberField(pFVar27,&local_3b8);
      local_5b8._s_0.X = (double)(float)dVar14;
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_5d0 = 0xc;
      local_5d8 = L"WindowSize_Y";
      local_3a8._12_4_ = uStack_5cc;
      local_3a8.Size = 0xc;
      local_3a8.DataPtr = L"WindowSize_Y";
      dVar14 = FJsonObject::GetNumberField(pFVar27,&local_3a8);
      local_5b8._s_0.Y = (double)(float)dVar14;
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_5c0 = 0xc;
      local_5c8 = L"bIsMaximized";
      local_398._12_4_ = uStack_5bc;
      local_398.Size = 0xc;
      local_398.DataPtr = L"bIsMaximized";
      bVar20 = FJsonObject::GetBoolField(pFVar27,&local_398);
      pTVar29 = NewArea(&local_388,(TVector2<double> *)&local_5b8._s_0);
      local_6a0.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
      local_7c0 = pTVar29->Object;
      if (local_6a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_6a0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_6a0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_6a8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_7b8,&local_6a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6a0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.SharedReferenceCount.ReferenceController);
      if ((local_7c0 == (FArea *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
        return pTVar26;
      }
      local_7c0->WindowPlacement = Placement_Specified;
      TVar11._8_4_ = SUB84((double)(float)dVar13,0);
      TVar11._s_0.X = (double)(float)dVar12;
      TVar11._12_4_ = (int)((ulonglong)(double)(float)dVar13 >> 0x20);
      (local_7c0->UnscaledWindowPosition).field0_0x0 = TVar11;
      local_7c0->bIsMaximized = bVar20;
      pTVar26 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                          ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&local_7c0->_padding_,
                           &local_378);
      local_338.SharedReferenceCount.ReferenceController =
           (pTVar26->SharedReferenceCount).ReferenceController;
      if (local_338.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_378.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_338.SharedReferenceCount.ReferenceController);
    if ((local_7c0 == (FArea *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar9 = (code *)swi(3);
      pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
      return pTVar26;
    }
    pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
    uStack_570 = 0xf;
    local_578 = L"SizeCoefficient";
    local_328._12_4_ = uStack_56c;
    local_328.Size = 0xf;
    local_328.DataPtr = L"SizeCoefficient";
    dVar12 = FJsonObject::GetNumberField(pFVar27,&local_328);
    plVar2 = &local_7c0->_padding_;
    *(float *)&local_7c0->_padding_ = (float)dVar12;
    pTVar26 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)plVar2,&local_318);
    pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_318.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
    uStack_560 = 0xb;
    local_568 = L"Orientation";
    local_308._12_4_ = uStack_55c;
    local_308.Size = 0xb;
    local_308.DataPtr = L"Orientation";
    pFVar28 = FJsonObject::GetStringField(pFVar27,&local_2e8,&local_308);
    EVar24 = `FTabManager::FLayout::NewFromString_Helper'::__l2::local::OrientationFromString
                       (pFVar28);
    *(EOrientation *)&local_7c0->_padding_ = EVar24;
    pTVar26 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)plVar2,&local_2f8);
    pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    local_730.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_730.Data.ArrayNum = 0;
    local_730.Data.ArrayMax = 0;
    pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
    uStack_550 = 0x14;
    local_558 = L"ActivePanelDrawerTab";
    local_2d8._12_4_ = uStack_54c;
    local_2d8.Size = 0x14;
    local_2d8.DataPtr = L"ActivePanelDrawerTab";
    bVar20 = FJsonObject::TryGetStringField(pFVar27,&local_2d8,&local_730);
    if (bVar20) {
      FVar39.Data = (FScriptContainerElement *)L"";
      if (local_730.Data.ArrayNum != 0) {
        FVar39.Data = local_730.Data.AllocatorInstance.Data;
      }
      pFVar30 = ::FName::FName(local_418,(wchar_t *)FVar39.Data);
      uStack_670 = 0xffffffff;
      uVar19 = uStack_66c._1_3_;
      uStack_66c = CONCAT31(uStack_66c._1_3_,1);
      FVar5 = *pFVar30;
      uStack_98 = CONCAT44(uStack_66c,0xffffffff);
      local_678 = FVar5;
      local_a0 = FVar5;
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      local_548 = L"MainContentCoefficient";
      uStack_540 = 0x16;
      local_2c8._12_4_ = uStack_53c;
      local_2c8.Size = 0x16;
      local_2c8.DataPtr = L"MainContentCoefficient";
      dVar12 = FJsonObject::GetNumberField(pFVar27,&local_2c8);
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      local_538 = L"PanelDrawerCoefficient";
      uStack_530 = 0x16;
      local_2b8._12_4_ = uStack_52c;
      local_2b8.Size = 0x16;
      local_2b8.DataPtr = L"PanelDrawerCoefficient";
      dVar13 = FJsonObject::GetNumberField(pFVar27,&local_2b8);
      (local_7c0->ActivePanelDrawerTab).TabId.TabType = FVar5;
      (local_7c0->ActivePanelDrawerTab).TabId.InstanceId = 0xffffffff;
      (local_7c0->ActivePanelDrawerTab).TabId.Flags = 1;
      *(undefined3 *)&(local_7c0->ActivePanelDrawerTab).TabId.field_0xd = uVar19;
      local_90 = CONCAT44((float)dVar13,(float)dVar12);
      FVar10.PanelDrawerCoefficient = (float)dVar13;
      FVar10.MainContentCoefficient = (float)dVar12;
      (local_7c0->ActivePanelDrawerTab).Size = FVar10;
      pTVar26 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                          ((TSharedFromThis<FTabManager::FLayoutNode,1> *)plVar2,&local_2a8);
      pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    local_720 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0;
    pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
    uStack_520 = 0x17;
    local_528 = L"InactivePanelDrawerTabs";
    local_298._12_4_ = uStack_51c;
    local_298.Size = 0x17;
    local_298.DataPtr = L"InactivePanelDrawerTabs";
    bVar20 = FJsonObject::TryGetArrayField(pFVar27,&local_298,&local_720);
    pTVar33 = local_720;
    if (bVar20) {
      local_740 = local_720->ArrayNum;
      uVar31 = (ulonglong)(int)local_740;
      pFVar44 = (local_720->AllocatorInstance).Data;
      pFVar46 = pFVar44 + uVar31 * 0x10;
      while( true ) {
        if (pTVar33->ArrayNum != (int)uVar31) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar44 == pFVar46) break;
        if ((*(longlong *)pFVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        puVar32 = (undefined8 *)(**(code **)**(undefined8 **)pFVar44)();
        pTVar4 = (TReferenceControllerBase<1> *)puVar32[1];
        pFVar27 = (FJsonObject *)*puVar32;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_768.ComparisonIndex.Value = 0;
        local_768.Number = 0;
        FStack_760._0_5_ = 0x1ffffffff;
        local_758 = 0.75;
        fStack_754 = 0.25;
        if ((pFVar27 == (FJsonObject *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        local_518 = L"TabId";
        uStack_510 = 5;
        local_288._12_4_ = uStack_50c;
        local_288.Size = 5;
        local_288.DataPtr = L"TabId";
        pFVar28 = FJsonObject::GetStringField(pFVar27,&local_278,&local_288);
        if ((pFVar28->Data).ArrayNum == 0) {
          pwVar40 = L"";
        }
        else {
          pwVar40 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
        }
        pFVar30 = ::FName::FName(&local_a8,pwVar40);
        uStack_660 = 0xffffffff;
        uStack_65c = CONCAT31(uStack_65c._1_3_,1);
        local_768 = *pFVar30;
        FStack_760.Number = uStack_65c;
        FStack_760.ComparisonIndex.Value = 0xffffffff;
        local_668 = local_768;
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
        if ((pFVar27 == (FJsonObject *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        uStack_700 = 0x16;
        local_708 = L"MainContentCoefficient";
        local_658._12_4_ = uStack_6fc;
        local_658.Size = 0x16;
        local_658.DataPtr = L"MainContentCoefficient";
        dVar12 = FJsonObject::GetNumberField(pFVar27,&local_658);
        local_758 = (float)dVar12;
        if ((pFVar27 == (FJsonObject *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        uStack_500 = 0x16;
        local_508 = L"PanelDrawerCoefficient";
        local_268._12_4_ = uStack_4fc;
        local_268.Size = 0x16;
        local_268.DataPtr = L"PanelDrawerCoefficient";
        dVar12 = FJsonObject::GetNumberField(pFVar27,&local_268);
        fStack_754 = (float)dVar12;
        if ((local_7c0 == (FArea *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        pFVar15 = local_7c0;
        pTVar3 = &local_7c0->InactivePanelDrawerTabs;
        pFVar30 = (FName *)(pTVar3->AllocatorInstance).Data;
        if (((pFVar30 <= &local_768) &&
            (&local_768 < pFVar30 + (longlong)(local_7c0->InactivePanelDrawerTabs).ArrayMax * 3)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        iVar22 = (pFVar15->InactivePanelDrawerTabs).ArrayNum;
        piVar1 = &(pFVar15->InactivePanelDrawerTabs).ArrayMax;
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&pTVar3->AllocatorInstance,piVar1);
        }
        (pFVar15->InactivePanelDrawerTabs).ArrayNum = iVar22 + 1;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        pFVar30 = (FName *)(pFVar6 + (longlong)iVar22 * 0x18);
        *pFVar30 = local_768;
        pFVar30[1] = FStack_760;
        *(ulonglong *)(pFVar6 + (longlong)iVar22 * 0x18 + 0x10) = CONCAT44(fStack_754,local_758);
        pTVar26 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                            ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar15->_padding_,
                             &local_258);
        pTVar7 = (pTVar26->SharedReferenceCount).ReferenceController;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_258.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar31 = (ulonglong)local_740;
        pFVar44 = pFVar44 + 0x10;
      }
    }
    if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_730.Data.AllocatorInstance.Data);
    }
    if ((param_1->Object == (FJsonObject *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar9 = (code *)swi(3);
      pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
      return pTVar26;
    }
    uStack_4f0 = 5;
    local_4f8 = L"nodes";
    local_248._12_4_ = uStack_4ec;
    local_248.Size = 5;
    local_248.DataPtr = L"nodes";
    pTVar33 = FJsonObject::GetArrayField(param_1->Object,&local_248);
    local_7a8.Data = (FScriptContainerElement *)0x0;
    iVar22 = pTVar33->ArrayNum;
    pTVar35 = (TSharedPtr<FJsonValue,1> *)(pTVar33->AllocatorInstance).Data;
    local_7a0 = iVar22;
    if (iVar22 == 0) {
      local_79c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar22,0,&local_7a8,iVar22,&local_79c);
      ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                (local_7a8.Data,pTVar35,iVar22);
    }
    uVar31 = uVar42;
    if (0 < local_7a0) {
      do {
        if ((local_7c0 == (FArea *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        pFVar15 = local_7c0;
        uVar41 = (uint)uVar42;
        uVar25 = 0;
        if ((int)uVar41 < local_7a0) {
          uVar25 = ~uVar41 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        FVar39.Data = local_7a8.Data;
        if ((*(longlong *)(local_7a8.Data + uVar31) == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        puVar32 = (undefined8 *)(**(code **)**(undefined8 **)(FVar39.Data + uVar31))();
        local_4e8.Object = (FJsonObject *)*puVar32;
        local_4e8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar32[1];
        if (local_4e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar26 = NewFromString_Helper(local_78,&local_4e8);
        if ((((TSharedRef<FTabManager::FLayoutNode,1> *)pFVar15->_padding_ <= pTVar26) &&
            (pTVar26 < (TSharedRef<FTabManager::FLayoutNode,1> *)pFVar15->_padding_ +
                       *(int *)((longlong)&pFVar15->_padding_ + 4))) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
          return pTVar26;
        }
        iVar22 = (int)pFVar15->_padding_;
        piVar1 = (int *)((longlong)&pFVar15->_padding_ + 4);
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&pFVar15->_padding_,piVar1);
        }
        *(int *)&pFVar15->_padding_ = iVar22 + 1;
        lVar8 = pFVar15->_padding_;
        *(FLayoutNode **)(lVar8 + (longlong)iVar22 * 0x10) = pTVar26->Object;
        pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
        *(TReferenceControllerBase<1> **)(lVar8 + 8 + (longlong)iVar22 * 0x10) = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar34 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                            ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar15->_padding_,
                             &local_238);
        pTVar4 = (pTVar34->SharedReferenceCount).ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_238.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar26->SharedReferenceCount).ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar42 = (ulonglong)(uVar41 + 1);
        uVar31 = uVar31 + 0x10;
      } while ((int)(uVar41 + 1) < local_7a0);
    }
    if ((local_7c0 == (FArea *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar20)) {
      pcVar9 = (code *)swi(3);
      pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
      return pTVar26;
    }
    FVar16.ReferenceController = local_7b8.ReferenceController;
    pFVar15 = local_7c0;
    if (local_7b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_7b8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_7b8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_7c0 == (FArea *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar20)) {
      pcVar9 = (code *)swi(3);
      pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
      return pTVar26;
    }
    __return_storage_ptr__->Object = (FLayoutNode *)pFVar15;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar16.ReferenceController;
    if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_7a8.Data,local_7a0);
    FVar39.Data = local_7a8.Data;
    local_b8.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  }
  else {
    FVar39.Data = (FScriptContainerElement *)L"";
    if (local_778.Data.ArrayNum != 0) {
      FVar39.Data = local_778.Data.AllocatorInstance.Data;
    }
    iVar22 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar39.Data,L"Splitter");
    if (iVar22 == 0) {
      NewSplitter(&local_6f8);
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_4d0 = 0xf;
      local_4d8 = L"SizeCoefficient";
      local_228._12_4_ = uStack_4cc;
      local_228.Size = 0xf;
      local_228.DataPtr = L"SizeCoefficient";
      dVar12 = FJsonObject::GetNumberField(pFVar27,&local_228);
      plVar2 = &(local_6f8.Object)->_padding_;
      *(float *)&(local_6f8.Object)->_padding_ = (float)dVar12;
      pTVar26 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                          ((TSharedFromThis<FTabManager::FLayoutNode,1> *)plVar2,&local_218);
      pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_4c0 = 0xb;
      local_4c8 = L"Orientation";
      local_208._12_4_ = uStack_4bc;
      local_208.Size = 0xb;
      local_208.DataPtr = L"Orientation";
      pFVar28 = FJsonObject::GetStringField(pFVar27,&local_1e8,&local_208);
      EVar24 = `FTabManager::FLayout::NewFromString_Helper'::__l2::local::OrientationFromString
                         (pFVar28);
      (local_6f8.Object)->Orientation = EVar24;
      pTVar26 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                          ((TSharedFromThis<FTabManager::FLayoutNode,1> *)plVar2,&local_1f8);
      pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_4b0 = 5;
      local_4b8 = L"nodes";
      local_1d8._12_4_ = uStack_4ac;
      local_1d8.Size = 5;
      local_1d8.DataPtr = L"nodes";
      pTVar33 = FJsonObject::GetArrayField(pFVar27,&local_1d8);
      uVar42 = 0;
      local_798.Data = (FScriptContainerElement *)0x0;
      iVar22 = pTVar33->ArrayNum;
      pTVar35 = (TSharedPtr<FJsonValue,1> *)(pTVar33->AllocatorInstance).Data;
      local_790 = iVar22;
      if (iVar22 == 0) {
        local_78c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar22,0,&local_798,iVar22,&local_78c);
        ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                  (local_798.Data,pTVar35,iVar22);
      }
      uVar31 = uVar42;
      if (0 < local_790) {
        do {
          pFVar18 = local_6f8.Object;
          uVar41 = (uint)uVar42;
          uVar25 = 0;
          if ((int)uVar41 < local_790) {
            uVar25 = ~uVar41 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
            return pTVar26;
          }
          FVar39.Data = local_798.Data;
          if ((*(longlong *)(local_798.Data + uVar31) == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar20)) {
            pcVar9 = (code *)swi(3);
            pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
            return pTVar26;
          }
          puVar32 = (undefined8 *)(**(code **)**(undefined8 **)(FVar39.Data + uVar31))();
          local_4a8.Object = (FJsonObject *)*puVar32;
          local_4a8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar32[1];
          if (local_4a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pTVar34 = NewFromString_Helper(&local_88,&local_4a8);
          pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)
                    (pFVar18->ChildNodes).AllocatorInstance.Data;
          if (((pTVar26 <= pTVar34) && (pTVar34 < pTVar26 + (pFVar18->ChildNodes).ArrayMax)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar9 = (code *)swi(3);
            pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
            return pTVar26;
          }
          iVar22 = (pFVar18->ChildNodes).ArrayNum;
          piVar1 = &(pFVar18->ChildNodes).ArrayMax;
          if (iVar22 == *piVar1) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(pFVar18->ChildNodes).AllocatorInstance,piVar1);
          }
          (pFVar18->ChildNodes).ArrayNum = iVar22 + 1;
          pFVar44 = (pFVar18->ChildNodes).AllocatorInstance.Data;
          *(FLayoutNode **)(pFVar44 + (longlong)iVar22 * 0x10) = pTVar34->Object;
          pTVar4 = (pTVar34->SharedReferenceCount).ReferenceController;
          *(TReferenceControllerBase<1> **)(pFVar44 + (longlong)iVar22 * 0x10 + 8) = pTVar4;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar26 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                              ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar18->_padding_,
                               &local_1c8);
          pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar34->SharedReferenceCount).ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          uVar42 = (ulonglong)(uVar41 + 1);
          uVar31 = uVar31 + 0x10;
        } while ((int)(uVar41 + 1) < local_790);
      }
      __return_storage_ptr__->Object = (FLayoutNode *)local_6f8.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_6f8.SharedReferenceCount.ReferenceController;
      if (local_6f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_6f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_6f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_798.Data,local_790);
      FVar39.Data = local_798.Data;
      local_b8.SharedReferenceCount.ReferenceController =
           local_6f8.SharedReferenceCount.ReferenceController;
    }
    else {
      FVar39.Data = (FScriptContainerElement *)L"";
      if (local_778.Data.ArrayNum != 0) {
        FVar39.Data = local_778.Data.AllocatorInstance.Data;
      }
      iVar22 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar39.Data,L"Stack");
      if (iVar22 != 0) {
        `FTabManager::FLayout::NewFromString_Helper'::__l43::<lambda_1>::operator()(local_7b0);
        pTVar29 = NewArea(&local_b8,&FallbackWindowSize);
        __return_storage_ptr__->Object = (FLayoutNode *)pTVar29->Object;
        pTVar4 = (pTVar29->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_14275f6e3;
      }
      NewStack(&local_6d8);
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_490 = 0xf;
      local_498 = L"SizeCoefficient";
      local_1b8._12_4_ = uStack_48c;
      local_1b8.Size = 0xf;
      local_1b8.DataPtr = L"SizeCoefficient";
      dVar12 = FJsonObject::GetNumberField(pFVar27,&local_1b8);
      FStack::SetSizeCoefficient(local_6d8.Object,&local_1a8,(float)dVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_480 = 0xb;
      local_488 = L"HideTabWell";
      local_198._12_4_ = uStack_47c;
      local_198.Size = 0xb;
      local_198.DataPtr = L"HideTabWell";
      bVar20 = FJsonObject::GetBoolField(pFVar27,&local_198);
      FStack::SetHideTabWell(local_6d8.Object,&local_188,bVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 *)TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_470 = 0xd;
      local_478 = L"ForegroundTab";
      local_178._12_4_ = uStack_46c;
      local_178.Size = 0xd;
      local_178.DataPtr = L"ForegroundTab";
      uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"ForegroundTab");
      pTVar35 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(this_00,uVar25,&local_178);
      if ((pTVar35 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar35->Object != (FJsonValue *)0x0)) {
        pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
        local_468 = L"ForegroundTab";
        uStack_460 = 0xd;
        local_168._12_4_ = uStack_45c;
        local_168.Size = 0xd;
        local_168.DataPtr = L"ForegroundTab";
        pFVar28 = FJsonObject::GetStringField(pFVar27,&local_158,&local_168);
        if ((pFVar28->Data).ArrayNum == 0) {
          pwVar40 = L"";
        }
        else {
          pwVar40 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
        }
        ::FName::FName(local_718,pwVar40);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        pTVar36 = FGlobalTabmanager::Get();
        local_6c8 = local_718[0];
        pFVar37 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                  ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                          *)&pTVar36->Object->LegacyTabTypeRedirectionMap,local_718[0]);
        local_648.InstanceId = -1;
        local_648.Flags = SaveLayout;
        pFVar30 = &local_6c8;
        if (pFVar37 != (FName *)0x0) {
          pFVar30 = pFVar37;
        }
        local_718[0] = *pFVar30;
        local_648.TabType = local_718[0];
        FStack::SetForegroundTab(local_6d8.Object,&local_148,&local_648);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.SharedReferenceCount.ReferenceController);
      }
      pFVar27 = TSharedPtr<FJsonObject,1>::operator->(param_1);
      uStack_450 = 4;
      local_458 = L"Tabs";
      local_138._12_4_ = uStack_44c;
      local_138.Size = 4;
      local_138.DataPtr = L"Tabs";
      pTVar33 = FJsonObject::GetArrayField(pFVar27,&local_138);
      uVar25 = 0;
      local_788.Data = (FScriptContainerElement *)0x0;
      iVar22 = pTVar33->ArrayNum;
      pTVar35 = (TSharedPtr<FJsonValue,1> *)(pTVar33->AllocatorInstance).Data;
      local_780 = iVar22;
      if (iVar22 == 0) {
        local_77c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar22,0,&local_788,iVar22,&local_77c);
        ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                  (local_788.Data,pTVar35,iVar22);
      }
      if (0 < local_780) {
        do {
          uVar41 = 0;
          if ((int)uVar25 < local_780) {
            uVar41 = ~uVar25 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
            return pTVar26;
          }
          pFVar38 = TSharedPtr<FJsonValue,1>::operator->
                              ((TSharedPtr<FJsonValue,1> *)
                               (local_788.Data + (longlong)(int)uVar25 * 0x10));
          puVar32 = (undefined8 *)(**(code **)pFVar38->_padding_)(pFVar38);
          pTVar4 = (TReferenceControllerBase<1> *)puVar32[1];
          pFVar27 = (FJsonObject *)*puVar32;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar27 == (FJsonObject *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar20)) {
            pcVar9 = (code *)swi(3);
            pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
            return pTVar26;
          }
          local_448 = L"TabId";
          uStack_440 = 5;
          local_128._12_4_ = uStack_43c;
          local_128.Size = 5;
          local_128.DataPtr = L"TabId";
          pFVar28 = FJsonObject::GetStringField(pFVar27,&local_118,&local_128);
          if ((pFVar28->Data).ArrayNum == 0) {
            pwVar40 = L"";
          }
          else {
            pwVar40 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
          }
          ::FName::FName(&local_738,pwVar40);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          pTVar36 = FGlobalTabmanager::Get();
          local_6c0 = local_738;
          pFVar37 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                    ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                            *)&pTVar36->Object->LegacyTabTypeRedirectionMap,local_738);
          pFVar30 = &local_6c0;
          if (pFVar37 != (FName *)0x0) {
            pFVar30 = pFVar37;
          }
          local_738 = *pFVar30;
          local_750.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_750.Data.ArrayNum = 0;
          local_750.Data.ArrayMax = 0;
          local_7ac = 0.15;
          local_res18[0] = false;
          if ((pFVar27 == (FJsonObject *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar20)) {
            pcVar9 = (code *)swi(3);
            pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
            return pTVar26;
          }
          uStack_430 = 0xf;
          local_438 = L"SidebarLocation";
          local_108._12_4_ = uStack_42c;
          local_108.Size = 0xf;
          local_108.DataPtr = L"SidebarLocation";
          bVar20 = FJsonObject::TryGetStringField(pFVar27,&local_108,&local_750);
          if (bVar20) {
            if ((pFVar27 == (FJsonObject *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar20)) {
              pcVar9 = (code *)swi(3);
              pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
              return pTVar26;
            }
            local_6e8 = L"SidebarCoeff";
            uStack_6e0 = 0xc;
            local_6b8._12_4_ = uStack_6dc;
            local_6b8.Size = 0xc;
            local_6b8.DataPtr = L"SidebarCoeff";
            FJsonObject::TryGetNumberField(pFVar27,&local_6b8,&local_7ac);
            if ((pFVar27 == (FJsonObject *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar20)) {
              pcVar9 = (code *)swi(3);
              pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
              return pTVar26;
            }
            local_428 = L"SidebarPinned";
            uStack_420 = 0xd;
            local_f8._12_4_ = uStack_41c;
            local_f8.Size = 0xd;
            local_f8.DataPtr = L"SidebarPinned";
            FJsonObject::TryGetBoolField(pFVar27,&local_f8,local_res18);
          }
          this = local_6d8.Object;
          fVar17 = local_7ac;
          bVar20 = local_res18[0];
          FVar39.Data = (FScriptContainerElement *)L"";
          if (local_750.Data.ArrayNum != 0) {
            FVar39.Data = local_750.Data.AllocatorInstance.Data;
          }
          iVar22 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar39.Data,L"Left");
          if (iVar22 == 0) {
            EVar43 = Left;
          }
          else {
            FVar39.Data = (FScriptContainerElement *)L"";
            if (local_750.Data.ArrayNum != 0) {
              FVar39.Data = local_750.Data.AllocatorInstance.Data;
            }
            iVar22 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar39.Data,L"Right");
            EVar43 = (iVar22 != 0) + Right;
          }
          if ((pFVar27 == (FJsonObject *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar9 = (code *)swi(3);
            pTVar26 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar9)();
            return pTVar26;
          }
          uStack_630 = 8;
          local_638 = L"TabState";
          local_e8._12_4_ = uStack_62c;
          local_e8.Size = 8;
          local_e8.DataPtr = L"TabState";
          pFVar28 = FJsonObject::GetStringField(pFVar27,&local_c8,&local_e8);
          iVar22 = (pFVar28->Data).ArrayNum;
          if (iVar22 == UE_TABMANAGER_OPENED_TAB_STRING.Data.ArrayNum) {
            if (1 < iVar22) {
              iVar22 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)(pFVar28->Data).AllocatorInstance.Data,
                                  (wchar_t *)
                                  UE_TABMANAGER_OPENED_TAB_STRING.Data.AllocatorInstance.Data);
              bVar21 = iVar22 == 0;
              goto LAB_14275f502;
            }
LAB_14275f5ca:
            TVar45 = OpenedTab;
          }
          else {
            bVar21 = UE_TABMANAGER_OPENED_TAB_STRING.Data.ArrayNum + iVar22 == 1;
LAB_14275f502:
            if (bVar21) goto LAB_14275f5ca;
            iVar22 = (pFVar28->Data).ArrayNum;
            if (iVar22 == UE_TABMANAGER_CLOSED_TAB_STRING.Data.ArrayNum) {
              if (1 < iVar22) {
                iVar22 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)(pFVar28->Data).AllocatorInstance.Data,
                                    (wchar_t *)
                                    UE_TABMANAGER_CLOSED_TAB_STRING.Data.AllocatorInstance.Data);
                bVar21 = iVar22 == 0;
                goto LAB_14275f53c;
              }
LAB_14275f69c:
              TVar45 = ClosedTab;
            }
            else {
              bVar21 = iVar22 + UE_TABMANAGER_CLOSED_TAB_STRING.Data.ArrayNum == 1;
LAB_14275f53c:
              if (bVar21) goto LAB_14275f69c;
              iVar22 = (pFVar28->Data).ArrayNum;
              if (iVar22 == UE_TABMANAGER_INVALID_TAB_STRING.Data.ArrayNum) {
                if (1 < iVar22) {
                  iVar22 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)(pFVar28->Data).AllocatorInstance.Data,
                                      (wchar_t *)
                                      UE_TABMANAGER_INVALID_TAB_STRING.Data.AllocatorInstance.Data);
                  bVar21 = iVar22 == 0;
                  goto LAB_14275f576;
                }
LAB_14275f691:
                TVar45 = InvalidTab;
              }
              else {
                bVar21 = iVar22 + UE_TABMANAGER_INVALID_TAB_STRING.Data.ArrayNum == 1;
LAB_14275f576:
                if (bVar21) goto LAB_14275f691;
                iVar22 = (pFVar28->Data).ArrayNum;
                if (iVar22 == UE_TABMANAGER_SIDEBAR_TAB_STRING.Data.ArrayNum) {
                  if (1 < iVar22) {
                    iVar22 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)(pFVar28->Data).AllocatorInstance.Data,
                                        (wchar_t *)
                                        UE_TABMANAGER_SIDEBAR_TAB_STRING.Data.AllocatorInstance.Data
                                       );
                    bVar21 = iVar22 == 0;
                    goto LAB_14275f5b0;
                  }
                }
                else {
                  bVar21 = iVar22 + UE_TABMANAGER_SIDEBAR_TAB_STRING.Data.ArrayNum == 1;
LAB_14275f5b0:
                  if (!bVar21) {
                    local_7c8[0] = 0;
                    `TabStateFromString'::__l19::<lambda_1>::operator()(local_7c8);
                    goto LAB_14275f5ca;
                  }
                }
                TVar45 = SidebarTab;
              }
            }
          }
          FStack::AddTab(this,&local_d8,local_738,TVar45,EVar43,fVar17,bVar20);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_750.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          uVar25 = uVar25 + 1;
        } while ((int)uVar25 < local_780);
      }
      __return_storage_ptr__->Object = (FLayoutNode *)local_6d8.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_6d8.SharedReferenceCount.ReferenceController;
      if (local_6d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_788.Data,local_780);
      FVar39.Data = local_788.Data;
      local_b8.SharedReferenceCount.ReferenceController =
           local_6d8.SharedReferenceCount.ReferenceController;
    }
  }
  if ((TSharedPtr<FJsonValue,1> *)FVar39.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(FVar39.Data);
  }
LAB_14275f6e3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OrientationFromString @ 1427701d0

EOrientation __cdecl
`FTabManager::FLayout::NewFromString_Helper'::__l2::local::OrientationFromString(FString *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar2 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&Orient_Horizontal_Str,L"Orient_Horizontal");
    atexit(``FTabManager::FLayout::NewFromString_Helper'::__l2::local::OrientationFromString'::__l2
           ::_dynamic_atexit_destructor_for__Orient_Horizontal_Str__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar2 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&Orient_Vertical_Str,L"Orient_Vertical");
    atexit(``FTabManager::FLayout::NewFromString_Helper'::__l2::local::OrientationFromString'::__l2
           ::_dynamic_atexit_destructor_for__Orient_Vertical_Str__);
    _Init_thread_footer(&::_TSS1);
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == Orient_Horizontal_Str.Data.ArrayNum) {
    if (iVar1 < 2) {
      return Orient_Horizontal;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)Orient_Horizontal_Str.Data.AllocatorInstance.Data);
    bVar3 = iVar1 == 0;
  }
  else {
    bVar3 = iVar1 + Orient_Horizontal_Str.Data.ArrayNum == 1;
  }
  if (!bVar3) {
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == Orient_Vertical_Str.Data.ArrayNum) {
      if (iVar1 < 2) {
        return Orient_Vertical;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)Orient_Vertical_Str.Data.AllocatorInstance.Data);
      bVar3 = iVar1 == 0;
    }
    else {
      bVar3 = iVar1 + Orient_Vertical_Str.Data.ArrayNum == 1;
    }
    if (bVar3) {
      return Orient_Vertical;
    }
    ``FTabManager::FLayout::NewFromString_Helper'::__l2::local::OrientationFromString'::__l11::
    <lambda_1>::operator()(local_res8);
  }
  return Orient_Horizontal;
}

// PersistToString_Helper @ 142771200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<FJsonObject,1> * __cdecl
FTabManager::FLayout::PersistToString_Helper
          (TSharedRef<FJsonObject,1> *__return_storage_ptr__,
          TSharedRef<FTabManager::FLayoutNode,1> *param_1)

{
  float fVar1;
  double dVar2;
  char cVar3;
  FJsonObject *pFVar4;
  code *pcVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FJsonValueObject *pFVar13;
  FString *pFVar14;
  TSharedRef<FJsonObject,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  FJsonValueObject *pFVar18;
  FJsonValueObject *this;
  FJsonValueObject *pFVar19;
  wchar_t *pwVar20;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar21;
  ulonglong uVar22;
  TReferenceControllerBase<1> *this_00;
  TReferenceControllerBase<1> *pTVar23;
  FName *pFVar24;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar25;
  FName *pFVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong local_4b8;
  TReferenceControllerBase<1> *local_4b0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_4a8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_498;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_488;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_478;
  TSharedPtr<FJsonValue,1> local_468;
  longlong local_458;
  TReferenceControllerBase<1> *local_450;
  uint local_448;
  TSharedPtr<FJsonValue,1> local_440;
  TSharedPtr<FJsonValue,1> local_430;
  TSharedPtr<FJsonValue,1> local_420;
  longlong local_410;
  TReferenceControllerBase<1> *local_408;
  TSharedRef<FJsonObject,1> local_3f8;
  TRawPtrProxy<FJsonObject> local_3e8;
  FName *local_3e0;
  TRawPtrProxy<FJsonValueObject> local_3d8;
  TRawPtrProxy<FJsonValueObject> local_3d0;
  TRawPtrProxy<FJsonObject> local_3c8;
  TRawPtrProxy<FJsonValueObject> local_3c0;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  TSharedPtr<FJsonObject,1> local_268;
  FString local_258;
  TSharedPtr<FJsonObject,1> local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  TSharedPtr<FJsonObject,1> local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  TSharedRef<FJsonObject,1> local_d8;
  FString local_c8;
  FString local_b8;
  TSharedRef<FJsonObject,1> local_a8;
  FString local_98;
  FString local_88;
  TSharedPtr<FJsonObject,1> local_78 [3];
  
  pFVar18 = (FJsonValueObject *)0x0;
  local_448 = 0;
  pFVar13 = ::operator_new(0x50);
  local_3e8.Object = (FJsonObject *)pFVar18;
  if (pFVar13 != (FJsonValueObject *)0x0) {
    (pFVar13->Value).Object = (FJsonObject *)0x0;
    (pFVar13->Value).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar13[1].Value.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar13[2]._padding_ = 0;
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    pFVar13[1]._padding_ = 0;
    *(undefined4 *)&pFVar13[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar13[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar13[1].Value.Object = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar13[1].Value.Object + 4) = 0;
    pFVar13[2]._padding_ = 0;
    local_3e8.Object = (FJsonObject *)pFVar13;
  }
  TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
            (__return_storage_ptr__,&local_3e8);
  (**(code **)(param_1->Object->_padding_ + 8))(param_1->Object,&local_458);
  (**(code **)(param_1->Object->_padding_ + 0x10))(param_1->Object,&local_410);
  (**(code **)(param_1->Object->_padding_ + 0x18))(param_1->Object,&local_4b8);
  pFVar4 = __return_storage_ptr__->Object;
  fVar1 = param_1->Object->SizeCoefficient;
  ::FString::FString(&local_3b8,L"SizeCoefficient");
  FJsonObject::SetNumberField(pFVar4,&local_3b8,(double)fVar1);
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (local_4b8 == 0) {
    if (local_410 == 0) {
      if (local_458 == 0) {
        `FTabManager::FLayout::PersistToString_Helper'::__l57::<lambda_1>::operator()(local_res20);
      }
      else {
        pFVar4 = __return_storage_ptr__->Object;
        ::FString::FString(&local_1e8,L"Type");
        pFVar14 = ::FString::FString(&local_98,L"Stack");
        FJsonObject::SetStringField(pFVar4,&local_1e8,pFVar14);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        pFVar4 = __return_storage_ptr__->Object;
        if ((local_458 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
          return pTVar15;
        }
        bVar10 = *(bool *)(local_458 + 0x30);
        ::FString::FString(&local_1d8,L"HideTabWell");
        FJsonObject::SetBoolField(pFVar4,&local_1d8,bVar10);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if ((local_458 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
          return pTVar15;
        }
        if ((*(byte *)(local_458 + 0x40) & 1) != 0) {
          pFVar4 = __return_storage_ptr__->Object;
          ::FName::ToString((FName *)(local_458 + 0x34),&local_1b8);
          ::FString::FString(&local_1c8,L"ForegroundTab");
          FJsonObject::SetStringField(pFVar4,&local_1c8,&local_1b8);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
        }
        local_478.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_478.ArrayNum = 0;
        local_478.ArrayMax = 0;
        if ((local_458 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
          return pTVar15;
        }
        iVar12 = *(int *)(local_458 + 0x28);
        pFVar24 = *(FName **)(local_458 + 0x20);
        pFVar26 = pFVar24 + (longlong)iVar12 * 4;
        while( true ) {
          if (*(int *)(local_458 + 0x28) != iVar12) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar24 == pFVar26) break;
          if ((pFVar24[1].Number & 1) != 0) {
            pFVar13 = ::operator_new(0x50);
            local_3c8.Object = (FJsonObject *)pFVar18;
            if (pFVar13 != (FJsonValueObject *)0x0) {
              (pFVar13->Value).Object = (FJsonObject *)0x0;
              (pFVar13->Value).SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar13[1].Value.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar13[2]._padding_ = 0;
              pFVar13->_padding_ = 0;
              pFVar13->_padding_ = 0;
              pFVar13[1]._padding_ = 0;
              *(undefined4 *)&pFVar13[1]._padding_ = 0;
              *(undefined4 *)((longlong)&pFVar13[1]._padding_ + 4) = 0x80;
              *(undefined4 *)&pFVar13[1].Value.Object = 0xffffffff;
              *(undefined4 *)((longlong)&pFVar13[1].Value.Object + 4) = 0;
              pFVar13[2]._padding_ = 0;
              local_3c8.Object = (FJsonObject *)pFVar13;
            }
            TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>(&local_3f8,&local_3c8)
            ;
            ::FName::ToString(pFVar24,&local_198);
            ::FString::FString(&local_1a8,L"TabId");
            pFVar4 = local_3f8.Object;
            FJsonObject::SetStringField(local_3f8.Object,&local_1a8,&local_198);
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            pFVar14 = StringFromTabState(&local_88,pFVar24[2].ComparisonIndex.Value);
            ::FString::FString(&local_188,L"TabState");
            FJsonObject::SetStringField(pFVar4,&local_188,pFVar14);
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if ((pFVar24[2].ComparisonIndex.Value == 4) &&
               (cVar3 = (char)pFVar24[2].Number, cVar3 != '\x02')) {
              if (cVar3 == '\0') {
                pwVar20 = L"Left";
              }
              else if (cVar3 == '\x01') {
                pwVar20 = L"Right";
              }
              else {
                pwVar20 = L"None";
              }
              ::FString::FString(&local_168,pwVar20);
              ::FString::FString(&local_178,L"SidebarLocation");
              FJsonObject::SetStringField(pFVar4,&local_178,&local_168);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
              fVar1 = (float)pFVar24[3].ComparisonIndex.Value;
              ::FString::FString(&local_158,L"SidebarCoeff");
              FJsonObject::SetNumberField(pFVar4,&local_158,(double)fVar1);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              uVar6 = pFVar24[3].Number;
              ::FString::FString(&local_148,L"SidebarPinned");
              FJsonObject::SetBoolField(pFVar4,&local_148,SUB41(uVar6,0));
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
            }
            pFVar19 = ::operator_new(0x20);
            FVar9.ReferenceController = local_3f8.SharedReferenceCount.ReferenceController;
            pFVar13 = pFVar18;
            if (pFVar19 != (FJsonValueObject *)0x0) {
              local_78[0].Object = local_3f8.Object;
              local_78[0].SharedReferenceCount.ReferenceController =
                   local_3f8.SharedReferenceCount.ReferenceController;
              if (local_3f8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_3f8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar13 = FJsonValueObject::FJsonValueObject(pFVar19,local_78);
            }
            local_3c0.Object = pFVar13;
            TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>
                      (&local_420,&local_3c0);
            if (((local_478.AllocatorInstance.Data <= &local_420) &&
                (&local_420 <
                 (TSharedPtr<FJsonValue,1> *)
                 (local_478.AllocatorInstance.Data + (longlong)local_478.ArrayMax * 0x10))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
              return pTVar15;
            }
            iVar11 = local_478.ArrayNum;
            if (local_478.ArrayNum == local_478.ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_478.AllocatorInstance,&local_478.ArrayMax);
            }
            local_478.ArrayNum = iVar11 + 1;
            *(FJsonValue **)&local_478.AllocatorInstance.Data[(longlong)iVar11 * 0x10].field_0x0 =
                 local_420.Object;
            *(TReferenceControllerBase<1> **)
             (local_478.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
                 local_420.SharedReferenceCount.ReferenceController;
            local_420.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_420.Object = (FJsonValue *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar9.ReferenceController);
          }
          pFVar24 = pFVar24 + 4;
        }
        pFVar4 = __return_storage_ptr__->Object;
        ::FString::FString(&local_138,L"Tabs");
        FJsonObject::SetArrayField(pFVar4,&local_138,&local_478);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_478.AllocatorInstance.Data,local_478.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_478.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_478.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar4 = __return_storage_ptr__->Object;
      ::FString::FString(&local_228,L"Type");
      pFVar14 = ::FString::FString(&local_c8,L"Splitter");
      FJsonObject::SetStringField(pFVar4,&local_228,pFVar14);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      pFVar4 = __return_storage_ptr__->Object;
      if ((local_410 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      pwVar20 = L"Orient_Vertical";
      if (*(int *)(local_410 + 0x20) == 0) {
        pwVar20 = L"Orient_Horizontal";
      }
      ::FString::FString(&local_218,L"Orientation");
      pFVar14 = ::FString::FString(&local_b8,pwVar20);
      FJsonObject::SetStringField(pFVar4,&local_218,pFVar14);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_488.ArrayNum = 0;
      local_488.ArrayMax = 0;
      if ((local_410 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      iVar12 = *(int *)(local_410 + 0x30);
      pTVar21 = *(TSharedRef<FTabManager::FLayoutNode,1> **)(local_410 + 0x28);
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      pTVar25 = pTVar21 + iVar12;
      pFVar13 = pFVar18;
      for (; pTVar21 != pTVar25; pTVar21 = pTVar21 + 1) {
        this = ::operator_new(0x20);
        pFVar19 = pFVar18;
        if (this != (FJsonValueObject *)0x0) {
          pFVar13 = (FJsonValueObject *)&DAT_00000002;
          pTVar15 = PersistToString_Helper(&local_a8,pTVar21);
          local_208.Object = pTVar15->Object;
          local_208.SharedReferenceCount.ReferenceController =
               (pTVar15->SharedReferenceCount).ReferenceController;
          if (local_208.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pFVar19 = FJsonValueObject::FJsonValueObject(this,&local_208);
        }
        local_3d0.Object = pFVar19;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_430,&local_3d0);
        if (((local_488.AllocatorInstance.Data <= &local_430) &&
            (&local_430 <
             (TSharedPtr<FJsonValue,1> *)
             (local_488.AllocatorInstance.Data + (longlong)local_488.ArrayMax * 0x10))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
          return pTVar15;
        }
        iVar12 = local_488.ArrayNum;
        if (local_488.ArrayNum == local_488.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_488.AllocatorInstance,&local_488.ArrayMax);
        }
        local_488.ArrayNum = iVar12 + 1;
        *(FJsonValue **)&local_488.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0 =
             local_430.Object;
        *(TReferenceControllerBase<1> **)
         (local_488.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
             local_430.SharedReferenceCount.ReferenceController;
        local_430.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_430.Object = (FJsonValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pFVar13 != (FJsonValueObject *)0x0) {
          pFVar13 = (FJsonValueObject *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
        }
      }
      pFVar4 = __return_storage_ptr__->Object;
      ::FString::FString(&local_1f8,L"Nodes");
      FJsonObject::SetArrayField(pFVar4,&local_1f8,&local_488);
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_488.AllocatorInstance.Data,local_488.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_488.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_488.AllocatorInstance.Data);
      }
    }
    goto LAB_1427728c3;
  }
  pFVar4 = __return_storage_ptr__->Object;
  ::FString::FString(&local_3a8,L"Type");
  pFVar14 = ::FString::FString(&local_128,L"Area");
  FJsonObject::SetStringField(pFVar4,&local_3a8,pFVar14);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  pFVar4 = __return_storage_ptr__->Object;
  if ((local_4b8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
    return pTVar15;
  }
  pwVar20 = L"Orient_Vertical";
  if (*(int *)(local_4b8 + 0x20) == 0) {
    pwVar20 = L"Orient_Horizontal";
  }
  ::FString::FString(&local_398,L"Orientation");
  pFVar14 = ::FString::FString(&local_118,pwVar20);
  FJsonObject::SetStringField(pFVar4,&local_398,pFVar14);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  if ((local_4b8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
    return pTVar15;
  }
  iVar12 = *(int *)(local_4b8 + 0x38);
  if (iVar12 == 1) {
    pFVar4 = __return_storage_ptr__->Object;
    ::FString::FString(&local_388,L"WindowPlacement");
    pFVar14 = ::FString::FString(&local_108,L"Placement_Automatic");
    FJsonObject::SetStringField(pFVar4,&local_388,pFVar14);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    pFVar4 = __return_storage_ptr__->Object;
    if ((local_4b8 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
      return pTVar15;
    }
    dVar2 = *(double *)(local_4b8 + 0x50);
    ::FString::FString(&local_378,L"WindowSize_X");
    FJsonObject::SetNumberField(pFVar4,&local_378,dVar2);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    pFVar4 = __return_storage_ptr__->Object;
    if ((local_4b8 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
      return pTVar15;
    }
    dVar2 = *(double *)(local_4b8 + 0x58);
    ::FString::FString(&local_368,L"WindowSize_Y");
    FJsonObject::SetNumberField(pFVar4,&local_368,dVar2);
LAB_14277185c:
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (iVar12 == 0) {
      pFVar4 = __return_storage_ptr__->Object;
      ::FString::FString(&local_358,L"WindowPlacement");
      pFVar14 = ::FString::FString(&local_f8,L"Placement_NoWindow");
      FJsonObject::SetStringField(pFVar4,&local_358,pFVar14);
      local_368.Data.AllocatorInstance.Data = local_358.Data.AllocatorInstance.Data;
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        local_368.Data.AllocatorInstance.Data = local_358.Data.AllocatorInstance.Data;
      }
      goto LAB_14277185c;
    }
    if (iVar12 == 2) {
      pFVar4 = __return_storage_ptr__->Object;
      ::FString::FString(&local_348,L"WindowPlacement");
      pFVar14 = ::FString::FString(&local_e8,L"Placement_Specified");
      FJsonObject::SetStringField(pFVar4,&local_348,pFVar14);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
      pFVar4 = __return_storage_ptr__->Object;
      if ((local_4b8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      dVar2 = *(double *)(local_4b8 + 0x40);
      ::FString::FString(&local_338,L"WindowPosition_X");
      FJsonObject::SetNumberField(pFVar4,&local_338,dVar2);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      pFVar4 = __return_storage_ptr__->Object;
      if ((local_4b8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      dVar2 = *(double *)(local_4b8 + 0x48);
      ::FString::FString(&local_328,L"WindowPosition_Y");
      FJsonObject::SetNumberField(pFVar4,&local_328,dVar2);
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      pFVar4 = __return_storage_ptr__->Object;
      if ((local_4b8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      dVar2 = *(double *)(local_4b8 + 0x50);
      ::FString::FString(&local_318,L"WindowSize_X");
      FJsonObject::SetNumberField(pFVar4,&local_318,dVar2);
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      pFVar4 = __return_storage_ptr__->Object;
      if ((local_4b8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      dVar2 = *(double *)(local_4b8 + 0x58);
      ::FString::FString(&local_308,L"WindowSize_Y");
      FJsonObject::SetNumberField(pFVar4,&local_308,dVar2);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      pFVar4 = __return_storage_ptr__->Object;
      if ((local_4b8 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      bVar10 = *(bool *)(local_4b8 + 0x60);
      ::FString::FString(&local_2f8,L"bIsMaximized");
      FJsonObject::SetBoolField(pFVar4,&local_2f8,bVar10);
      local_368.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
      goto LAB_14277185c;
    }
  }
  if ((local_4b8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
    return pTVar15;
  }
  if (*(FName *)(local_4b8 + 0x6c) != (FName)0x0) {
    pFVar4 = __return_storage_ptr__->Object;
    ::FName::ToString((FName *)(local_4b8 + 0x6c),&local_2d8);
    ::FString::FString(&local_2e8,L"ActivePanelDrawerTab");
    FJsonObject::SetStringField(pFVar4,&local_2e8,&local_2d8);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    pFVar4 = __return_storage_ptr__->Object;
    if ((local_4b8 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
      return pTVar15;
    }
    fVar1 = *(float *)(local_4b8 + 0x7c);
    ::FString::FString(&local_2c8,L"MainContentCoefficient");
    FJsonObject::SetNumberField(pFVar4,&local_2c8,(double)fVar1);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    pFVar4 = __return_storage_ptr__->Object;
    if ((local_4b8 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
      return pTVar15;
    }
    fVar1 = *(float *)(local_4b8 + 0x80);
    ::FString::FString(&local_2b8,L"PanelDrawerCoefficient");
    FJsonObject::SetNumberField(pFVar4,&local_2b8,(double)fVar1);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.ArrayNum = 0;
  local_4a8.ArrayMax = 0;
  if ((local_4b8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
    return pTVar15;
  }
  uVar22 = local_4b8;
  pTVar8 = _UNK_150651568;
  pTVar7 = ___xmm_00000000000000000000000000000010;
  iVar12 = *(int *)(local_4b8 + 0x90);
  pFVar24 = *(FName **)(local_4b8 + 0x88);
  local_3e0 = pFVar24 + (longlong)iVar12 * 3;
  while( true ) {
    pFVar26 = local_3e0;
    pTVar23 = (TReferenceControllerBase<1> *)0x0;
    if (*(int *)(uVar22 + 0x90) != iVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FTabManager::FPanelDrawerTab,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar24 == pFVar26) break;
    pTVar16 = ::operator_new(0x60);
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      this_00 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar16->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
      pTVar16->SharedReferenceCount = (atomic<int>)0x1;
      this_00 = pTVar16 + 1;
      pTVar16->WeakReferenceCount = (atomic<int>)0x1;
      pTVar16[2]._padding_ = 0;
      pTVar16[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[1]._padding_ = 0;
      pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar16[3]._padding_ = 0;
      pTVar16[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar16[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar16[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTVar16[4]._padding_ + 4) = 0;
      pTVar16[5]._padding_ = 0;
      if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
    }
    ::FName::ToString(pFVar24,&local_298);
    ::FString::FString(&local_2a8,L"TabId");
    FJsonObject::SetStringField((FJsonObject *)this_00,&local_2a8,&local_298);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    fVar1 = (float)pFVar24[2].ComparisonIndex.Value;
    ::FString::FString(&local_288,L"MainContentCoefficient");
    FJsonObject::SetNumberField((FJsonObject *)this_00,&local_288,(double)fVar1);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    fVar1 = (float)pFVar24[2].Number;
    ::FString::FString(&local_278,L"PanelDrawerCoefficient");
    FJsonObject::SetNumberField((FJsonObject *)this_00,&local_278,(double)fVar1);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    pTVar17 = ::operator_new(0x30);
    if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
      local_468.Object = (FJsonValue *)pTVar7;
      local_468.SharedReferenceCount.ReferenceController = pTVar8;
    }
    else {
      pTVar17->SharedReferenceCount = (atomic<int>)0x1;
      pTVar17->WeakReferenceCount = (atomic<int>)0x1;
      pTVar17->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_268.Object = (FJsonObject *)this_00;
      local_268.SharedReferenceCount.ReferenceController = pTVar16;
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar17 + 1),&local_268);
      if ((pTVar17 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      pTVar23 = pTVar17;
      local_468.Object = (FJsonValue *)(pTVar17 + 1);
      local_468.SharedReferenceCount.ReferenceController = pTVar17;
    }
    if (((local_4a8.AllocatorInstance.Data <= &local_468) &&
        (&local_468 <
         (TSharedPtr<FJsonValue,1> *)
         (local_4a8.AllocatorInstance.Data + (longlong)local_4a8.ArrayMax * 0x10))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
      return pTVar15;
    }
    iVar11 = local_4a8.ArrayNum;
    if (local_4a8.ArrayNum == local_4a8.ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_4a8.AllocatorInstance,&local_4a8.ArrayMax);
    }
    local_4a8.ArrayNum = iVar11 + 1;
    *(FJsonValue **)&local_4a8.AllocatorInstance.Data[(longlong)iVar11 * 0x10].field_0x0 =
         local_468.Object;
    *(TReferenceControllerBase<1> **)
     (local_4a8.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
         local_468.SharedReferenceCount.ReferenceController;
    local_468.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_468.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    pFVar24 = pFVar24 + 3;
  }
  uVar22 = (ulonglong)local_448;
  if (local_4a8.ArrayNum != 0) {
    pFVar4 = __return_storage_ptr__->Object;
    ::FString::FString(&local_258,L"InactivePanelDrawerTabs");
    FJsonObject::SetArrayField(pFVar4,&local_258,&local_4a8);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  local_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_498._8_8_ = uVar22;
  if ((local_4b8 == uVar22) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
    return pTVar15;
  }
  iVar12 = *(int *)(local_4b8 + 0x30);
  pTVar21 = *(TSharedRef<FTabManager::FLayoutNode,1> **)(local_4b8 + 0x28);
  if ((iVar12 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
    return pTVar15;
  }
  pTVar25 = pTVar21 + iVar12;
  if (pTVar21 != pTVar25) {
    do {
      pFVar18 = ::operator_new(0x20);
      pFVar13 = (FJsonValueObject *)0x0;
      if (pFVar18 != (FJsonValueObject *)0x0) {
        uVar22 = (ulonglong)((uint)uVar22 | 1);
        pTVar15 = PersistToString_Helper(&local_d8,pTVar21);
        local_248.Object = pTVar15->Object;
        local_248.SharedReferenceCount.ReferenceController =
             (pTVar15->SharedReferenceCount).ReferenceController;
        if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFVar13 = FJsonValueObject::FJsonValueObject(pFVar18,&local_248);
      }
      local_3d8.Object = pFVar13;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_440,&local_3d8);
      if (((local_498.AllocatorInstance.Data <= &local_440) &&
          (&local_440 <
           (TSharedPtr<FJsonValue,1> *)
           (local_498.AllocatorInstance.Data + (longlong)local_498.ArrayMax * 0x10))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TSharedRef<FJsonObject,1> *)(*pcVar5)();
        return pTVar15;
      }
      iVar12 = local_498.ArrayNum;
      if (local_498.ArrayNum == local_498.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_498.AllocatorInstance,&local_498.ArrayMax);
      }
      local_498.ArrayNum = iVar12 + 1;
      *(FJsonValue **)&local_498.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0 =
           local_440.Object;
      *(TReferenceControllerBase<1> **)
       (local_498.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
           local_440.SharedReferenceCount.ReferenceController;
      local_440.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_440.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((uVar22 & 1) != 0) {
        uVar22 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
      }
      pTVar21 = pTVar21 + 1;
    } while (pTVar21 != pTVar25);
  }
  pFVar4 = __return_storage_ptr__->Object;
  ::FString::FString(&local_238,L"Nodes");
  FJsonObject::SetArrayField(pFVar4,&local_238,&local_498);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_498.AllocatorInstance.Data,local_498.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_498.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_498.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_4a8.AllocatorInstance.Data,local_4a8.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_4a8.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_4a8.AllocatorInstance.Data);
  }
LAB_1427728c3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_408);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_450);
  return __return_storage_ptr__;
}

// PlacementFromString @ 142772cd0

EWindowPlacement __cdecl
`FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString(FString *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar2 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&Placement_NoWindow_Str,L"Placement_NoWindow");
    atexit(``FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString'::__l2::
           _dynamic_atexit_destructor_for__Placement_NoWindow_Str__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar2 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&Placement_Automatic_Str,L"Placement_Automatic");
    atexit(``FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString'::__l2::
           _dynamic_atexit_destructor_for__Placement_Automatic_Str__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar2 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&Placement_Specified_Str,L"Placement_Specified");
    atexit(``FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString'::__l2::
           _dynamic_atexit_destructor_for__Placement_Specified_Str__);
    _Init_thread_footer(&::_TSS2);
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == Placement_NoWindow_Str.Data.ArrayNum) {
    if (iVar1 < 2) {
      return Placement_NoWindow;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)Placement_NoWindow_Str.Data.AllocatorInstance.Data);
    bVar3 = iVar1 == 0;
  }
  else {
    bVar3 = iVar1 + Placement_NoWindow_Str.Data.ArrayNum == 1;
  }
  if (bVar3) {
    return Placement_NoWindow;
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == Placement_Automatic_Str.Data.ArrayNum) {
    if (iVar1 < 2) {
      return Placement_Automatic;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)Placement_Automatic_Str.Data.AllocatorInstance.Data);
    bVar3 = iVar1 == 0;
  }
  else {
    bVar3 = iVar1 + Placement_Automatic_Str.Data.ArrayNum == 1;
  }
  if (!bVar3) {
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == Placement_Specified_Str.Data.ArrayNum) {
      if (iVar1 < 2) {
        return Placement_Specified;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)Placement_Specified_Str.Data.AllocatorInstance.Data);
      bVar3 = iVar1 == 0;
    }
    else {
      bVar3 = iVar1 + Placement_Specified_Str.Data.ArrayNum == 1;
    }
    if (bVar3) {
      return Placement_Specified;
    }
    ``FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString'::__l15::
    <lambda_1>::operator()(local_res8);
  }
  return Placement_Automatic;
}

// ProcessExtensions @ 1427745d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTabManager::FLayout::ProcessExtensions(FLayout *this,FLayoutExtender *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement FVar3;
  uchar uVar4;
  ForElementType<FTabManager::FTab> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLayoutNode *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  FName FVar11;
  FName FVar12;
  undefined8 uVar13;
  atomic<int> aVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  atomic<int> aVar21;
  TTuple<FTabManager::FStack_*,FTabManager::FSplitter_*> *pTVar22;
  longlong lVar23;
  FStack *pFVar24;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ForElementType<FSetElementId> FVar28;
  TSharedRef<FTabManager::FArea,1> *pTVar29;
  FScriptContainerElement *pFVar30;
  longlong *plVar31;
  longlong lVar32;
  uchar *puVar33;
  longlong *plVar34;
  ForElementType<FLayoutExtender::FExtendedTab> FVar35;
  TSharedRef<FTabManager::FArea,1> *pTVar36;
  FScriptContainerElement *pFVar37;
  FStack *pFVar38;
  FStack *pFVar39;
  ForElementType<FTabManager::FTab> FVar40;
  FStack *pFVar41;
  TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar42;
  uint uVar43;
  ForElementType<FTabManager::FTab> FVar44;
  FLayoutExtender *pFVar45;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6;
  undefined1 local_3a5;
  undefined1 local_3a4;
  undefined1 local_3a3;
  undefined1 local_3a2;
  undefined1 local_3a1;
  undefined1 local_3a0;
  undefined1 local_39f;
  undefined1 local_39e [2];
  uint local_39c;
  uint local_398;
  longlong local_390;
  longlong local_388;
  FLayoutExtender *local_380;
  FStack *local_378;
  uint local_370;
  undefined8 local_368;
  undefined8 local_360;
  TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_> *local_358;
  longlong *local_350;
  ForElementType<FTabManager::FTab> local_348;
  uint uStack_340;
  uint uStack_33c;
  TSharedRef<FTabManager::FLayoutNode,1> local_338;
  TSharedRef<FTabManager::FLayoutNode,1> local_328;
  longlong *local_318;
  TRawPtrProxy<FTabManager::FStack> local_310;
  TRawPtrProxy<FTabManager::FStack> local_308 [2];
  uint local_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  FTabId local_2e8;
  TSharedRef<FTabManager::FLayoutNode,1> local_2d8;
  TSharedRef<FTabManager::FStack,1> local_2c8;
  TSharedRef<FTabManager::FLayoutNode,1> local_2b8;
  TSharedRef<FTabManager::FStack,1> local_2a8;
  FTabId local_298;
  FTabId local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  TSharedRef<FTabManager::FLayoutNode,1> local_248;
  TSharedRef<FTabManager::FLayoutNode,1> local_238;
  undefined1 local_228 [16];
  TSharedRef<FTabManager::FLayoutNode,1> local_218;
  TSharedRef<FTabManager::FLayoutNode,1> local_208;
  TArray<FTabManager::FTab,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_1f8;
  TSet<TTuple<FTabManager::FStack_*,FTabManager::FSplitter_*>,TDefaultMapHashableKeyFuncs<FTabManager::FStack_*,FTabManager::FSplitter_*,0>,FDefaultSetAllocator>
  local_1c8;
  longlong *local_178;
  ulonglong local_170;
  TSet<FTabId,DefaultKeyFuncs<FTabId,0>,FDefaultSetAllocator> local_168;
  TArray<FLayoutExtender::FExtendedTab,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_118;
  TArray<FLayoutExtender::FExtendedTab,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  iVar20 = (this->Areas).ArrayNum;
  pTVar29 = (TSharedRef<FTabManager::FArea,1> *)(this->Areas).AllocatorInstance.Data;
  pTVar36 = pTVar29 + iVar20;
  local_380 = param_1;
  while( true ) {
    if ((this->Areas).ArrayNum != iVar20) {
      local_3a8 = 0;
      `TCheckedPointerIterator<TSharedRef<FTabManager::FArea,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_3a8);
    }
    if (pTVar29 == pTVar36) break;
    FLayoutExtender::ExtendAreaRecursive(param_1,pTVar29);
    pTVar29 = pTVar29 + 1;
  }
  iVar20 = (this->Areas).ArrayNum;
  pFVar30 = (this->Areas).AllocatorInstance.Data;
  pFVar37 = pFVar30 + (longlong)iVar20 * 0x10;
  local_1c8.Elements._0_8_ = 0;
  local_1c8.Elements._8_8_ = 0;
  local_1c8.Elements._32_8_ = 0;
  local_1c8.Elements._40_4_ = 0;
  local_1c8.Elements._44_4_ = 0x80;
  local_1c8.Elements._48_4_ = 0xffffffff;
  local_1c8.Elements._52_4_ = 0;
  local_1c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1c8.HashSize = 0;
  local_178 = (longlong *)0x0;
  local_170 = 0;
  local_168.Elements._0_8_ = 0;
  local_168.Elements._8_8_ = 0;
  local_168.Elements._32_8_ = 0;
  local_168.Elements._40_4_ = 0;
  local_168.Elements._44_4_ = 0x80;
  local_168.Elements._48_4_ = 0xffffffff;
  local_168.Elements._52_4_ = 0;
  local_168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_168.HashSize = 0;
  while( true ) {
    if ((this->Areas).ArrayNum != iVar20) {
      local_3a7 = 0;
      `TCheckedPointerIterator<TSharedRef<FTabManager::FArea,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_3a7);
    }
    if (pFVar30 == pFVar37) break;
    `FTabManager::FLayout::ProcessExtensions'::__l2::FTabInformation::Gather
              (&local_1c8,*(FSplitter **)pFVar30);
    pFVar30 = pFVar30 + 0x10;
  }
  uVar26 = (ulonglong)(int)(uint)local_170;
  local_1f8.AllocatorInstance.SecondaryData = (ForElementType<FTabManager::FTab>)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 1;
  local_318 = local_178 + uVar26;
  local_370 = (uint)local_170;
  uVar27 = uVar26;
  plVar31 = local_178;
  do {
    plVar34 = local_318;
    iVar20 = 0;
    local_350 = plVar31;
    if ((int)uVar26 != (int)uVar27) {
      local_3a6 = 0;
      `TCheckedPointerIterator<FTabManager::FStack_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_3a6);
    }
    if (plVar31 == plVar34) {
      if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<FTabManager::FTab>)0x0) {
        FMemory::Free((void *)local_1f8.AllocatorInstance.SecondaryData);
      }
      local_168.HashSize = 0;
      if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_168.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FTabId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTabId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_168.Elements);
      if (local_178 != (longlong *)0x0) {
        FMemory::Free(local_178);
      }
      local_1c8.HashSize = 0;
      if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1c8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FTabManager::FStack_*,FTabManager::FSplitter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FTabManager::FStack_*,FTabManager::FSplitter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1c8.Elements);
      return;
    }
    pFVar24 = (FStack *)*plVar31;
    local_378 = pFVar24;
    FLayoutExtender::FindStackExtensions<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              (param_1,pFVar24->ExtensionId,Before,&local_1f8);
    iVar19 = local_1f8.ArrayNum;
    uVar27 = (ulonglong)local_1f8.ArrayNum;
    FVar40 = (ForElementType<FTabManager::FTab>)&local_1f8;
    if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<FTabManager::FTab>)0x0) {
      FVar40 = local_1f8.AllocatorInstance.SecondaryData;
    }
    FVar44 = (ForElementType<FTabManager::FTab>)(uVar27 * 0x20 + (longlong)FVar40);
    while( true ) {
      if ((uint)uVar27 != iVar19) {
        local_3a5 = 0;
        `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3a5);
      }
      if (FVar40 == FVar44) break;
      local_288.TabType.ComparisonIndex.Value = *(uint *)FVar40;
      uVar43 = *(uint *)((longlong)FVar40 + 4);
      uVar42 = *(uint *)((longlong)FVar40 + 8);
      puVar33 = (uchar *)((longlong)FVar40 + 0xc);
      local_288.Flags = puVar33[0];
      local_288._13_1_ = puVar33[1];
      local_288._14_1_ = puVar33[2];
      local_288._15_1_ = puVar33[3];
      local_288.TabType.Number = uVar43;
      local_288.InstanceId = uVar42;
      uVar16 = ::GetTypeHash(local_288.TabType.ComparisonIndex);
      iVar17 = TSet<FTabId,DefaultKeyFuncs<FTabId,0>,FDefaultSetAllocator>::FindIndexByHash<FTabId>
                         (&local_168,uVar43 + uVar16 ^ uVar42,&local_288);
      if (iVar17 == -1) {
        FVar5 = (ForElementType<FTabManager::FTab>)(pFVar24->Tabs).AllocatorInstance.Data;
        if ((((ulonglong)FVar5 <= (ulonglong)FVar40) &&
            ((ulonglong)FVar40 <
             (ulonglong)((longlong)(pFVar24->Tabs).ArrayMax * 0x20 + (longlong)FVar5))) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
                  (&pFVar24->Tabs,iVar20);
        FTab::FTab((FTab *)((pFVar24->Tabs).AllocatorInstance.Data + (longlong)iVar20 * 0x20),
                   (FTab *)FVar40);
        pFVar24 = local_378;
        iVar20 = iVar20 + 1;
      }
      uVar27 = (ulonglong)(uint)local_1f8.ArrayNum;
      FVar40 = (ForElementType<FTabManager::FTab>)((longlong)FVar40 + 0x20);
    }
    pTVar22 = TSet<TTuple<FTabManager::FStack_*,FTabManager::FSplitter_*>,TDefaultMapHashableKeyFuncs<FTabManager::FStack_*,FTabManager::FSplitter_*,0>,FDefaultSetAllocator>
              ::Find(&local_1c8,pFVar24);
    uVar43 = 0;
    if (pTVar22 == (TTuple<FTabManager::FStack_*,FTabManager::FSplitter_*> *)0x0) {
      local_388 = 0;
    }
    else {
      local_388 = *(longlong *)&pTVar22->field_0x8;
    }
    local_390 = 0;
    if (0 < (pFVar24->Tabs).ArrayNum) {
      this_00 = &pFVar24->Tabs;
      local_358 = this_00;
      do {
        lVar32 = local_390;
        uVar42 = 0;
        if ((int)uVar43 < this_00->ArrayNum) {
          uVar42 = ~uVar43 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar2 = (FName *)((this_00->AllocatorInstance).Data + lVar32 * 0x20);
        FVar11 = *pFVar2;
        FVar12 = pFVar2[1];
        local_278._0_8_ = FVar11;
        local_278._8_8_ = FVar12;
        FLayoutExtender::FindTabExtensions<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                  (local_380,(FTabId *)local_278,Before,&local_1f8);
        iVar20 = local_1f8.ArrayNum;
        uVar27 = (ulonglong)local_1f8.ArrayNum;
        FVar40 = (ForElementType<FTabManager::FTab>)&local_1f8;
        if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<FTabManager::FTab>)0x0) {
          FVar40 = local_1f8.AllocatorInstance.SecondaryData;
        }
        FVar44 = (ForElementType<FTabManager::FTab>)(uVar27 * 0x20 + (longlong)FVar40);
        while( true ) {
          if ((uint)uVar27 != iVar20) {
            local_3a4 = 0;
            `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_3a4);
          }
          if (FVar40 == FVar44) break;
          local_2e8.TabType.ComparisonIndex.Value = *(uint *)FVar40;
          uVar42 = *(uint *)((longlong)FVar40 + 4);
          uVar16 = *(uint *)((longlong)FVar40 + 8);
          local_2e8._12_4_ = *(undefined4 *)((longlong)FVar40 + 0xc);
          local_2e8.TabType.Number = uVar42;
          local_2e8.InstanceId = uVar16;
          uVar18 = ::GetTypeHash(local_2e8.TabType.ComparisonIndex);
          iVar19 = TSet<FTabId,DefaultKeyFuncs<FTabId,0>,FDefaultSetAllocator>::
                   FindIndexByHash<FTabId>(&local_168,uVar42 + uVar18 ^ uVar16,&local_2e8);
          lVar32 = local_390;
          if (iVar19 == -1) {
            FVar5 = (ForElementType<FTabManager::FTab>)(this_00->AllocatorInstance).Data;
            local_390 = local_390 + 1;
            uVar42 = uVar43 + 1;
            if ((((ulonglong)FVar5 <= (ulonglong)FVar40) &&
                ((ulonglong)FVar40 <
                 (ulonglong)((longlong)this_00->ArrayMax * 0x20 + (longlong)FVar5))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
                      (this_00,uVar43);
            pFVar30 = (this_00->AllocatorInstance).Data;
            uVar13 = *(undefined8 *)((longlong)FVar40 + 8);
            lVar32 = lVar32 * 0x20;
            *(undefined8 *)(pFVar30 + lVar32) = *(undefined8 *)FVar40;
            *(undefined8 *)(pFVar30 + lVar32 + 8) = uVar13;
            *(uint *)(pFVar30 + lVar32 + 0x10) = *(uint *)((longlong)FVar40 + 0x10);
            pFVar30[lVar32 + 0x14] = *(FScriptContainerElement *)((longlong)FVar40 + 0x14);
            *(uint *)(pFVar30 + lVar32 + 0x18) = *(uint *)((longlong)FVar40 + 0x18);
            FVar3 = *(FScriptContainerElement *)((longlong)FVar40 + 0x1c);
            pFVar30[lVar32 + 0x1e] = (FScriptContainerElement)0x0;
            pFVar30[lVar32 + 0x1c] = FVar3;
            FVar3 = *(FScriptContainerElement *)((longlong)FVar40 + 0x1e);
            pFVar30[lVar32 + 0x1e] = FVar3;
            uVar43 = uVar42;
            if (FVar3 != (FScriptContainerElement)0x0) {
              pFVar30[lVar32 + 0x1d] = *(FScriptContainerElement *)((longlong)FVar40 + 0x1d);
            }
          }
          uVar27 = (ulonglong)(uint)local_1f8.ArrayNum;
          FVar40 = (ForElementType<FTabManager::FTab>)((longlong)FVar40 + 0x20);
        }
        local_390 = local_390 + 1;
        uVar43 = uVar43 + 1;
        local_268._0_8_ = FVar11;
        local_268._8_8_ = FVar12;
        FLayoutExtender::FindTabExtensions<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                  (local_380,(FTabId *)local_268,After,&local_1f8);
        iVar20 = local_1f8.ArrayNum;
        uVar27 = (ulonglong)local_1f8.ArrayNum;
        FVar40 = (ForElementType<FTabManager::FTab>)&local_1f8;
        if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<FTabManager::FTab>)0x0) {
          FVar40 = local_1f8.AllocatorInstance.SecondaryData;
        }
        FVar44 = (ForElementType<FTabManager::FTab>)(uVar27 * 0x20 + (longlong)FVar40);
        while( true ) {
          if ((uint)uVar27 != iVar20) {
            local_3a3 = 0;
            `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_3a3);
          }
          if (FVar40 == FVar44) break;
          uVar42 = *(uint *)((longlong)FVar40 + 4);
          FVar5 = *(ForElementType<FTabManager::FTab> *)FVar40;
          uVar16 = *(uint *)((longlong)FVar40 + 8);
          uStack_33c = *(uint *)((longlong)FVar40 + 0xc);
          local_348 = FVar5;
          uStack_340 = uVar16;
          uVar18 = ::GetTypeHash((FNameEntryId)*(uint *)FVar40);
          lVar32 = local_390;
          if (local_168.Elements._8_4_ != local_168.Elements._52_4_) {
            FVar28 = (ForElementType<FSetElementId>)&local_168.Hash;
            if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar28 = local_168.Hash.SecondaryData;
            }
            iVar19 = *(int *)((longlong)FVar28 +
                             (ulonglong)(local_168.HashSize - 1U & (uVar42 + uVar18 ^ uVar16)) * 4);
            while (iVar19 != -1) {
              lVar23 = (longlong)iVar19;
              if ((*(ForElementType<FTabManager::FTab> *)(local_168.Elements._0_8_ + lVar23 * 0x18)
                   == FVar5) &&
                 (((uVar42 = *(uint *)(local_168.Elements._0_8_ + 8 + lVar23 * 0x18),
                   uVar42 == 0xffffffff || (uVar16 == 0xffffffff)) || (uVar42 == uVar16)))) {
                if (iVar19 != -1) goto LAB_142774d03;
                break;
              }
              iVar19 = *(int *)(local_168.Elements._0_8_ + 0x10 + lVar23 * 0x18);
            }
          }
          FVar5 = (ForElementType<FTabManager::FTab>)(this_00->AllocatorInstance).Data;
          local_390 = local_390 + 1;
          uVar42 = uVar43 + 1;
          if ((((ulonglong)FVar5 <= (ulonglong)FVar40) &&
              ((ulonglong)FVar40 < (ulonglong)((longlong)this_00->ArrayMax * 0x20 + (longlong)FVar5)
              )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
                    (this_00,uVar43);
          pFVar30 = (this_00->AllocatorInstance).Data;
          uVar13 = *(undefined8 *)((longlong)FVar40 + 8);
          lVar32 = lVar32 * 0x20;
          *(undefined8 *)(pFVar30 + lVar32) = *(undefined8 *)FVar40;
          *(undefined8 *)(pFVar30 + lVar32 + 8) = uVar13;
          *(uint *)(pFVar30 + lVar32 + 0x10) = *(uint *)((longlong)FVar40 + 0x10);
          pFVar30[lVar32 + 0x14] = *(FScriptContainerElement *)((longlong)FVar40 + 0x14);
          *(uint *)(pFVar30 + lVar32 + 0x18) = *(uint *)((longlong)FVar40 + 0x18);
          FVar3 = *(FScriptContainerElement *)((longlong)FVar40 + 0x1c);
          pFVar30[lVar32 + 0x1e] = (FScriptContainerElement)0x0;
          pFVar30[lVar32 + 0x1c] = FVar3;
          FVar3 = *(FScriptContainerElement *)((longlong)FVar40 + 0x1e);
          pFVar30[lVar32 + 0x1e] = FVar3;
          uVar43 = uVar42;
          if (FVar3 != (FScriptContainerElement)0x0) {
            pFVar30[lVar32 + 0x1d] = *(FScriptContainerElement *)((longlong)FVar40 + 0x1d);
          }
LAB_142774d03:
          uVar27 = (ulonglong)(uint)local_1f8.ArrayNum;
          FVar40 = (ForElementType<FTabManager::FTab>)((longlong)FVar40 + 0x20);
        }
        local_39c = uVar43;
        if (local_388 != 0) {
          local_1f8.ArrayNum = 0;
          local_258._0_8_ = FVar11;
          local_258._8_8_ = FVar12;
          if ((local_1f8.ArrayMax < 0) && (local_1f8.ArrayMax != 0)) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
                      (0x20,4,0,&local_1f8.AllocatorInstance,0,&local_1f8.ArrayMax);
          }
          pFVar45 = local_380;
          local_118.AllocatorInstance.SecondaryData =
               (ForElementType<FLayoutExtender::FExtendedTab>)0x0;
          local_118.ArrayNum = 0;
          local_118.ArrayMax = 2;
          TMultiMap<FTabId,FLayoutExtender::FExtendedTab,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>_>
          ::MultiFind<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                    (&local_380->TabExtensions,(FTabId *)local_258,&local_118,true);
          iVar20 = local_118.ArrayNum;
          lVar32 = (longlong)local_118.ArrayNum;
          FVar35 = (ForElementType<FLayoutExtender::FExtendedTab>)&local_118;
          if (local_118.AllocatorInstance.SecondaryData !=
              (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
            FVar35 = local_118.AllocatorInstance.SecondaryData;
          }
          puVar33 = (uchar *)((longlong)FVar35 + 0x18);
          while( true ) {
            if (local_118.ArrayNum != iVar20) {
              local_3a2 = 0;
              `TCheckedPointerIterator<FLayoutExtender::FExtendedTab,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_3a2);
            }
            if ((ForElementType<FLayoutExtender::FExtendedTab> *)(puVar33 + -0x18) ==
                (ForElementType<FLayoutExtender::FExtendedTab> *)((longlong)FVar35 + lVar32 * 0x24))
            break;
            if (*(int *)((ForElementType<FLayoutExtender::FExtendedTab> *)(puVar33 + -0x18))->
                        InlineData == 3) {
              FVar40 = (ForElementType<FTabManager::FTab>)((longlong)puVar33 - 0x14);
              FVar44 = (ForElementType<FTabManager::FTab>)&local_1f8;
              if (local_1f8.AllocatorInstance.SecondaryData !=
                  (ForElementType<FTabManager::FTab>)0x0) {
                FVar44 = local_1f8.AllocatorInstance.SecondaryData;
              }
              if ((ulonglong)FVar44 <= (ulonglong)FVar40) {
                FVar44 = (ForElementType<FTabManager::FTab>)&local_1f8;
                if (local_1f8.AllocatorInstance.SecondaryData !=
                    (ForElementType<FTabManager::FTab>)0x0) {
                  FVar44 = local_1f8.AllocatorInstance.SecondaryData;
                }
                if (((ulonglong)FVar40 <
                     (ulonglong)((longlong)local_1f8.ArrayMax * 0x20 + (longlong)FVar44)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              uVar42 = local_1f8.ArrayNum;
              if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
                uVar42 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
                                   (0x420,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
              }
              local_1f8.ArrayNum = uVar42 + 1;
              uVar13 = *(undefined8 *)(puVar33 + -0xc);
              FVar44 = (ForElementType<FTabManager::FTab>)&local_1f8;
              if (local_1f8.AllocatorInstance.SecondaryData !=
                  (ForElementType<FTabManager::FTab>)0x0) {
                FVar44 = local_1f8.AllocatorInstance.SecondaryData;
              }
              lVar23 = (longlong)(int)uVar42 * 0x20;
              *(undefined8 *)(lVar23 + (longlong)FVar44) = *(undefined8 *)FVar40;
              *(undefined8 *)((uint *)(lVar23 + (longlong)FVar44) + 2) = uVar13;
              *(undefined4 *)(lVar23 + 0x10 + (longlong)FVar44) = *(undefined4 *)(puVar33 + -4);
              *(uchar *)(lVar23 + 0x14 + (longlong)FVar44) = *puVar33;
              *(undefined4 *)(lVar23 + 0x18 + (longlong)FVar44) = *(undefined4 *)(puVar33 + 4);
              uVar4 = puVar33[8];
              *(undefined1 *)(lVar23 + 0x1e + (longlong)FVar44) = 0;
              *(uchar *)(lVar23 + 0x1c + (longlong)FVar44) = uVar4;
              uVar4 = puVar33[10];
              *(uchar *)(lVar23 + 0x1e + (longlong)FVar44) = uVar4;
              if (uVar4 != '\0') {
                *(uchar *)(lVar23 + 0x1d + (longlong)FVar44) = puVar33[9];
              }
            }
            puVar33 = puVar33 + 0x24;
          }
          if (local_118.AllocatorInstance.SecondaryData !=
              (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
            FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
          }
          uVar27 = (ulonglong)local_1f8.ArrayNum;
          if (local_1f8.ArrayNum != 0) {
            local_398 = local_1f8.ArrayNum;
            FVar40 = (ForElementType<FTabManager::FTab>)&local_1f8;
            if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<FTabManager::FTab>)0x0)
            {
              FVar40 = local_1f8.AllocatorInstance.SecondaryData;
            }
            local_348 = (ForElementType<FTabManager::FTab>)(uVar27 * 0x20 + (longlong)FVar40);
            uVar26 = uVar27;
            while( true ) {
              FVar44 = local_348;
              if ((int)uVar27 != (int)uVar26) {
                local_3a1 = 0;
                `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_3a1);
              }
              this_00 = local_358;
              pFVar45 = local_380;
              uVar43 = local_39c;
              if (FVar40 == FVar44) break;
              local_2f8 = *(uint *)FVar40;
              uVar43 = *(uint *)((longlong)FVar40 + 4);
              lVar32 = *(longlong *)FVar40;
              uVar42 = *(uint *)((longlong)FVar40 + 8);
              uStack_2ec = *(uint *)((longlong)FVar40 + 0xc);
              uStack_2f4 = uVar43;
              uStack_2f0 = uVar42;
              uVar16 = ::GetTypeHash((FNameEntryId)local_2f8);
              if (local_168.Elements._8_4_ != local_168.Elements._52_4_) {
                FVar28 = (ForElementType<FSetElementId>)&local_168.Hash;
                if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar28 = local_168.Hash.SecondaryData;
                }
                iVar20 = *(int *)((longlong)FVar28 +
                                 (ulonglong)(local_168.HashSize - 1U & (uVar43 + uVar16 ^ uVar42)) *
                                 4);
                while (iVar20 != -1) {
                  lVar23 = (longlong)iVar20;
                  if ((*(longlong *)(local_168.Elements._0_8_ + lVar23 * 0x18) == lVar32) &&
                     (((uVar43 = *(uint *)(local_168.Elements._0_8_ + 8 + lVar23 * 0x18),
                       uVar43 == 0xffffffff || (uVar42 == 0xffffffff)) || (uVar43 == uVar42)))) {
                    if (iVar20 != -1) goto LAB_142775399;
                    break;
                  }
                  iVar20 = *(int *)(local_168.Elements._0_8_ + 0x10 + lVar23 * 0x18);
                }
              }
              pFVar24 = ::operator_new(0x50);
              pFVar38 = (FStack *)0x0;
              local_310.Object = pFVar38;
              if (pFVar24 != (FStack *)0x0) {
                *(undefined8 *)&pFVar24->_padding_ = 0;
                pFVar24->_padding_ = 0;
                *(undefined4 *)&pFVar24->_padding_ = 0x3f800000;
                pFVar24->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
                (pFVar24->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (pFVar24->Tabs).ArrayNum = 0;
                (pFVar24->Tabs).ArrayMax = 0;
                pFVar24->bHideTabWell = false;
                (pFVar24->ForegroundTabId).TabType.ComparisonIndex = 0;
                (pFVar24->ForegroundTabId).TabType.Number = 0;
                (pFVar24->ForegroundTabId).InstanceId = -1;
                (pFVar24->ForegroundTabId).Flags = SaveLayout;
                (pFVar24->ExtensionId).ComparisonIndex = 0;
                (pFVar24->ExtensionId).Number = 0;
                local_368 = 0;
                local_310.Object = pFVar24;
              }
              TSharedRef<FTabManager::FStack,1>::
              TSharedRef<FTabManager::FStack,1><FTabManager::FStack>(&local_2c8,&local_310);
              (local_2c8.Object)->bHideTabWell = true;
              pTVar25 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                                  ((TSharedFromThis<FTabManager::FLayoutNode,1> *)
                                   &(local_2c8.Object)->_padding_,&local_248);
              pTVar6 = (pTVar25->SharedReferenceCount).ReferenceController;
              pFVar7 = pTVar25->Object;
              if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_248.SharedReferenceCount.ReferenceController);
              if ((((ulonglong)pFVar7[1]._padding_ <= (ulonglong)FVar40) &&
                  ((ulonglong)FVar40 <
                   (ulonglong)
                   ((longlong)*(int *)((longlong)&pFVar7[1]._padding_ + 4) * 0x20 +
                   pFVar7[1]._padding_))) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar20 = (int)pFVar7[1]._padding_;
              piVar1 = (int *)((longlong)&pFVar7[1]._padding_ + 4);
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x420,(ForAnyElementType *)(pFVar7 + 1),piVar1);
              }
              lVar32 = pFVar7[1]._padding_;
              *(int *)&pFVar7[1]._padding_ = iVar20 + 1;
              uVar13 = *(undefined8 *)((longlong)FVar40 + 8);
              lVar23 = (longlong)iVar20 * 0x20;
              *(undefined8 *)(lVar23 + lVar32) = *(undefined8 *)FVar40;
              ((undefined8 *)(lVar23 + lVar32))[1] = uVar13;
              *(uint *)(lVar23 + 0x10 + lVar32) = *(uint *)((longlong)FVar40 + 0x10);
              *(uchar *)(lVar23 + 0x14 + lVar32) = *(uchar *)((longlong)FVar40 + 0x14);
              *(uint *)(lVar23 + 0x18 + lVar32) = *(uint *)((longlong)FVar40 + 0x18);
              uVar4 = *(uchar *)((longlong)FVar40 + 0x1c);
              *(undefined1 *)(lVar23 + 0x1e + lVar32) = 0;
              *(uchar *)(lVar23 + 0x1c + lVar32) = uVar4;
              uVar4 = *(uchar *)((longlong)FVar40 + 0x1e);
              *(uchar *)(lVar23 + 0x1e + lVar32) = uVar4;
              if (uVar4 != '\0') {
                *(uchar *)(lVar23 + 0x1d + lVar32) = *(uchar *)((longlong)FVar40 + 0x1d);
              }
              pTVar25 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                                  ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar7->_padding_
                                   ,&local_2d8);
              pTVar8 = (pTVar25->SharedReferenceCount).ReferenceController;
              pFVar7 = pTVar25->Object;
              if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_2d8.SharedReferenceCount.ReferenceController);
              }
              else {
                LOCK();
                pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
                UNLOCK();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_2d8.SharedReferenceCount.ReferenceController);
                LOCK();
                pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar24 = (FStack *)local_378->_padding_;
              pFVar39 = pFVar38;
              pFVar41 = pFVar24;
              if (pFVar24 != (FStack *)0x0) {
                aVar14 = *(atomic<int> *)&pFVar24->_padding_;
                do {
                  pFVar41 = pFVar38;
                  if (aVar14 == (atomic<int>)0x0) goto LAB_142775246;
                  LOCK();
                  aVar21 = *(atomic<int> *)&pFVar24->_padding_;
                  bVar15 = aVar14 == aVar21;
                  if (bVar15) {
                    *(atomic<int> *)&pFVar24->_padding_ = (atomic<int>)((int)aVar14 + 1);
                    aVar21 = aVar14;
                  }
                  UNLOCK();
                  aVar14 = aVar21;
                } while (!bVar15);
                pFVar39 = (FStack *)local_378->_padding_;
                pFVar41 = pFVar24;
              }
LAB_142775246:
              pFVar24 = (FStack *)&pFVar39->_padding_;
              if (pFVar39 == (FStack *)0x0) {
                pFVar24 = pFVar38;
              }
              local_338.Object = pFVar7;
              local_338.SharedReferenceCount.ReferenceController = pTVar8;
              if ((pFVar24 != (FStack *)&local_378->_padding_) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("SharedThis.Get() == this",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x67f,L""), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (pFVar39 == (FStack *)0x0) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x416,L"");
                if (bVar15) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x26c,L"");
                if (bVar15) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              lVar32 = local_388;
              plVar31 = *(longlong **)(local_388 + 0x28);
              for (plVar34 = plVar31; plVar34 != plVar31 + (longlong)*(int *)(local_388 + 0x30) * 2;
                  plVar34 = plVar34 + 2) {
                if ((FStack *)*plVar34 == pFVar39) {
                  iVar20 = (int)((longlong)plVar34 - (longlong)plVar31 >> 4);
                  if (iVar20 != -1) goto LAB_14277532d;
                  goto LAB_142775307;
                }
              }
              iVar20 = -1;
LAB_142775307:
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InsertAtIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Docking\\TabManager.h"
                                  ,0x278,L"");
              if (bVar15) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
LAB_14277532d:
              TArray<TSharedRef<FTabManager::FLayoutNode,1>,TSizedDefaultAllocator<32>_>::Insert
                        ((TArray<TSharedRef<FTabManager::FLayoutNode,1>,TSizedDefaultAllocator<32>_>
                          *)(lVar32 + 0x28),&local_338,iVar20 + 1);
              pTVar25 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                                  ((TSharedFromThis<FTabManager::FLayoutNode,1> *)(lVar32 + 8),
                                   &local_238);
              pTVar9 = (pTVar25->SharedReferenceCount).ReferenceController;
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_238.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar41);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_338.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar9);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar6);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2c8.SharedReferenceCount.ReferenceController);
LAB_142775399:
              uVar27 = (ulonglong)(uint)local_1f8.ArrayNum;
              FVar40 = (ForElementType<FTabManager::FTab>)((longlong)FVar40 + 0x20);
              uVar26 = (ulonglong)local_398;
            }
          }
          local_1f8.ArrayNum = 0;
          local_228._0_8_ = FVar11;
          local_228._8_8_ = FVar12;
          if ((local_1f8.ArrayMax < 0) && (local_1f8.ArrayMax != 0)) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
                      (0x20,4,0,&local_1f8.AllocatorInstance,0,&local_1f8.ArrayMax);
          }
          local_b8.AllocatorInstance.SecondaryData =
               (ForElementType<FLayoutExtender::FExtendedTab>)0x0;
          local_b8.ArrayNum = 0;
          local_b8.ArrayMax = 2;
          TMultiMap<FTabId,FLayoutExtender::FExtendedTab,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>_>
          ::MultiFind<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                    (&pFVar45->TabExtensions,(FTabId *)local_228,&local_b8,true);
          iVar20 = local_b8.ArrayNum;
          lVar32 = (longlong)local_b8.ArrayNum;
          FVar35 = (ForElementType<FLayoutExtender::FExtendedTab>)&local_b8;
          if (local_b8.AllocatorInstance.SecondaryData !=
              (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
            FVar35 = local_b8.AllocatorInstance.SecondaryData;
          }
          puVar33 = (uchar *)((longlong)FVar35 + 0x18);
          while( true ) {
            if (local_b8.ArrayNum != iVar20) {
              local_3a0 = 0;
              `TCheckedPointerIterator<FLayoutExtender::FExtendedTab,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_3a0);
            }
            if ((ForElementType<FLayoutExtender::FExtendedTab> *)(puVar33 + -0x18) ==
                (ForElementType<FLayoutExtender::FExtendedTab> *)((longlong)FVar35 + lVar32 * 0x24))
            break;
            if (*(int *)((ForElementType<FLayoutExtender::FExtendedTab> *)(puVar33 + -0x18))->
                        InlineData == 2) {
              FVar40 = (ForElementType<FTabManager::FTab>)((longlong)puVar33 - 0x14);
              FVar44 = (ForElementType<FTabManager::FTab>)&local_1f8;
              if (local_1f8.AllocatorInstance.SecondaryData !=
                  (ForElementType<FTabManager::FTab>)0x0) {
                FVar44 = local_1f8.AllocatorInstance.SecondaryData;
              }
              if ((ulonglong)FVar44 <= (ulonglong)FVar40) {
                FVar44 = (ForElementType<FTabManager::FTab>)&local_1f8;
                if (local_1f8.AllocatorInstance.SecondaryData !=
                    (ForElementType<FTabManager::FTab>)0x0) {
                  FVar44 = local_1f8.AllocatorInstance.SecondaryData;
                }
                if (((ulonglong)FVar40 <
                     (ulonglong)((longlong)local_1f8.ArrayMax * 0x20 + (longlong)FVar44)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              uVar42 = local_1f8.ArrayNum;
              if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
                uVar42 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
                                   (0x420,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
              }
              local_1f8.ArrayNum = uVar42 + 1;
              uVar13 = *(undefined8 *)(puVar33 + -0xc);
              FVar44 = (ForElementType<FTabManager::FTab>)&local_1f8;
              if (local_1f8.AllocatorInstance.SecondaryData !=
                  (ForElementType<FTabManager::FTab>)0x0) {
                FVar44 = local_1f8.AllocatorInstance.SecondaryData;
              }
              lVar23 = (longlong)(int)uVar42 * 0x20;
              *(undefined8 *)(lVar23 + (longlong)FVar44) = *(undefined8 *)FVar40;
              *(undefined8 *)((uint *)(lVar23 + (longlong)FVar44) + 2) = uVar13;
              *(undefined4 *)(lVar23 + 0x10 + (longlong)FVar44) = *(undefined4 *)(puVar33 + -4);
              *(uchar *)(lVar23 + 0x14 + (longlong)FVar44) = *puVar33;
              *(undefined4 *)(lVar23 + 0x18 + (longlong)FVar44) = *(undefined4 *)(puVar33 + 4);
              uVar4 = puVar33[8];
              *(undefined1 *)(lVar23 + 0x1e + (longlong)FVar44) = 0;
              *(uchar *)(lVar23 + 0x1c + (longlong)FVar44) = uVar4;
              uVar4 = puVar33[10];
              *(uchar *)(lVar23 + 0x1e + (longlong)FVar44) = uVar4;
              if (uVar4 != '\0') {
                *(uchar *)(lVar23 + 0x1d + (longlong)FVar44) = puVar33[9];
              }
            }
            puVar33 = puVar33 + 0x24;
          }
          if (local_b8.AllocatorInstance.SecondaryData !=
              (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
            FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
          }
          uVar27 = (ulonglong)local_1f8.ArrayNum;
          if (local_1f8.ArrayNum != 0) {
            local_398 = local_1f8.ArrayNum;
            FVar40 = (ForElementType<FTabManager::FTab>)&local_1f8;
            if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<FTabManager::FTab>)0x0)
            {
              FVar40 = local_1f8.AllocatorInstance.SecondaryData;
            }
            local_348 = (ForElementType<FTabManager::FTab>)(uVar27 * 0x20 + (longlong)FVar40);
            uVar26 = uVar27;
            while( true ) {
              FVar44 = local_348;
              if ((int)uVar27 != (int)uVar26) {
                local_39f = 0;
                `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_39f);
              }
              this_00 = local_358;
              uVar43 = local_39c;
              if (FVar40 == FVar44) break;
              local_2f8 = *(uint *)FVar40;
              uVar43 = *(uint *)((longlong)FVar40 + 4);
              lVar32 = *(longlong *)FVar40;
              uVar42 = *(uint *)((longlong)FVar40 + 8);
              uStack_2ec = *(uint *)((longlong)FVar40 + 0xc);
              uStack_2f4 = uVar43;
              uStack_2f0 = uVar42;
              uVar16 = ::GetTypeHash((FNameEntryId)local_2f8);
              if (local_168.Elements._8_4_ != local_168.Elements._52_4_) {
                FVar28 = (ForElementType<FSetElementId>)&local_168.Hash;
                if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar28 = local_168.Hash.SecondaryData;
                }
                iVar20 = *(int *)((longlong)FVar28 +
                                 (ulonglong)(local_168.HashSize - 1U & (uVar43 + uVar16 ^ uVar42)) *
                                 4);
                while (iVar20 != -1) {
                  lVar23 = (longlong)iVar20;
                  if ((*(longlong *)(local_168.Elements._0_8_ + lVar23 * 0x18) == lVar32) &&
                     (((uVar43 = *(uint *)(local_168.Elements._0_8_ + 8 + lVar23 * 0x18),
                       uVar43 == 0xffffffff || (uVar42 == 0xffffffff)) || (uVar43 == uVar42)))) {
                    if (iVar20 != -1) goto LAB_142775a48;
                    break;
                  }
                  iVar20 = *(int *)(local_168.Elements._0_8_ + 0x10 + lVar23 * 0x18);
                }
              }
              pFVar24 = ::operator_new(0x50);
              pFVar38 = (FStack *)0x0;
              local_308[0].Object = pFVar38;
              if (pFVar24 != (FStack *)0x0) {
                *(undefined8 *)&pFVar24->_padding_ = 0;
                pFVar24->_padding_ = 0;
                *(undefined4 *)&pFVar24->_padding_ = 0x3f800000;
                pFVar24->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
                (pFVar24->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (pFVar24->Tabs).ArrayNum = 0;
                (pFVar24->Tabs).ArrayMax = 0;
                pFVar24->bHideTabWell = false;
                (pFVar24->ForegroundTabId).TabType.ComparisonIndex = 0;
                (pFVar24->ForegroundTabId).TabType.Number = 0;
                (pFVar24->ForegroundTabId).InstanceId = -1;
                (pFVar24->ForegroundTabId).Flags = SaveLayout;
                (pFVar24->ExtensionId).ComparisonIndex = 0;
                (pFVar24->ExtensionId).Number = 0;
                local_360 = 0;
                local_308[0].Object = pFVar24;
              }
              TSharedRef<FTabManager::FStack,1>::
              TSharedRef<FTabManager::FStack,1><FTabManager::FStack>(&local_2a8,local_308);
              (local_2a8.Object)->bHideTabWell = true;
              pTVar25 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                                  ((TSharedFromThis<FTabManager::FLayoutNode,1> *)
                                   &(local_2a8.Object)->_padding_,&local_218);
              pTVar6 = (pTVar25->SharedReferenceCount).ReferenceController;
              pFVar7 = pTVar25->Object;
              if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_218.SharedReferenceCount.ReferenceController);
              if ((((ulonglong)pFVar7[1]._padding_ <= (ulonglong)FVar40) &&
                  ((ulonglong)FVar40 <
                   (ulonglong)
                   ((longlong)*(int *)((longlong)&pFVar7[1]._padding_ + 4) * 0x20 +
                   pFVar7[1]._padding_))) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar20 = (int)pFVar7[1]._padding_;
              piVar1 = (int *)((longlong)&pFVar7[1]._padding_ + 4);
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x420,(ForAnyElementType *)(pFVar7 + 1),piVar1);
              }
              lVar32 = pFVar7[1]._padding_;
              *(int *)&pFVar7[1]._padding_ = iVar20 + 1;
              uVar13 = *(undefined8 *)((longlong)FVar40 + 8);
              lVar23 = (longlong)iVar20 * 0x20;
              *(undefined8 *)(lVar23 + lVar32) = *(undefined8 *)FVar40;
              ((undefined8 *)(lVar23 + lVar32))[1] = uVar13;
              *(uint *)(lVar23 + 0x10 + lVar32) = *(uint *)((longlong)FVar40 + 0x10);
              *(uchar *)(lVar23 + 0x14 + lVar32) = *(uchar *)((longlong)FVar40 + 0x14);
              *(uint *)(lVar23 + 0x18 + lVar32) = *(uint *)((longlong)FVar40 + 0x18);
              uVar4 = *(uchar *)((longlong)FVar40 + 0x1c);
              *(undefined1 *)(lVar23 + 0x1e + lVar32) = 0;
              *(uchar *)(lVar23 + 0x1c + lVar32) = uVar4;
              uVar4 = *(uchar *)((longlong)FVar40 + 0x1e);
              *(uchar *)(lVar23 + 0x1e + lVar32) = uVar4;
              if (uVar4 != '\0') {
                *(uchar *)(lVar23 + 0x1d + lVar32) = *(uchar *)((longlong)FVar40 + 0x1d);
              }
              pTVar25 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                                  ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar7->_padding_
                                   ,&local_2b8);
              pTVar8 = (pTVar25->SharedReferenceCount).ReferenceController;
              pFVar7 = pTVar25->Object;
              if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_2b8.SharedReferenceCount.ReferenceController);
              }
              else {
                LOCK();
                pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
                UNLOCK();
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_2b8.SharedReferenceCount.ReferenceController);
                LOCK();
                pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar24 = (FStack *)local_378->_padding_;
              pFVar39 = pFVar24;
              pFVar41 = pFVar38;
              if (pFVar24 != (FStack *)0x0) {
                aVar14 = *(atomic<int> *)&pFVar24->_padding_;
                do {
                  pFVar39 = pFVar38;
                  if (aVar14 == (atomic<int>)0x0) goto LAB_1427758f5;
                  LOCK();
                  aVar21 = *(atomic<int> *)&pFVar24->_padding_;
                  bVar15 = aVar14 == aVar21;
                  if (bVar15) {
                    *(atomic<int> *)&pFVar24->_padding_ = (atomic<int>)((int)aVar14 + 1);
                    aVar21 = aVar14;
                  }
                  UNLOCK();
                  aVar14 = aVar21;
                } while (!bVar15);
                pFVar39 = pFVar24;
                pFVar41 = (FStack *)local_378->_padding_;
              }
LAB_1427758f5:
              pFVar24 = (FStack *)&pFVar41->_padding_;
              if (pFVar41 == (FStack *)0x0) {
                pFVar24 = pFVar38;
              }
              local_328.Object = pFVar7;
              local_328.SharedReferenceCount.ReferenceController = pTVar8;
              if ((pFVar24 != (FStack *)&local_378->_padding_) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("SharedThis.Get() == this",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x67f,L""), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (pFVar41 == (FStack *)0x0) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x416,L"");
                if (bVar15) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x26c,L"");
                if (bVar15) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              lVar32 = local_388;
              plVar31 = *(longlong **)(local_388 + 0x28);
              for (plVar34 = plVar31; plVar34 != plVar31 + (longlong)*(int *)(local_388 + 0x30) * 2;
                  plVar34 = plVar34 + 2) {
                if ((FStack *)*plVar34 == pFVar41) {
                  iVar20 = (int)((longlong)plVar34 - (longlong)plVar31 >> 4);
                  if (iVar20 != -1) goto LAB_1427759dd;
                  goto LAB_1427759b7;
                }
              }
              iVar20 = -1;
LAB_1427759b7:
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InsertAtIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Docking\\TabManager.h"
                                  ,0x270,L"");
              if (bVar15) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
LAB_1427759dd:
              TArray<TSharedRef<FTabManager::FLayoutNode,1>,TSizedDefaultAllocator<32>_>::Insert
                        ((TArray<TSharedRef<FTabManager::FLayoutNode,1>,TSizedDefaultAllocator<32>_>
                          *)(lVar32 + 0x28),&local_328,iVar20);
              pTVar25 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                                  ((TSharedFromThis<FTabManager::FLayoutNode,1> *)(lVar32 + 8),
                                   &local_208);
              pTVar9 = (pTVar25->SharedReferenceCount).ReferenceController;
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_208.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar39);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_328.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar9);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar6);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2a8.SharedReferenceCount.ReferenceController);
LAB_142775a48:
              uVar27 = (ulonglong)(uint)local_1f8.ArrayNum;
              FVar40 = (ForElementType<FTabManager::FTab>)((longlong)FVar40 + 0x20);
              uVar26 = (ulonglong)local_398;
            }
          }
        }
        pFVar24 = local_378;
      } while ((int)uVar43 < (local_378->Tabs).ArrayNum);
    }
    FLayoutExtender::FindStackExtensions<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              (local_380,pFVar24->ExtensionId,After,&local_1f8);
    iVar19 = local_1f8.ArrayNum;
    uVar27 = (ulonglong)local_1f8.ArrayNum;
    iVar20 = (pFVar24->Tabs).ArrayNum;
    FVar40 = (ForElementType<FTabManager::FTab>)&local_1f8;
    if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<FTabManager::FTab>)0x0) {
      FVar40 = local_1f8.AllocatorInstance.SecondaryData;
    }
    FVar44 = (ForElementType<FTabManager::FTab>)(uVar27 * 0x20 + (longlong)FVar40);
    while( true ) {
      if ((uint)uVar27 != iVar19) {
        local_39e[0] = 0;
        `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_39e);
      }
      if (FVar40 == FVar44) break;
      local_298.TabType.ComparisonIndex.Value = *(uint *)FVar40;
      uVar43 = *(uint *)((longlong)FVar40 + 4);
      uVar42 = *(uint *)((longlong)FVar40 + 8);
      puVar33 = (uchar *)((longlong)FVar40 + 0xc);
      local_298.Flags = puVar33[0];
      local_298._13_1_ = puVar33[1];
      local_298._14_1_ = puVar33[2];
      local_298._15_1_ = puVar33[3];
      local_298.TabType.Number = uVar43;
      local_298.InstanceId = uVar42;
      uVar16 = ::GetTypeHash(local_298.TabType.ComparisonIndex);
      iVar17 = TSet<FTabId,DefaultKeyFuncs<FTabId,0>,FDefaultSetAllocator>::FindIndexByHash<FTabId>
                         (&local_168,uVar43 + uVar16 ^ uVar42,&local_298);
      if (iVar17 == -1) {
        FVar5 = (ForElementType<FTabManager::FTab>)(pFVar24->Tabs).AllocatorInstance.Data;
        if ((((ulonglong)FVar5 <= (ulonglong)FVar40) &&
            ((ulonglong)FVar40 <
             (ulonglong)((longlong)(pFVar24->Tabs).ArrayMax * 0x20 + (longlong)FVar5))) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TArray<FTabManager::FTab,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
                  (&pFVar24->Tabs,iVar20);
        FTab::FTab((FTab *)((pFVar24->Tabs).AllocatorInstance.Data + (longlong)iVar20 * 0x20),
                   (FTab *)FVar40);
        pFVar24 = local_378;
        iVar20 = iVar20 + 1;
      }
      uVar27 = (ulonglong)(uint)local_1f8.ArrayNum;
      FVar40 = (ForElementType<FTabManager::FTab>)((longlong)FVar40 + 0x20);
    }
    uVar26 = local_170 & 0xffffffff;
    plVar31 = local_350 + 1;
    uVar27 = (ulonglong)local_370;
    param_1 = local_380;
  } while( true );
}

// ToJson @ 14278cdb0

TSharedRef<FJsonObject,1> * __thiscall
FTabManager::FLayout::ToJson(FLayout *this,TSharedRef<FJsonObject,1> *__return_storage_ptr__)

{
  FArea *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  int iVar8;
  FJsonObject *pFVar9;
  FString *pFVar10;
  TSharedRef<FJsonObject,1> *pTVar11;
  FJsonValueObject *this_00;
  FArea *pFVar12;
  FArea *pFVar13;
  FJsonObject *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  TRawPtrProxy<FJsonObject> local_res10;
  TRawPtrProxy<FJsonValueObject> local_res18;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_f8;
  TSharedPtr<FJsonValue,1> local_e8;
  TSharedRef<FTabManager::FLayoutNode,1> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TSharedPtr<FJsonObject,1> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TSharedRef<FJsonObject,1> local_48;
  
  pFVar14 = (FJsonObject *)0x0;
  pFVar9 = ::operator_new(0x50);
  local_res10.Object = pFVar14;
  if (pFVar9 != (FJsonObject *)0x0) {
    *(undefined8 *)&(pFVar9->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar9->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar9->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar9->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar9->Values = 0;
    *(undefined8 *)&(pFVar9->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar9->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar9->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar9->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar9->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar9->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar9->Values).field_0x40 = 0;
    local_res10.Object = pFVar9;
  }
  TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
            (__return_storage_ptr__,&local_res10);
  pFVar9 = __return_storage_ptr__->Object;
  ::FString::FString(&local_c8,L"Type");
  pFVar10 = ::FString::FString(&local_68,L"Layout");
  FJsonObject::SetStringField(pFVar9,&local_c8,pFVar10);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar9 = __return_storage_ptr__->Object;
  pFVar10 = ::FName::ToString(&this->LayoutName,&local_58);
  ::FString::FString(&local_b8,L"Name");
  FJsonObject::SetStringField(pFVar9,&local_b8,pFVar10);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar9 = __return_storage_ptr__->Object;
  ::FString::FString(&local_a8,L"PrimaryAreaIndex");
  FJsonObject::SetNumberField(pFVar9,&local_a8,__real_bff0000000000000);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  uVar15 = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  uVar17 = uVar15;
  if (0 < (this->Areas).ArrayNum) {
    do {
      pFVar12 = (FArea *)0x0;
      uVar16 = (uint)uVar17;
      uVar6 = 0;
      if ((int)uVar16 < (this->Areas).ArrayNum) {
        uVar6 = ~uVar16 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
        return pTVar11;
      }
      pFVar1 = (FArea *)(this->PrimaryArea).WeakReferenceCount.ReferenceController;
      pFVar2 = (this->Areas).AllocatorInstance.Data;
      if (pFVar1 != (FArea *)0x0) {
        aVar4 = *(atomic<int> *)&pFVar1->_padding_;
        do {
          pFVar13 = pFVar12;
          if (aVar4 == (atomic<int>)0x0) goto LAB_14278cfc5;
          LOCK();
          aVar7 = *(atomic<int> *)&pFVar1->_padding_;
          bVar5 = aVar4 == aVar7;
          if (bVar5) {
            *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar5);
        pFVar12 = (this->PrimaryArea).Object;
      }
      pFVar13 = pFVar1;
      if ((pFVar12 == (FArea *)0x0) || (pFVar12 != *(FArea **)(pFVar2 + uVar15))) {
LAB_14278cfc5:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar13);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar1);
        pFVar9 = __return_storage_ptr__->Object;
        ::FString::FString(&local_98,L"PrimaryAreaIndex");
        FJsonObject::SetNumberField(pFVar9,&local_98,(double)(int)uVar16);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      this_00 = ::operator_new(0x20);
      if (this_00 == (FJsonValueObject *)0x0) {
        local_res18.Object = (FJsonValueObject *)0x0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar16 < (this->Areas).ArrayNum) {
          uVar6 = ~uVar16 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
          return pTVar11;
        }
        pFVar2 = (this->Areas).AllocatorInstance.Data;
        local_d8.Object = *(FLayoutNode **)(pFVar2 + uVar15);
        local_d8.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar2 + uVar15 + 8);
        if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14 = (FJsonObject *)&DAT_00000003;
        pTVar11 = PersistToString_Helper(&local_48,&local_d8);
        local_88.Object = pTVar11->Object;
        local_88.SharedReferenceCount.ReferenceController =
             (pTVar11->SharedReferenceCount).ReferenceController;
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_res18.Object = FJsonValueObject::FJsonValueObject(this_00,&local_88);
      }
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_e8,&local_res18);
      if (((local_f8.AllocatorInstance.Data <= &local_e8) &&
          (&local_e8 <
           (TSharedPtr<FJsonValue,1> *)
           (local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar11 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
        return pTVar11;
      }
      iVar8 = local_f8.ArrayNum;
      if (local_f8.ArrayNum == local_f8.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
      }
      local_f8.ArrayNum = iVar8 + 1;
      *(FJsonValue **)&local_f8.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 =
           local_e8.Object;
      *(TReferenceControllerBase<1> **)
       (local_f8.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) =
           local_e8.SharedReferenceCount.ReferenceController;
      local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_e8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((ulonglong)pFVar14 & 2) != 0) {
        pFVar14 = (FJsonObject *)(ulonglong)((uint)pFVar14 & 0xfffffffd);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      if (((ulonglong)pFVar14 & 1) != 0) {
        pFVar14 = (FJsonObject *)(ulonglong)((uint)pFVar14 & 0xfffffffe);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
      }
      uVar15 = uVar15 + 0x10;
      uVar17 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < (this->Areas).ArrayNum);
  }
  pFVar9 = __return_storage_ptr__->Object;
  ::FString::FString(&local_78,L"Areas");
  FJsonObject::SetArrayField(pFVar9,&local_78,&local_f8);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_f8.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14278d8e0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FTabManager::FLayout::ToString(FLayout *this,FString *__return_storage_ptr__)

{
  FSharedReferencer<1> FVar1;
  bool bVar2;
  FName local_res10;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_58;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_48;
  TSharedRef<FJsonObject,1> local_38;
  TSharedPtr<FJsonObject,1> local_28 [2];
  
  ToJson(this,&local_38);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
            (&local_48,__return_storage_ptr__,0);
  FVar1.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  local_28[0].Object = local_38.Object;
  local_28[0].SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_58,local_28);
  bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_58,local_48.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  if ((!bVar2) && (1 < (byte)LogSlate._0_1_)) {
    local_res10 = this->LayoutName;
    ::FName::ToString(&local_res10,(FString *)local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if (local_28[0].Object != (FJsonObject *)0x0) {
      FMemory::Free(local_28[0].Object);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 150493200

bool __thiscall
`FTabManager::FLayout::NewFromString_Helper'::__l43::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6813193255430127240>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6813193255430127240>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150493240

bool __thiscall
`FTabManager::FLayout::PersistToString_Helper'::__l57::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6813193255430127044>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6813193255430127044>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504932c0

bool __thiscall
``FTabManager::FLayout::NewFromString_Helper'::__l2::local::OrientationFromString'::__l11::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6813193255430127379>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6813193255430127379>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150493300

bool __thiscall
``FTabManager::FLayout::NewFromString_Helper'::__l2::local::PlacementFromString'::__l15::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6813193255430127399>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6813193255430127399>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

