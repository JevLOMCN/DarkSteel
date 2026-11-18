// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FDataTableImporterJSON @ 147abaeb0

FDataTableImporterJSON * __thiscall
FDataTableImporterJSON::FDataTableImporterJSON
          (FDataTableImporterJSON *this,UDataTable *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  this->DataTable = param_1;
  this->JSONData = param_2;
  this->ImportProblems = param_3;
  return this;
}

// ~FDataTableImporterJSON @ 147abeda0

void __thiscall FDataTableImporterJSON::~FDataTableImporterJSON(FDataTableImporterJSON *this)

{
  return;
}

// AddRow @ 147ac5220

/* WARNING: Removing unreachable block (ram,0x000147ac575d) */
/* WARNING: Removing unreachable block (ram,0x000147ac5402) */

bool __thiscall
FDataTableImporterJSON::AddRow(FDataTableImporterJSON *this,bool param_1,FName *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  FJsonObject *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TSharedPtr<FJsonValue,1> local_98;
  StackState local_88;
  TSharedRef<FJsonObject,1> local_50;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_40;
  
  if ((this->JSONData->Data).ArrayNum < 2) {
    pTVar1 = this->ImportProblems;
    ::FString::FString(&local_d8,L"Input data is empty.");
    pFVar11 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar11 + (longlong)pTVar1->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = pTVar1->ArrayNum;
    if (iVar8 == pTVar1->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar8 + 1;
    pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_d8.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_d8.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_d8.Data.ArrayMax;
    return false;
  }
  if ((this->DataTable->RowStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
    pTVar1 = this->ImportProblems;
    ::FString::FString(&local_c8,L"No RowStruct specified.");
    pFVar11 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 < pFVar11 + (longlong)pTVar1->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = pTVar1->ArrayNum;
    if (iVar8 == pTVar1->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar8 + 1;
    pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(FScriptContainerElement **)pFVar11 = local_c8.Data.AllocatorInstance.Data;
    *(int *)(pFVar11 + 8) = local_c8.Data.ArrayNum;
    *(int *)(pFVar11 + 0xc) = local_c8.Data.ArrayMax;
    return false;
  }
  local_98.Object = (FJsonValue *)0x0;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = TJsonStringReader<wchar_t>::Create(&local_40,this->JSONData);
  pTVar12 = (pTVar9->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar9->Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  bVar7 = false;
  local_88.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Identifier.Data.ArrayNum = 0;
  local_88.Identifier.Data.ArrayMax = 0;
  local_88.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Object.Object = (FJsonObject *)0x0;
  local_88.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_88.Array.ArrayNum = 0;
  local_88.Array.ArrayMax = 0;
  bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_88,None);
  if (bVar5) {
    bVar5 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_88,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data,
               local_88.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_88.Array.AllocatorInstance.Data);
    }
    if (local_88.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar5) && (local_98.Object != (FJsonValue *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      if ((local_98.Object == (FJsonValue *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      plVar10 = (longlong *)(**(code **)(local_98.Object)->_padding_)();
      pTVar12 = (TReferenceControllerBase<1> *)plVar10[1];
      pFVar3 = (FJsonObject *)*plVar10;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 == (FJsonObject *)0x0) {
        pTVar1 = this->ImportProblems;
        ::FString::FString(&local_b8,L"Row is not a valid JSON object.");
        pFVar11 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar11 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < pFVar11 + (longlong)pTVar1->ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar8 = pTVar1->ArrayNum;
        if (iVar8 == pTVar1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
        }
        pTVar1->ArrayNum = iVar8 + 1;
        pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar11 = 0;
        *(FScriptContainerElement **)pFVar11 = local_b8.Data.AllocatorInstance.Data;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar11 + 8) = local_b8.Data.ArrayNum;
        *(int *)(pFVar11 + 0xc) = local_b8.Data.ArrayMax;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
      }
      else {
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_50.Object = pFVar3;
        local_50.SharedReferenceCount.ReferenceController = pTVar12;
        bVar7 = ReadRow(this,&local_50,0,param_1,param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
      }
      goto LAB_147ac5762;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data,
               local_88.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_88.Array.AllocatorInstance.Data);
    }
    if (local_88.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Identifier.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = this->ImportProblems;
  ::FString::PrintfImpl(&local_a8,L"Failed to parse the JSON data. Error: %s");
  pFVar11 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar11 <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 < pFVar11 + (longlong)pTVar1->ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = pTVar1->ArrayNum;
  if (iVar8 == pTVar1->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar8 + 1;
  pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar11 = 0;
  *(FScriptContainerElement **)pFVar11 = local_a8.Data.AllocatorInstance.Data;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar11 + 8) = local_a8.Data.ArrayNum;
  *(int *)(pFVar11 + 0xc) = local_a8.Data.ArrayMax;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
LAB_147ac5762:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return bVar7;
}

// ReadContainerEntry @ 147b01c20

/* WARNING: Removing unreachable block (ram,0x000147b02951) */
/* WARNING: Removing unreachable block (ram,0x000147b02739) */
/* WARNING: Removing unreachable block (ram,0x000147b0244d) */
/* WARNING: Removing unreachable block (ram,0x000147b01eb2) */
/* WARNING: Removing unreachable block (ram,0x000147b025b1) */
/* WARNING: Removing unreachable block (ram,0x000147b022cd) */
/* WARNING: Removing unreachable block (ram,0x000147b02b7f) */
/* WARNING: Removing unreachable block (ram,0x000147b02cf6) */
/* WARNING: Removing unreachable block (ram,0x000147b02f29) */
/* WARNING: Removing unreachable block (ram,0x000147b0202e) */

bool __thiscall
FDataTableImporterJSON::ReadContainerEntry
          (FDataTableImporterJSON *this,TSharedRef<FJsonValue,1> *param_1,FName param_2,
          FString *param_3,int param_4,FProperty *param_5,void *param_6)

{
  uint uVar1;
  FJsonValue *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  FName FVar7;
  FProperty *this_00;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  TSharedRef<FJsonObject,1> *pTVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  undefined8 local_res10;
  FName local_res18 [2];
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  ForAnyElementType local_208;
  int local_200;
  int local_1fc;
  ForAnyElementType local_1f8;
  int local_1f0;
  int local_1ec;
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  FString local_1d8;
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  undefined8 local_188;
  undefined8 local_180;
  TSharedPtr<FJsonObject,1> *local_178;
  undefined1 local_170 [16];
  FString local_160;
  undefined1 local_150 [16];
  FString local_140;
  undefined1 local_130 [16];
  FString local_120;
  undefined1 local_110 [16];
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TSharedRef<FJsonObject,1> local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  this_00 = param_5;
  pFVar2 = param_1->Object;
  local_res18[0] = param_2;
  UE::DataTableJSON::JSONTypeToString(pFVar2->Type);
  if (this_00 == (FProperty *)0x0) {
LAB_147b02bbd:
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    cVar8 = (**(code **)(pFVar2->_padding_ + 0x58))(pFVar2,&local_1a8);
    if (cVar8 == '\0') {
      pTVar3 = this->ImportProblems;
      ::FName::ToString(local_res18,&local_60);
      ::FString::PrintfImpl
                (&local_228,
                 L"Entry %d on property \'%s\' on row \'%s\' is the incorrect type. Expected String, got %s."
                );
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_228) &&
          ((FScriptContainerElement *)&local_228 < pFVar4 + (longlong)pTVar3->ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iVar12 = pTVar3->ArrayNum;
      if (iVar12 == pTVar3->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
      }
      lVar15 = (longlong)iVar12;
      pTVar3->ArrayNum = iVar12 + 1;
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) = local_228.Data.AllocatorInstance.Data;
      *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_228.Data.ArrayNum;
      *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_228.Data.ArrayMax;
      local_228.Data.ArrayNum = 0;
      local_228.Data.ArrayMax = 0;
      local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      ::FString::FString(&local_100,L"");
      FOutputDevice::FOutputDevice((FOutputDevice *)local_110);
      local_110[9] = false;
      local_110._0_8_ = &___7FStringOutputDevice__6B_;
      if ((this_00 != (FProperty *)0x0) &&
         (bVar9 = DataTableUtils::IsSupportedTableProperty(this_00), bVar9)) {
        DataTableUtilsImpl::AssignStringToPropertyDirect
                  (&local_1a8,this_00,param_6,0x40,(FStringOutputDevice *)local_110);
      }
      FVar14.Data = local_100.Data.AllocatorInstance.Data;
      local_208.Data = (FScriptContainerElement *)0x0;
      local_200 = local_100.Data.ArrayNum;
      if (local_100.Data.ArrayNum == 0) {
        local_1fc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_100.Data.ArrayNum,0,&local_208,local_100.Data.ArrayNum,&local_1fc);
        memcpy(local_208.Data,FVar14.Data,(longlong)local_100.Data.ArrayNum * 2);
      }
      FOutputDevice::~FOutputDevice((FOutputDevice *)local_110);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      iVar12 = local_200 + -1;
      if (local_200 == 0) {
        iVar12 = 0;
      }
      if (iVar12 < 1) {
        FVar14.Data = local_1a8.Data.AllocatorInstance.Data;
        if (local_208.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data);
          FVar14.Data = local_1a8.Data.AllocatorInstance.Data;
        }
        goto LAB_147b02f71;
      }
      pTVar3 = this->ImportProblems;
      ::FName::ToString(local_res18,&local_50);
      ::FString::PrintfImpl
                (&local_218,
                 L"Problem assigning string \'%s\' to entry %d on property \'%s\' on row \'%s\' : %s"
                );
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_218) &&
          ((FScriptContainerElement *)&local_218 < pFVar4 + (longlong)pTVar3->ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iVar12 = pTVar3->ArrayNum;
      if (iVar12 == pTVar3->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
      }
      lVar15 = (longlong)iVar12;
      pTVar3->ArrayNum = iVar12 + 1;
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) = local_218.Data.AllocatorInstance.Data;
      *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_218.Data.ArrayNum;
      *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_218.Data.ArrayMax;
      local_218.Data.ArrayNum = 0;
      local_218.Data.ArrayMax = 0;
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.Data.AllocatorInstance.Data = local_208.Data;
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
        local_60.Data.AllocatorInstance.Data = local_208.Data;
      }
    }
    local_a0.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
      local_a0.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
    }
LAB_147b02f51:
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
LAB_147b02f5b:
    bVar9 = false;
  }
  else {
    if ((*(ulonglong *)(this_00->_padding_ + 0x18) & 0x1000000000000) == 0) {
      if (this_00 == (FProperty *)0x0) goto LAB_147b02bbd;
      uVar1 = *(uint *)(this_00->_padding_ + 0x18);
      if ((uVar1 >> 0x18 & 1) != 0) {
        local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.Data.ArrayNum = 0;
        local_1d8.Data.ArrayMax = 0;
        lVar15 = (**(code **)(this_00->_padding_ + 0x1e0))(this_00);
        if ((lVar15 == 0) ||
           (cVar8 = (**(code **)(param_1->Object->_padding_ + 0x58))(param_1->Object,&local_1d8),
           cVar8 == '\0')) {
          cVar8 = (**(code **)(this_00->_padding_ + 0x1d8))(this_00);
          pFVar2 = param_1->Object;
          if (cVar8 == '\0') {
            local_180 = 0;
            cVar8 = (**(code **)(pFVar2->_padding_ + 0x50))(pFVar2,&local_180);
            if (cVar8 == '\0') {
              pTVar3 = this->ImportProblems;
              ::FName::ToString(local_res18,&local_b0);
              ::FString::PrintfImpl
                        (&local_268,
                         L"Entry %d on property \'%s\' on row \'%s\' is the incorrect type. Expected Double, got %s."
                        );
              pFVar4 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_268) &&
                  ((FScriptContainerElement *)&local_268 <
                   pFVar4 + (longlong)pTVar3->ArrayMax * 0x10)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
              iVar12 = pTVar3->ArrayNum;
              if (iVar12 == pTVar3->ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
              }
              lVar15 = (longlong)iVar12;
              pTVar3->ArrayNum = iVar12 + 1;
              pFVar4 = (pTVar3->AllocatorInstance).Data;
              *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
              *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) =
                   local_268.Data.AllocatorInstance.Data;
              *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_268.Data.ArrayNum;
              *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_268.Data.ArrayMax;
              local_268.Data.ArrayNum = 0;
              local_268.Data.ArrayMax = 0;
              local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_c0.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
              goto LAB_147b025bd;
            }
            (**(code **)(this_00->_padding_ + 0x1f8))(this_00,param_6,local_180);
            FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
          }
          else {
            local_188 = 0;
            cVar8 = (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,&local_188);
            if (cVar8 == '\0') {
              pTVar3 = this->ImportProblems;
              ::FName::ToString(local_res18,&local_c0);
              ::FString::PrintfImpl
                        (&local_278,
                         L"Entry %d on property \'%s\' on row \'%s\' is the incorrect type. Expected Integer, got %s."
                        );
              pFVar4 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_278) &&
                  ((FScriptContainerElement *)&local_278 <
                   pFVar4 + (longlong)pTVar3->ArrayMax * 0x10)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
              iVar12 = pTVar3->ArrayNum;
              if (iVar12 == pTVar3->ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
              }
              lVar15 = (longlong)iVar12;
              pTVar3->ArrayNum = iVar12 + 1;
              pFVar4 = (pTVar3->AllocatorInstance).Data;
              *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
              *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) =
                   local_278.Data.AllocatorInstance.Data;
              *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_278.Data.ArrayNum;
              *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_278.Data.ArrayMax;
              local_278.Data.ArrayNum = 0;
              local_278.Data.ArrayMax = 0;
              local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_147b025bd:
              local_a0.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                local_a0.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
              }
              goto LAB_147b02f51;
            }
            (**(code **)(this_00->_padding_ + 0x1e8))(this_00,param_6,local_188);
            FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
          }
        }
        else {
          ::FString::FString(&local_140,L"");
          FOutputDevice::FOutputDevice((FOutputDevice *)local_150);
          local_150[9] = false;
          local_150._0_8_ = &___7FStringOutputDevice__6B_;
          bVar9 = DataTableUtils::IsSupportedTableProperty(this_00);
          if (bVar9) {
            DataTableUtilsImpl::AssignStringToPropertyDirect
                      (&local_1d8,this_00,param_6,0x40,(FStringOutputDevice *)local_150);
          }
          FVar14.Data = local_140.Data.AllocatorInstance.Data;
          local_1e8.Data = (FScriptContainerElement *)0x0;
          local_1e0 = local_140.Data.ArrayNum;
          if (local_140.Data.ArrayNum == 0) {
            local_1dc = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_140.Data.ArrayNum,0,&local_1e8,local_140.Data.ArrayNum,&local_1dc);
            memcpy(local_1e8.Data,FVar14.Data,(longlong)local_140.Data.ArrayNum * 2);
          }
          FOutputDevice::~FOutputDevice((FOutputDevice *)local_150);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          if (1 < local_1e0) {
            pTVar3 = this->ImportProblems;
            ::FName::ToString(local_res18,&local_d0);
            ::FString::PrintfImpl
                      (&local_288,
                       L"Entry %d on property \'%s\' on row \'%s\' has invalid enum value: %s.");
            pFVar4 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_288) &&
                ((FScriptContainerElement *)&local_288 < pFVar4 + (longlong)pTVar3->ArrayMax * 0x10)
                ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            iVar12 = pTVar3->ArrayNum;
            if (iVar12 == pTVar3->ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
            }
            lVar15 = (longlong)iVar12;
            pTVar3->ArrayNum = iVar12 + 1;
            pFVar4 = (pTVar3->AllocatorInstance).Data;
            *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) =
                 local_288.Data.AllocatorInstance.Data;
            *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_288.Data.ArrayNum;
            *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_288.Data.ArrayMax;
            local_288.Data.ArrayNum = 0;
            local_288.Data.ArrayMax = 0;
            local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c0.Data.AllocatorInstance.Data = local_1e8.Data;
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              local_c0.Data.AllocatorInstance.Data = local_1e8.Data;
            }
            goto LAB_147b025bd;
          }
          FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
          if (local_1e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data);
            FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
          }
        }
        goto LAB_147b02f71;
      }
      if ((uVar1 >> 0x11 & 1) == 0) {
        if ((uVar1 >> 0x15 & 1) == 0) {
          if (this_00 != (FProperty *)0x0) {
            lVar15 = this_00->_padding_;
            if (((*(ulonglong *)(lVar15 + 0x18) & 0x800000000000) != 0) ||
               ((*(ulonglong *)(lVar15 + 0x18) & 0x400000000000) != 0)) goto LAB_147b02f5b;
            if ((*(uint *)(lVar15 + 0x18) >> 0x14 & 1) != 0) {
              bVar9 = false;
              local_178 = (TSharedPtr<FJsonObject,1> *)0x0;
              cVar8 = (**(code **)(pFVar2->_padding_ + 0x88))(pFVar2,&local_178);
              FVar7 = local_res18[0];
              if (cVar8 != '\0') {
                pUVar5 = (UScriptStruct *)this_00[1]._padding_;
                pTVar13 = TSharedPtr<FJsonObject,1>::ToSharedRef(local_178,&local_90);
                bVar9 = ReadStruct(this,pTVar13,pUVar5,FVar7,param_6);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_90.SharedReferenceCount.ReferenceController);
                return bVar9;
              }
              local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_198.Data.ArrayNum = 0;
              local_198.Data.ArrayMax = 0;
              cVar8 = (**(code **)(param_1->Object->_padding_ + 0x58))(param_1->Object,&local_198);
              if (cVar8 == '\0') {
                pTVar3 = this->ImportProblems;
                ::FName::ToString(local_res18,&local_80);
                ::FString::PrintfImpl
                          (&local_248,
                           L"Property \'%s\' on row \'%s\' is the incorrect type. Expected String, got %s."
                          );
                pFVar4 = (pTVar3->AllocatorInstance).Data;
                if (((pFVar4 <= (FScriptContainerElement *)&local_248) &&
                    ((FScriptContainerElement *)&local_248 <
                     pFVar4 + (longlong)pTVar3->ArrayMax * 0x10)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  uVar10 = (*pcVar6)();
                  return (bool)uVar10;
                }
                iVar12 = pTVar3->ArrayNum;
                if (iVar12 == pTVar3->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
                }
                lVar15 = (longlong)iVar12;
                pTVar3->ArrayNum = iVar12 + 1;
                pFVar4 = (pTVar3->AllocatorInstance).Data;
                *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
                *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) =
                     local_248.Data.AllocatorInstance.Data;
                *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_248.Data.ArrayNum;
                *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_248.Data.ArrayMax;
                local_248.Data.ArrayNum = 0;
                local_248.Data.ArrayMax = 0;
                local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                bVar9 = false;
              }
              else {
                ::FString::FString(&local_120,L"");
                FOutputDevice::FOutputDevice((FOutputDevice *)local_130);
                local_130[9] = false;
                local_130._0_8_ = &___7FStringOutputDevice__6B_;
                bVar11 = DataTableUtils::IsSupportedTableProperty(this_00);
                if (bVar11) {
                  DataTableUtilsImpl::AssignStringToPropertyDirect
                            (&local_198,this_00,param_6,0x40,(FStringOutputDevice *)local_130);
                }
                FVar14.Data = local_120.Data.AllocatorInstance.Data;
                local_1f8.Data = (FScriptContainerElement *)0x0;
                local_1f0 = local_120.Data.ArrayNum;
                if (local_120.Data.ArrayNum == 0) {
                  local_1ec = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_120.Data.ArrayNum,0,&local_1f8,local_120.Data.ArrayNum,
                             &local_1ec);
                  memcpy(local_1f8.Data,FVar14.Data,(longlong)local_120.Data.ArrayNum * 2);
                }
                FOutputDevice::~FOutputDevice((FOutputDevice *)local_130);
                if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_120.Data.AllocatorInstance.Data);
                }
                iVar12 = local_1f0 + -1;
                if (local_1f0 == 0) {
                  iVar12 = 0;
                }
                if (iVar12 < 1) {
                  bVar9 = true;
                  local_80.Data.AllocatorInstance.Data = local_1f8.Data;
                }
                else {
                  pTVar3 = this->ImportProblems;
                  ::FName::ToString(local_res18,&local_70);
                  ::FString::PrintfImpl
                            (&local_238,
                             L"Problem assigning string \'%s\' to entry %d on property \'%s\' on row \'%s\' : %s"
                            );
                  pFVar4 = (pTVar3->AllocatorInstance).Data;
                  if (((pFVar4 <= (FScriptContainerElement *)&local_238) &&
                      ((FScriptContainerElement *)&local_238 <
                       pFVar4 + (longlong)pTVar3->ArrayMax * 0x10)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    uVar10 = (*pcVar6)();
                    return (bool)uVar10;
                  }
                  iVar12 = pTVar3->ArrayNum;
                  if (iVar12 == pTVar3->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
                  }
                  lVar15 = (longlong)iVar12;
                  pTVar3->ArrayNum = iVar12 + 1;
                  pFVar4 = (pTVar3->AllocatorInstance).Data;
                  *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
                  *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) =
                       local_238.Data.AllocatorInstance.Data;
                  *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_238.Data.ArrayNum;
                  *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_238.Data.ArrayMax;
                  local_238.Data.ArrayNum = 0;
                  local_238.Data.ArrayMax = 0;
                  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_80.Data.AllocatorInstance.Data = local_1f8.Data;
                  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_70.Data.AllocatorInstance.Data);
                    local_80.Data.AllocatorInstance.Data = local_1f8.Data;
                  }
                }
              }
              if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
              if (local_198.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return bVar9;
              }
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
              return bVar9;
            }
          }
          goto LAB_147b02bbd;
        }
        goto LAB_147b02f5b;
      }
      param_5._0_1_ = false;
      cVar8 = (**(code **)(pFVar2->_padding_ + 0x68))(pFVar2,&param_5);
      if (cVar8 == '\0') {
        pTVar3 = this->ImportProblems;
        ::FName::ToString(local_res18,&local_a0);
        ::FString::PrintfImpl
                  (&local_258,
                   L"Entry %d on property \'%s\' on row \'%s\' is the incorrect type. Expected Boolean, got %s."
                  );
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_258) &&
            ((FScriptContainerElement *)&local_258 < pFVar4 + (longlong)pTVar3->ArrayMax * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        iVar12 = pTVar3->ArrayNum;
        if (iVar12 == pTVar3->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
        }
        lVar15 = (longlong)iVar12;
        pTVar3->ArrayNum = iVar12 + 1;
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) =
             local_258.Data.AllocatorInstance.Data;
        *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_258.Data.ArrayNum;
        *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_258.Data.ArrayMax;
        local_258.Data.ArrayNum = 0;
        local_258.Data.ArrayMax = 0;
        local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        goto LAB_147b02f51;
      }
      FBoolProperty::SetPropertyValue((FBoolProperty *)this_00,param_6,(bool)param_5._0_1_);
    }
    else {
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.Data.ArrayNum = 0;
      local_1b8.Data.ArrayMax = 0;
      cVar8 = (**(code **)(pFVar2->_padding_ + 0x58))(pFVar2,&local_1b8);
      if (cVar8 == '\0') {
        local_res10 = 0;
        cVar8 = (**(code **)(param_1->Object->_padding_ + 0x28))(param_1->Object,&local_res10);
        if (cVar8 == '\0') {
          pTVar3 = this->ImportProblems;
          ::FName::ToString(local_res18,&local_e0);
          ::FString::PrintfImpl
                    (&local_298,
                     L"Entry %d on property \'%s\' on row \'%s\' is the incorrect type. Expected Integer, got %s."
                    );
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_298) &&
              ((FScriptContainerElement *)&local_298 < pFVar4 + (longlong)pTVar3->ArrayMax * 0x10))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          iVar12 = pTVar3->ArrayNum;
          if (iVar12 == pTVar3->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
          }
          lVar15 = (longlong)iVar12;
          pTVar3->ArrayNum = iVar12 + 1;
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) =
               local_298.Data.AllocatorInstance.Data;
          *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_298.Data.ArrayNum;
          *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_298.Data.ArrayMax;
          local_298.Data.ArrayNum = 0;
          local_298.Data.ArrayMax = 0;
          local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          goto LAB_147b0203a;
        }
        (**(code **)(*(longlong *)this_00[1]._padding_ + 0x1e8))
                  ((longlong *)this_00[1]._padding_,param_6,local_res10);
        FVar14.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      else {
        ::FString::FString(&local_160,L"");
        FOutputDevice::FOutputDevice((FOutputDevice *)local_170);
        local_170[9] = false;
        local_170._0_8_ = &___7FStringOutputDevice__6B_;
        bVar9 = DataTableUtils::IsSupportedTableProperty(this_00);
        if (bVar9) {
          DataTableUtilsImpl::AssignStringToPropertyDirect
                    (&local_1b8,this_00,param_6,0x40,(FStringOutputDevice *)local_170);
        }
        FVar14.Data = local_160.Data.AllocatorInstance.Data;
        local_1c8.Data = (FScriptContainerElement *)0x0;
        local_1c0 = local_160.Data.ArrayNum;
        if (local_160.Data.ArrayNum == 0) {
          local_1bc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_160.Data.ArrayNum,0,&local_1c8,local_160.Data.ArrayNum,&local_1bc);
          memcpy(local_1c8.Data,FVar14.Data,(longlong)local_160.Data.ArrayNum * 2);
        }
        FOutputDevice::~FOutputDevice((FOutputDevice *)local_170);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        if (1 < local_1c0) {
          pTVar3 = this->ImportProblems;
          ::FName::ToString(local_res18,&local_f0);
          ::FString::PrintfImpl
                    (&local_2a8,
                     L"Entry %d on property \'%s\' on row \'%s\' has invalid enum value: %s.");
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_2a8) &&
              ((FScriptContainerElement *)&local_2a8 < pFVar4 + (longlong)pTVar3->ArrayMax * 0x10))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          iVar12 = pTVar3->ArrayNum;
          if (iVar12 == pTVar3->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
          }
          lVar15 = (longlong)iVar12;
          pTVar3->ArrayNum = iVar12 + 1;
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          *(undefined8 *)(pFVar4 + lVar15 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar4 + lVar15 * 0x10) =
               local_2a8.Data.AllocatorInstance.Data;
          *(int *)(pFVar4 + lVar15 * 0x10 + 8) = local_2a8.Data.ArrayNum;
          *(int *)(pFVar4 + lVar15 * 0x10 + 0xc) = local_2a8.Data.ArrayMax;
          local_2a8.Data.ArrayNum = 0;
          local_2a8.Data.ArrayMax = 0;
          local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e0.Data.AllocatorInstance.Data = local_1c8.Data;
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            local_e0.Data.AllocatorInstance.Data = local_1c8.Data;
          }
LAB_147b0203a:
          local_a0.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            local_a0.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
          }
          goto LAB_147b02f51;
        }
        FVar14.Data = local_1b8.Data.AllocatorInstance.Data;
        if (local_1c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data);
          FVar14.Data = local_1b8.Data.AllocatorInstance.Data;
        }
      }
LAB_147b02f71:
      if (FVar14.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar14.Data);
      }
    }
    bVar9 = true;
  }
  return bVar9;
}

// ReadRow @ 147b03180

/* WARNING: Removing unreachable block (ram,0x000147b03a52) */
/* WARNING: Removing unreachable block (ram,0x000147b03735) */

bool __thiscall
FDataTableImporterJSON::ReadRow
          (FDataTableImporterJSON *this,TSharedRef<FJsonObject,1> *param_1,int param_2,bool param_3,
          FName *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  FJsonObject *pFVar6;
  undefined1 *puVar7;
  TObjectPtr<UScriptStruct>_u_0 TVar8;
  UScriptStruct *pUVar9;
  code *pcVar10;
  FProperty *pFVar11;
  int iVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  char cVar16;
  int iVar17;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this_00;
  uchar **ppuVar18;
  void *pvVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  uint uVar24;
  FProperty *pFVar25;
  undefined1 *puVar26;
  uint *puVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  undefined1 local_res8 [8];
  TSharedRef<FJsonObject,1> *local_res10;
  undefined1 local_1d8 [8];
  ForAnyElementType local_1d0;
  int local_1c8;
  int iStack_1c4;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  TArray<FString,TSizedDefaultAllocator<32>_> local_178;
  FName local_168;
  TObjectPtr<UScriptStruct>_u_0 local_160;
  FProperty *local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined1 local_14a;
  TObjectPtr<UScriptStruct>_u_0 local_148;
  FProperty *local_140;
  undefined4 local_138;
  undefined2 local_134;
  undefined1 local_132;
  undefined1 local_130 [16];
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  FJsonObject *local_f0;
  FName local_e8;
  FString local_e0;
  FJsonObject *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_1d0.Data = (FScriptContainerElement *)0x0;
  iVar21 = 0;
  iVar17 = (this->DataTable->ImportKeyField).Data.ArrayNum;
  pFVar20 = (this->DataTable->ImportKeyField).Data.AllocatorInstance.Data;
  local_res10 = param_1;
  local_1c8 = iVar17;
  if (iVar17 == 0) {
    iStack_1c4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar17,0,&local_1d0,iVar17,&iStack_1c4);
    memcpy(local_1d0.Data,pFVar20,(longlong)iVar17 * 2);
  }
  iVar12 = iStack_1c4;
  iVar17 = local_1c8;
  FVar22.Data = local_1d0.Data;
  if (local_1c8 < 2) {
    ::FString::FString(&local_1c0,L"Name");
    if (local_1d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
  }
  else {
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = 0;
    iStack_1c4 = 0;
    local_1c0.Data.AllocatorInstance.Data = FVar22.Data;
    local_1c0.Data.ArrayNum = iVar17;
    local_1c0.Data.ArrayMax = iVar12;
  }
  local_98 = local_1c0.Data.AllocatorInstance.Data;
  if (local_1c0.Data.ArrayNum != 0) {
    iVar21 = local_1c0.Data.ArrayNum + -1;
  }
  local_88._12_4_ = uStack_8c;
  local_88.Size = iVar21;
  local_88.DataPtr = (wchar_t *)local_1c0.Data.AllocatorInstance.Data;
  iStack_90 = iVar21;
  FJsonObject::GetStringField(param_1->Object,&local_78,&local_88);
  DataTableUtils::MakeValidName((FString *)local_1d8);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((FName)local_1d8 == (FName)0x0) {
    pTVar4 = this->ImportProblems;
    ::FString::PrintfImpl(&local_1b0,L"Row \'%d\' missing key field \'%s\'.");
    pFVar20 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar20 <= (FScriptContainerElement *)&local_1b0) &&
        ((FScriptContainerElement *)&local_1b0 < pFVar20 + (longlong)pTVar4->ArrayMax * 0x10)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar15 = (*pcVar10)();
      return (bool)uVar15;
    }
    iVar17 = pTVar4->ArrayNum;
    if (iVar17 == pTVar4->ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
      pTVar4->ArrayNum = iVar17 + 1;
    }
    else {
      pTVar4->ArrayNum = iVar17 + 1;
    }
    pFVar20 = (pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
    *(undefined8 *)pFVar20 = 0;
    *(FScriptContainerElement **)pFVar20 = local_1b0.Data.AllocatorInstance.Data;
    local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar20 + 8) = local_1b0.Data.ArrayNum;
    *(int *)(pFVar20 + 0xc) = local_1b0.Data.ArrayMax;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.Data.ArrayNum = 0;
    local_1b0.Data.ArrayMax = 0;
LAB_147b03741:
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar14 = false;
    goto LAB_147b03b43;
  }
  if (param_4 != (FName *)0x0) {
    param_4->ComparisonIndex = (FNameEntryId)local_1d8._0_4_;
    param_4->Number = local_1d8._4_4_;
  }
  this_00 = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
             *)(**(code **)(this->DataTable->_padding_ + 0x2c8))();
  ppuVar18 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
             ::Find(this_00,(FName)local_1d8);
  if (ppuVar18 != (uchar **)0x0) {
    lVar5 = this->DataTable->_padding_;
    if (param_3) {
      (**(code **)(lVar5 + 0x2c0))(this->DataTable,local_1d8);
    }
    else {
      cVar16 = (**(code **)(lVar5 + 0x2d8))();
      if (cVar16 == '\0') {
        pTVar4 = this->ImportProblems;
        ::FName::ToString((FName *)local_1d8,&local_68);
        ::FString::PrintfImpl(&local_1a0,L"Duplicate row name \'%s\'.");
        pFVar20 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar20 <= (FScriptContainerElement *)&local_1a0) &&
            ((FScriptContainerElement *)&local_1a0 < pFVar20 + (longlong)pTVar4->ArrayMax * 0x10))
           && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        iVar17 = pTVar4->ArrayNum;
        if (iVar17 == pTVar4->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
          pTVar4->ArrayNum = iVar17 + 1;
        }
        else {
          pTVar4->ArrayNum = iVar17 + 1;
        }
        pFVar20 = (pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
        *(undefined8 *)pFVar20 = 0;
        *(FScriptContainerElement **)pFVar20 = local_1a0.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 8) = local_1a0.Data.ArrayNum;
        *(int *)(pFVar20 + 0xc) = local_1a0.Data.ArrayMax;
        local_1a0.Data.ArrayNum = 0;
        local_1a0.Data.ArrayMax = 0;
        local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        goto LAB_147b03741;
      }
    }
  }
  if (this->DataTable->bIgnoreExtraFields == '\0') {
    pFVar6 = param_1->Object;
    iStack_120 = 0;
    pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar6->Values).field_0x10;
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    uStack_11c = 1;
    iVar17 = *(int *)&(pFVar6->Values).field_0x28;
    iStack_10c = iStack_120;
    local_108 = iStack_120;
    if (iVar17 != 0) {
      puVar27 = *(uint **)&(pFVar6->Values).field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)pTVar28;
      }
      uVar24 = *puVar27;
      iStack_120 = 0;
      local_108 = 0;
      while (uVar24 == 0) {
        iStack_120 = iStack_120 + 1;
        local_108 = local_108 + 0x20;
        iStack_10c = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120)
        goto LAB_147b034bc;
        uVar24 = puVar27[iStack_120];
      }
      uStack_11c = ~(uVar24 - 1) & uVar24;
      uVar2 = (ulonglong)uStack_11c * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_f8 = (int)lVar5;
      iStack_10c = local_108 + -1 + local_f8;
      if (iVar17 < iStack_10c) {
        iStack_10c = iVar17;
      }
    }
LAB_147b034bc:
    uVar24 = *(uint *)&(pFVar6->Values).field_0x28;
    iStack_100 = *(int *)&(pFVar6->Values).field_0x8 - *(int *)&(pFVar6->Values).field_0x34;
    uVar23 = uVar24 & 0xffffffe0;
    TStack_c8._padding_ = CONCAT44(uStack_11c,iStack_120);
    uStack_110 = 0xffffffff;
    TStack_c8.CurrentBitIndex = iStack_10c;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar24 >> 5;
    TStack_c8._28_4_ = iStack_10c;
    TStack_c8.BaseBitIndex = local_108;
    uStack_a8 = CONCAT44(uStack_fc,iStack_100);
    local_180 = pTVar28;
    local_130._8_8_ = pFVar6;
    local_118 = (undefined1 *)pTVar28;
    iStack_104 = iStack_10c;
    local_f0 = pFVar6;
    local_d0 = pFVar6;
    TStack_c8.Array = pTVar28;
    if ((((int)uVar24 < 0) || (iVar17 < (int)uVar24)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar15 = (*pcVar10)();
      return (bool)uVar15;
    }
    uVar3 = *(uint *)&(pFVar6->Values).field_0x28;
    if (uVar24 != uVar3) {
      puVar7 = *(undefined1 **)&(pFVar6->Values).field_0x20;
      puVar26 = (undefined1 *)pTVar28;
      if (puVar7 != (undefined1 *)0x0) {
        puVar26 = puVar7;
      }
      uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar21 * 4);
      while (uVar24 == 0) {
        iVar21 = iVar21 + 1;
        uVar23 = uVar23 + 0x20;
        uVar24 = uVar3;
        if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar21)
        goto LAB_147b035c0;
        uVar24 = *(uint *)(puVar26 + (longlong)iVar21 * 4);
      }
      uVar2 = (ulonglong)(~(uVar24 - 1) & uVar24) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_f4 = (int)lVar5;
      uVar24 = (uVar23 - 1) + local_f4;
      if ((int)uVar3 < (int)uVar24) {
        uVar24 = uVar3;
      }
    }
LAB_147b035c0:
    do {
      pFVar6 = local_d0;
      if (*(int *)&(local_d0->Values).field_0x8 - *(int *)&(local_d0->Values).field_0x34 !=
          (int)uStack_a8) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_c8.CurrentBitIndex == uVar24) && (TStack_c8.Array == pTVar28)) &&
         (pFVar6 == local_f0)) goto LAB_147b03aa1;
      puVar1 = (undefined8 *)
               (*(longlong *)&pFVar6->Values + (longlong)TStack_c8.CurrentBitIndex * 0x28);
      iVar17 = *(int *)(puVar1 + 1);
      if (iVar17 == local_1c0.Data.ArrayNum) {
        if (1 < iVar17) {
          iVar17 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)*puVar1,(wchar_t *)local_1c0.Data.AllocatorInstance.Data);
          bVar14 = iVar17 == 0;
          goto LAB_147b0376a;
        }
      }
      else {
        bVar14 = iVar17 + local_1c0.Data.ArrayNum == 1;
LAB_147b0376a:
        if (!bVar14) {
          DataTableUtils::MakeValidName((FString *)local_130);
          uVar13 = local_130._0_8_;
          TVar8 = (TObjectPtr<UScriptStruct>_u_0)(this->DataTable->RowStruct).field0_0x0.DebugPtr;
          pFVar25 = (FProperty *)0x0;
          if ((FName)local_130._0_8_ != (FName)0x0) {
            if (TVar8.DebugPtr == (UScriptStruct *)0x0) {
              local_158 = (FProperty *)0x0;
            }
            else {
              local_158 = (FProperty *)(TVar8.DebugPtr)->_padding_;
            }
            local_150 = 0xffffffff;
            local_14c = 0x101;
            local_14a = 0;
            local_160 = TVar8;
            TFieldIterator<FProperty>::IterateToNext
                      ((TFieldIterator<FProperty> *)&local_160.ObjectPtr);
            pFVar11 = local_158;
            while (pFVar25 = (FProperty *)0x0, local_158 = pFVar11, pFVar11 != (FProperty *)0x0) {
              bVar14 = IsThisNotNull(pFVar11,"FField::GetFName");
              if (bVar14) {
                local_168 = (FName)pFVar11->_padding_;
              }
              else {
                local_168.ComparisonIndex.Value = 0;
                local_168.Number = 0;
              }
              pFVar25 = pFVar11;
              if (local_168 == (FName)uVar13) break;
              local_158 = (FProperty *)pFVar11->_padding_;
              TFieldIterator<FProperty>::IterateToNext
                        ((TFieldIterator<FProperty> *)&local_160.ObjectPtr);
              pFVar11 = local_158;
            }
          }
          local_148 = (TObjectPtr<UScriptStruct>_u_0)
                      (this->DataTable->RowStruct).field0_0x0.DebugPtr;
          if (local_148.DebugPtr == (UScriptStruct *)0x0) {
            local_140 = (FProperty *)0x0;
          }
          else {
            local_140 = (FProperty *)(local_148.DebugPtr)->_padding_;
          }
          local_138 = 0xffffffff;
          local_134 = 0x101;
          local_132 = 0;
          TFieldIterator<FProperty>::IterateToNext
                    ((TFieldIterator<FProperty> *)&local_148.ObjectPtr);
          pFVar11 = local_140;
          while (pTVar28 = local_180, local_140 = pFVar11, pFVar11 != (FProperty *)0x0) {
            if (pFVar25 != (FProperty *)0x0) goto LAB_147b03a8b;
            DataTableUtils::GetPropertyImportNames(pFVar11,&local_178);
            pFVar20 = local_178.AllocatorInstance.Data + (longlong)local_178.ArrayNum * 0x10;
            for (FVar22.Data = local_178.AllocatorInstance.Data; FVar22.Data != pFVar20;
                FVar22.Data = FVar22.Data + 0x10) {
              iVar17 = *(int *)(FVar22.Data + 8);
              pFVar25 = pFVar11;
              if (iVar17 == *(int *)(puVar1 + 1)) {
                if (iVar17 < 2) goto LAB_147b038d9;
                iVar17 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)FVar22.Data,(wchar_t *)*puVar1);
                bVar14 = iVar17 == 0;
              }
              else {
                bVar14 = iVar17 + *(int *)(puVar1 + 1) == 1;
              }
              if (bVar14) goto LAB_147b038d9;
            }
            pFVar25 = (FProperty *)0x0;
LAB_147b038d9:
            local_140 = (FProperty *)pFVar11->_padding_;
            TFieldIterator<FProperty>::IterateToNext
                      ((TFieldIterator<FProperty> *)&local_148.ObjectPtr);
            pFVar11 = local_140;
          }
          if (pFVar25 == (FProperty *)0x0) {
            pTVar4 = this->ImportProblems;
            local_e8 = (FName)((this->DataTable->RowStruct).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_e8,&local_e0);
            ::FName::ToString((FName *)local_1d8,&local_48);
            ::FName::ToString((FName *)local_130,&local_58);
            ::FString::PrintfImpl
                      (&local_190,L"Property \'%s\' on row \'%s\' cannot be found in struct \'%s\'."
                      );
            pFVar20 = (pTVar4->AllocatorInstance).Data;
            if (((pFVar20 <= (FScriptContainerElement *)&local_190) &&
                ((FScriptContainerElement *)&local_190 < pFVar20 + (longlong)pTVar4->ArrayMax * 0x10
                )) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar14)) {
              pcVar10 = (code *)swi(3);
              uVar15 = (*pcVar10)();
              return (bool)uVar15;
            }
            iVar17 = pTVar4->ArrayNum;
            if (iVar17 == pTVar4->ArrayMax) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
              pTVar4->ArrayNum = iVar17 + 1;
            }
            else {
              pTVar4->ArrayNum = iVar17 + 1;
            }
            pFVar20 = (pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
            *(undefined8 *)pFVar20 = 0;
            *(FScriptContainerElement **)pFVar20 = local_190.Data.AllocatorInstance.Data;
            *(int *)(pFVar20 + 8) = local_190.Data.ArrayNum;
            *(int *)(pFVar20 + 0xc) = local_190.Data.ArrayMax;
            local_190.Data.ArrayNum = 0;
            local_190.Data.ArrayMax = 0;
            local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            pTVar28 = local_180;
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
              pTVar28 = local_180;
            }
          }
        }
      }
LAB_147b03a8b:
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    } while( true );
  }
LAB_147b03ac2:
  pUVar9 = (this->DataTable->RowStruct).field0_0x0.DebugPtr;
  iVar17 = (int)*(short *)((longlong)&pUVar9->_padding_ + 4);
  pvVar19 = FMemory::Malloc((longlong)(int)((int)pUVar9->_padding_ + -1 + iVar17 & ~(iVar17 - 1U)),0
                           );
  pUVar9 = (this->DataTable->RowStruct).field0_0x0.DebugPtr;
  (**(code **)(pUVar9->_padding_ + 0x2f8))(pUVar9,pvVar19,1);
  (**(code **)(this->DataTable->_padding_ + 0x2b8))(this->DataTable,local_1d8,pvVar19);
  bVar14 = ReadStruct(this,param_1,(this->DataTable->RowStruct).field0_0x0.DebugPtr,(FName)local_1d8
                      ,pvVar19);
LAB_147b03b43:
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  return bVar14;
LAB_147b03aa1:
  DestructItems<FString,int>((FString *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  param_1 = local_res10;
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
    param_1 = local_res10;
  }
  goto LAB_147b03ac2;
}

// ReadStruct @ 147b03b80

/* WARNING: Removing unreachable block (ram,0x000147b040c5) */
/* WARNING: Removing unreachable block (ram,0x000147b043b1) */
/* WARNING: Removing unreachable block (ram,0x000147b0451e) */

bool __thiscall
FDataTableImporterJSON::ReadStruct
          (FDataTableImporterJSON *this,TSharedRef<FJsonObject,1> *param_1,UScriptStruct *param_2,
          FName param_3,void *param_4)

{
  int iVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FProperty *this_01;
  FName FVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  TSharedPtr<FJsonValue,1> *pTVar16;
  TReferenceControllerBase<1> **ppTVar17;
  FSharedReferencer<1> FVar18;
  FJsonValue *pFVar19;
  int iVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  FJsonValue *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res18 [8];
  FName local_res20;
  FString local_170;
  FJsonValue *local_158;
  FSharedReferencer<1> FStack_150;
  FString local_148;
  FString local_138;
  FString local_128;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  TFieldIterator<FProperty> local_108;
  longlong *local_f0;
  undefined8 local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  FJsonValue *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FJsonValue *local_c8;
  FSharedReferencer<1> local_c0;
  TSharedRef<FJsonValue,1> local_b8;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TSharedRef<FJsonValue,1> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar6 = false;
  bVar12 = false;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  if (param_2 == (UScriptStruct *)0x0) {
    local_108.Field = (FField *)0x0;
  }
  else {
    local_108.Field = (FField *)param_2->_padding_;
  }
  local_108.bIncludeInterface = false;
  local_108.InterfaceIndex = -1;
  local_108.bIncludeSuper = true;
  local_108.bIncludeDeprecated = true;
  local_res20 = param_3;
  local_108.Struct = (UStruct *)param_2;
  TFieldIterator<FProperty>::IterateToNext(&local_108);
  this_01 = (FProperty *)local_108.Field;
  do {
    local_108.Field = (FField *)this_01;
    if (this_01 == (FProperty *)0x0) {
      bVar12 = true;
LAB_147b04550:
      DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      return bVar12;
    }
    if (this_01 == (FProperty *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataTableJSON.cpp"
                         ,0x329,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7199246111658212943>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataTableUtils.cpp"
                         ,0x1b1,"Prop");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.Data.ArrayNum = 0;
      local_170.Data.ArrayMax = 0;
    }
    else {
      FField::GetAuthoredName((FField *)this_01,&local_170);
    }
    local_158 = (FJsonValue *)0x0;
    FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    DataTableUtils::GetPropertyImportNames(this_01,&local_118);
    iVar14 = local_118.ArrayNum;
    uVar15 = (ulonglong)local_118.ArrayNum;
    pFVar24 = local_118.AllocatorInstance.Data + uVar15 * 0x10;
    FVar21.Data = local_118.AllocatorInstance.Data;
    pFVar23 = (FJsonValue *)0x0;
    while( true ) {
      if ((int)uVar15 != iVar14) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar21.Data == pFVar24) {
        FVar18.ReferenceController = FStack_150.ReferenceController;
        if (this->DataTable->bIgnoreMissingFields == '\0') {
          pTVar2 = this->ImportProblems;
          ::FName::ToString(&local_res20,&local_68);
          ::FString::PrintfImpl(&local_138,L"Row \'%s\' is missing an entry for \'%s\'.");
          pFVar24 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar24 <= (FScriptContainerElement *)&local_138) &&
              ((FScriptContainerElement *)&local_138 < pFVar24 + (longlong)pTVar2->ArrayMax * 0x10))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          iVar14 = pTVar2->ArrayNum;
          if (iVar14 == pTVar2->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
            pTVar2->ArrayNum = iVar14 + 1;
          }
          else {
            pTVar2->ArrayNum = iVar14 + 1;
          }
          pFVar24 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
          *(undefined8 *)pFVar24 = 0;
          *(FScriptContainerElement **)pFVar24 = local_138.Data.AllocatorInstance.Data;
          *(int *)(pFVar24 + 8) = local_138.Data.ArrayNum;
          *(int *)(pFVar24 + 0xc) = local_138.Data.ArrayMax;
          local_138.Data.ArrayNum = 0;
          local_138.Data.ArrayMax = 0;
          local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar18.ReferenceController = FStack_150.ReferenceController;
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
            FVar18.ReferenceController = FStack_150.ReferenceController;
          }
        }
        goto LAB_147b043c9;
      }
      local_a8 = *(wchar_t **)FVar21.Data;
      this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 *)param_1->Object;
      iStack_a0 = *(int *)(FVar21.Data + 8) + -1;
      if (*(int *)(FVar21.Data + 8) == 0) {
        iStack_a0 = (int)pFVar23;
      }
      local_88._12_4_ = uStack_9c;
      local_88.Size = iStack_a0;
      local_88.DataPtr = local_a8;
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iStack_a0,local_a8);
      pTVar16 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>(this_00,uVar13,&local_88);
      if ((pTVar16 == (TSharedPtr<FJsonValue,1> *)0x0) ||
         (pFVar19 = pTVar16->Object, pFVar19 == (FJsonValue *)0x0)) {
        ppTVar17 = &pTStack_e0;
        local_e8 = 0;
        bVar12 = true;
        pTStack_e0 = (TReferenceControllerBase<1> *)0x0;
        pFVar19 = pFVar23;
      }
      else {
        local_d0 = (pTVar16->SharedReferenceCount).ReferenceController;
        bVar6 = true;
        local_d8 = pFVar19;
        if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
          UNLOCK();
        }
        ppTVar17 = &local_d0;
      }
      local_c0.ReferenceController = *ppTVar17;
      if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (bVar12) {
        bVar12 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_e0);
      }
      if (bVar6) {
        bVar6 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0);
      }
      local_158 = pFVar19;
      local_c8 = pFVar23;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_150,&local_c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.ReferenceController);
      pFVar23 = local_158;
      if (local_158 != (FJsonValue *)0x0) break;
      uVar15 = local_118._8_8_ & 0xffffffff;
      FVar21.Data = FVar21.Data + 0x10;
    }
    if (this_01->ArrayDim == 1) {
      if ((param_4 == (void *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      FVar7 = local_res20;
      iVar14 = this_01->Offset_Internal;
      if ((pFVar23 == (FJsonValue *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      FVar18.ReferenceController = FStack_150.ReferenceController;
      local_98.Object = local_158;
      local_98.SharedReferenceCount.ReferenceController = FStack_150.ReferenceController;
      if (FStack_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_150.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_150.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar23 == (FJsonValue *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      ReadStructEntry(this,&local_98,FVar7,&local_170,param_4,this_01,
                      (void *)((longlong)iVar14 + (longlong)param_4));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    else {
      if ((local_158 == (FJsonValue *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      switch(pFVar23->Type) {
      case None:
        break;
      case Null:
        break;
      case String:
        break;
      case Number:
        break;
      case Boolean:
        break;
      case Array:
        break;
      case Object:
      }
      cVar11 = (**(code **)(pFVar23->_padding_ + 0x78))(pFVar23,&local_f0);
      if (cVar11 == '\0') {
        pTVar2 = this->ImportProblems;
        ::FName::ToString(&local_res20,&local_58);
        ::FString::PrintfImpl
                  (&local_128,
                   L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Array, got %s.");
        pFVar24 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar24 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < pFVar24 + (longlong)pTVar2->ArrayMax * 0x10))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar14 = pTVar2->ArrayNum;
        if (iVar14 == pTVar2->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
          pTVar2->ArrayNum = iVar14 + 1;
        }
        else {
          pTVar2->ArrayNum = iVar14 + 1;
        }
        pFVar24 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar24 = 0;
        *(FScriptContainerElement **)pFVar24 = local_128.Data.AllocatorInstance.Data;
        *(int *)(pFVar24 + 8) = local_128.Data.ArrayNum;
        *(int *)(pFVar24 + 0xc) = local_128.Data.ArrayMax;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_150.ReferenceController);
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        bVar12 = false;
        goto LAB_147b04550;
      }
      if (this_01->ArrayDim != (int)local_f0[1]) {
        pTVar2 = this->ImportProblems;
        ::FName::ToString(&local_res20,&local_78);
        ::FString::PrintfImpl
                  (&local_148,
                   L"Property \'%s\' on row \'%s\' is a static sized array with %d elements, but we have %d values to import"
                  );
        pFVar24 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar24 <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 < pFVar24 + (longlong)pTVar2->ArrayMax * 0x10))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar14 = pTVar2->ArrayNum;
        if (iVar14 == pTVar2->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
          pTVar2->ArrayNum = iVar14 + 1;
        }
        else {
          pTVar2->ArrayNum = iVar14 + 1;
        }
        pFVar24 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar24 = 0;
        *(FScriptContainerElement **)pFVar24 = local_148.Data.AllocatorInstance.Data;
        *(int *)(pFVar24 + 8) = local_148.Data.ArrayNum;
        *(int *)(pFVar24 + 0xc) = local_148.Data.ArrayMax;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      uVar22 = 0;
      iVar14 = this_01->ArrayDim;
      FVar18.ReferenceController = FStack_150.ReferenceController;
      uVar15 = uVar22;
      if (0 < iVar14) {
        do {
          iVar20 = (int)uVar22;
          if ((-1 < iVar20) && (iVar20 < (int)local_f0[1])) {
            if ((iVar14 <= iVar20) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            if ((param_4 == (void *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            plVar8 = local_f0;
            iVar14 = this_01->ElementSize;
            iVar1 = this_01->Offset_Internal;
            if (((int)local_f0[1] <= iVar20) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            FVar7 = local_res20;
            lVar3 = *plVar8;
            if ((*(longlong *)(lVar3 + uVar15) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x408,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            local_b8.Object = *(FJsonValue **)(lVar3 + uVar15);
            pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + uVar15);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_b8.SharedReferenceCount.ReferenceController = pTVar4;
            if ((local_b8.Object == (FJsonValue *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x25d,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              uVar10 = (*pcVar5)();
              return (bool)uVar10;
            }
            ReadContainerEntry(this,&local_b8,FVar7,&local_170,iVar20,this_01,
                               (void *)((longlong)param_4 +
                                       (longlong)iVar1 + (longlong)iVar14 * (longlong)iVar20));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
          }
          iVar14 = this_01->ArrayDim;
          uVar22 = (ulonglong)(iVar20 + 1U);
          FVar18.ReferenceController = FStack_150.ReferenceController;
          uVar15 = uVar15 + 0x10;
        } while ((int)(iVar20 + 1U) < iVar14);
      }
    }
LAB_147b043c9:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar18.ReferenceController);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    local_108.Field = (local_108.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_108);
    this_01 = (FProperty *)local_108.Field;
  } while( true );
}

// ReadStructEntry @ 147b045d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147b04940) */
/* WARNING: Removing unreachable block (ram,0x000147b04e31) */
/* WARNING: Removing unreachable block (ram,0x000147b0511e) */
/* WARNING: Removing unreachable block (ram,0x000147b05ff6) */
/* WARNING: Removing unreachable block (ram,0x000147b06781) */
/* WARNING: Removing unreachable block (ram,0x000147b0574f) */
/* WARNING: Removing unreachable block (ram,0x000147b06143) */
/* WARNING: Removing unreachable block (ram,0x000147b055c7) */
/* WARNING: Removing unreachable block (ram,0x000147b06605) */
/* WARNING: Removing unreachable block (ram,0x000147b058c6) */
/* WARNING: Removing unreachable block (ram,0x000147b04aed) */
/* WARNING: Removing unreachable block (ram,0x000147b04ca5) */
/* WARNING: Removing unreachable block (ram,0x000147b047c8) */
/* WARNING: Removing unreachable block (ram,0x000147b04f9a) */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FDataTableImporterJSON::ReadStructEntry
          (FDataTableImporterJSON *this,TSharedRef<FJsonValue,1> *param_1,FName param_2,
          FString *param_3,void *param_4,FProperty *param_5,void *param_6)

{
  undefined1 *puVar1;
  FScriptSparseArrayLayout *pFVar2;
  FString *pFVar3;
  EArrayPropertyFlags EVar4;
  FJsonValue *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  UScriptStruct *pUVar9;
  ForElementType<unsigned_int> FVar10;
  code *pcVar11;
  TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
  *pTVar12;
  FName FVar13;
  longlong *plVar14;
  FScriptMapHelper_u_16 FVar15;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar16;
  char cVar17;
  bool bVar18;
  undefined1 uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  FProperty *pFVar23;
  TSharedRef<FJsonObject,1> *pTVar24;
  FJsonObject *pFVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  uchar *puVar27;
  TSharedRef<FJsonValue,1> *pTVar28;
  int iVar29;
  void *_Dst;
  ForAnyElementType FVar30;
  longlong lVar31;
  ForElementType<unsigned_int> FVar32;
  FProperty *pFVar33;
  ulonglong uVar34;
  int iVar35;
  FProperty *pFVar36;
  longlong *plVar37;
  FName local_res18 [2];
  undefined1 auStackY_578 [32];
  bool local_528 [8];
  FDataTableImporterJSON *local_520;
  FString *local_518;
  undefined1 local_510;
  undefined1 local_50f [3];
  uint local_50c;
  FProperty *local_508;
  FScriptArrayHelper local_500;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  ForAnyElementType local_470;
  int local_468;
  int local_464;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  int local_3c0;
  int local_3bc;
  int local_3b8 [2];
  longlong *local_3b0;
  longlong *local_3a8;
  FString local_3a0;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  TSharedPtr<FJsonObject,1> *local_378;
  FScriptMapHelper *local_370;
  int local_368;
  undefined4 local_364;
  FScriptMapHelper *local_360;
  int local_358;
  undefined4 local_354;
  FString local_350;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_340;
  undefined1 local_320 [16];
  FString local_310;
  longlong *local_300;
  TSharedPtr<FJsonObject,1> *local_2f8;
  FString local_2f0;
  FString local_2e0;
  TSharedRef<FJsonValue,1> local_2d0;
  FString local_2c0;
  TSharedRef<FJsonValue,1> local_2b0;
  longlong *local_2a0;
  undefined1 local_298 [12];
  uint uStack_28c;
  TBitArray<FDefaultBitArrayAllocator> *local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined8 uStack_270;
  <lambda_1> local_268;
  undefined1 local_258 [16];
  undefined1 local_248 [24];
  longlong lStack_230;
  longlong lStack_228;
  int local_220;
  undefined4 uStack_21c;
  FJsonObject *local_218;
  longlong lStack_210;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  int local_1f0;
  undefined4 uStack_1ec;
  FString local_1e8;
  TSharedRef<FJsonObject,1> local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  TSharedRef<FJsonValue,1> local_198;
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
  TRangedForIterator local_e8;
  FScriptMapHelper local_b8;
  FScriptSetHelper local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_578;
  pFVar5 = param_1->Object;
  local_res18[0] = param_2;
  local_520 = this;
  local_518 = param_3;
  UE::DataTableJSON::JSONTypeToString(pFVar5->Type);
  if ((param_5 == (FProperty *)0x0) ||
     ((*(ulonglong *)(param_5->_padding_ + 0x18) & 0x1000000000000) == 0)) {
    pFVar33 = (FProperty *)0x0;
    iVar20 = 0;
    pFVar23 = pFVar33;
    if (param_5 != (FProperty *)0x0) {
      uVar21 = *(uint *)(param_5->_padding_ + 0x18);
      if ((uVar21 >> 0x18 & 1) != 0) {
        local_3f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3f0.Data.ArrayNum = 0;
        local_3f0.Data.ArrayMax = 0;
        lVar31 = (**(code **)(param_5->_padding_ + 0x1e0))(param_5);
        if ((lVar31 == 0) ||
           (cVar17 = (**(code **)(param_1->Object->_padding_ + 0x58))(param_1->Object,&local_3f0),
           cVar17 == '\0')) {
          cVar17 = (**(code **)(param_5->_padding_ + 0x1d8))(param_5);
          pFVar5 = param_1->Object;
          if (cVar17 == '\0') {
            local_380 = 0;
            cVar17 = (**(code **)(pFVar5->_padding_ + 0x50))(pFVar5,&local_380);
            if (cVar17 != '\0') {
              (**(code **)(param_5->_padding_ + 0x1f8))(param_5,param_6,local_380);
              FVar30.Data = local_3f0.Data.AllocatorInstance.Data;
              goto LAB_147b067d5;
            }
            pTVar6 = local_520->ImportProblems;
            ::FName::ToString(local_res18,&local_f8);
            ::FString::PrintfImpl
                      (&local_4d0,
                       L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Double, got %s."
                      );
            pFVar7 = (pTVar6->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)&local_4d0) &&
                ((FScriptContainerElement *)&local_4d0 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)
                ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
              pcVar11 = (code *)swi(3);
              uVar19 = (*pcVar11)();
              return (bool)uVar19;
            }
            iVar20 = pTVar6->ArrayNum;
            if (iVar20 == pTVar6->ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
            }
            lVar31 = (longlong)iVar20;
            pTVar6->ArrayNum = iVar20 + 1;
            pFVar7 = (pTVar6->AllocatorInstance).Data;
            *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
                 local_4d0.Data.AllocatorInstance.Data;
            *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_4d0.Data.ArrayNum;
            *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_4d0.Data.ArrayMax;
            local_4d0.Data.ArrayNum = 0;
            local_4d0.Data.ArrayMax = 0;
            local_4d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_108.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
          }
          else {
            local_388 = 0;
            cVar17 = (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,&local_388);
            if (cVar17 != '\0') {
              (**(code **)(param_5->_padding_ + 0x1e8))(param_5,param_6,local_388);
              FVar30.Data = local_3f0.Data.AllocatorInstance.Data;
              goto LAB_147b067d5;
            }
            pTVar6 = local_520->ImportProblems;
            ::FName::ToString(local_res18,&local_108);
            ::FString::PrintfImpl
                      (&local_4e0,
                       L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Integer, got %s."
                      );
            pFVar7 = (pTVar6->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)&local_4e0) &&
                ((FScriptContainerElement *)&local_4e0 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)
                ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
              pcVar11 = (code *)swi(3);
              uVar19 = (*pcVar11)();
              return (bool)uVar19;
            }
            iVar20 = pTVar6->ArrayNum;
            if (iVar20 == pTVar6->ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
            }
            lVar31 = (longlong)iVar20;
            pTVar6->ArrayNum = iVar20 + 1;
            pFVar7 = (pTVar6->AllocatorInstance).Data;
            *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
                 local_4e0.Data.AllocatorInstance.Data;
            *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_4e0.Data.ArrayNum;
            *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_4e0.Data.ArrayMax;
            local_4e0.Data.ArrayNum = 0;
            local_4e0.Data.ArrayMax = 0;
            local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
        }
        else {
          DataTableUtils::AssignStringToProperty(&local_2e0,&local_3f0,param_5,param_4);
          if (local_2e0.Data.ArrayNum < 2) {
            FVar30.Data = local_3f0.Data.AllocatorInstance.Data;
            if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
              FVar30.Data = local_3f0.Data.AllocatorInstance.Data;
            }
            goto LAB_147b067d5;
          }
          pTVar6 = local_520->ImportProblems;
          ::FName::ToString(local_res18,&local_128);
          ::FString::PrintfImpl
                    (&local_400,L"Property \'%s\' on row \'%s\' has invalid enum value: %s.");
          pFVar7 = (pTVar6->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_400) &&
              ((FScriptContainerElement *)&local_400 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10))
             && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar18)) {
            pcVar11 = (code *)swi(3);
            uVar19 = (*pcVar11)();
            return (bool)uVar19;
          }
          iVar20 = pTVar6->ArrayNum;
          if (iVar20 == pTVar6->ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
          }
          lVar31 = (longlong)iVar20;
          pTVar6->ArrayNum = iVar20 + 1;
          pFVar7 = (pTVar6->AllocatorInstance).Data;
          *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
               local_400.Data.AllocatorInstance.Data;
          *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_400.Data.ArrayNum;
          *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_400.Data.ArrayMax;
          local_400.Data.ArrayNum = 0;
          local_400.Data.ArrayMax = 0;
          local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
            local_108.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
          }
        }
        local_1e8.Data.AllocatorInstance.Data = local_3f0.Data.AllocatorInstance.Data;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
          local_1e8.Data.AllocatorInstance.Data = local_3f0.Data.AllocatorInstance.Data;
        }
        goto LAB_147b067af;
      }
      if ((uVar21 >> 0x11 & 1) != 0) {
        local_528[0] = false;
        cVar17 = (**(code **)(pFVar5->_padding_ + 0x68))(pFVar5,local_528);
        if (cVar17 != '\0') {
          FBoolProperty::SetPropertyValue((FBoolProperty *)param_5,param_6,local_528[0]);
          return true;
        }
        pTVar6 = local_520->ImportProblems;
        ::FName::ToString(local_res18,&local_138);
        ::FString::PrintfImpl
                  (&local_410,
                   L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Boolean, got %s."
                  );
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_410) &&
            ((FScriptContainerElement *)&local_410 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          uVar19 = (*pcVar11)();
          return (bool)uVar19;
        }
        iVar20 = pTVar6->ArrayNum;
        if (iVar20 == pTVar6->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
        }
        lVar31 = (longlong)iVar20;
        pTVar6->ArrayNum = iVar20 + 1;
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
             local_410.Data.AllocatorInstance.Data;
        *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_410.Data.ArrayNum;
        *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_410.Data.ArrayMax;
        local_410.Data.ArrayNum = 0;
        local_410.Data.ArrayMax = 0;
        local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
        goto LAB_147b067af;
      }
      if ((uVar21 >> 0x15 & 1) != 0) {
        pFVar23 = param_5;
      }
    }
    local_508 = pFVar23;
    if (pFVar23 == (FProperty *)0x0) {
      if (param_5 != (FProperty *)0x0) {
        lVar31 = param_5->_padding_;
        if ((*(ulonglong *)(lVar31 + 0x18) & 0x800000000000) != 0) {
          cVar17 = (**(code **)(pFVar5->_padding_ + 0x78))(pFVar5);
          if (cVar17 != '\0') {
            local_80.ElementProp = (FProperty *)param_5[1]._padding_;
            local_80.SetLayout.SparseArrayLayout.Size = (int)param_5[1]._padding_;
            local_80.Set = param_6;
            local_80.SetLayout._0_8_ = param_5[1]._padding_;
            local_80.SetLayout._8_8_ = param_5[1]._padding_;
            if ((local_80.ElementProp == (FProperty *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ElementProp",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1653,L""), bVar18)) {
              pcVar11 = (code *)swi(3);
              uVar19 = (*pcVar11)();
              return (bool)uVar19;
            }
            iVar20 = ((local_80.Set)->Elements).Data.ArrayNum -
                     ((local_80.Set)->Elements).NumFreeIndices;
            if (iVar20 != 0) {
              FScriptSetHelper::DestructItems(&local_80,0,iVar20);
              TScriptSparseSet<FDefaultSetAllocator>::Empty(local_80.Set,0,&local_80.SetLayout);
            }
            local_3b0 = local_2a0;
            local_50c = *(uint *)(local_2a0 + 1);
            uVar34 = (ulonglong)(int)local_50c;
            plVar37 = (longlong *)*local_2a0;
            local_3a8 = plVar37 + uVar34 * 2;
            do {
              plVar14 = local_3a8;
              local_508 = (FProperty *)plVar37;
              if ((int)local_3b0[1] != (int)uVar34) {
                local_50f[0] = 0;
                `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_50f);
              }
              if (plVar37 == plVar14) {
                FScriptSetHelper::Rehash(&local_80);
                return true;
              }
              uVar21 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       ::AddUninitialized(&(local_80.Set)->Elements,
                                          &local_80.SetLayout.SparseArrayLayout);
              pTVar16 = local_80.Set;
              if (((int)uVar21 < 0) ||
                 (((local_80.Set)->Elements).AllocationFlags.NumBits <= (int)uVar21)) {
LAB_147b062a1:
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(InternalIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1841,L"");
                if (bVar18) {
                  pcVar11 = (code *)swi(3);
                  uVar19 = (*pcVar11)();
                  return (bool)uVar19;
                }
              }
              else {
                pTVar12 = &(local_80.Set)->Elements;
                if ((((local_80.Set)->Elements).AllocationFlags.NumBits <= (int)uVar21) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValidIndex(Index)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x8c4,L""), bVar18)) {
                  pcVar11 = (code *)swi(3);
                  uVar19 = (*pcVar11)();
                  return (bool)uVar19;
                }
                FVar10 = (pTVar16->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                FVar32 = (ForElementType<unsigned_int>)&pTVar12->AllocationFlags;
                if (FVar10 != (ForElementType<unsigned_int>)0x0) {
                  FVar32 = FVar10;
                }
                uVar22 = uVar21;
                if ((int)uVar21 < 0) {
                  uVar22 = uVar21 + 0x1f;
                }
                if ((*(uint *)((longlong)FVar32 + (longlong)((int)uVar22 >> 5) * 4) >>
                     (uVar21 & 0x1f) & 1) == 0) goto LAB_147b062a1;
              }
              _Dst = (void *)((longlong)(int)(uVar21 * local_80.SetLayout.SparseArrayLayout.Size) +
                             ((local_80.Set)->Elements).Data._padding_);
              if (((uint)(int)(local_80.ElementProp)->PropertyFlags >> 9 & 1) == 0) {
                FProperty::InitializeValue_InContainer(local_80.ElementProp,_Dst);
              }
              else {
                memset(_Dst,0,(longlong)local_80.SetLayout.Size);
              }
              pTVar16 = local_80.Set;
              if (((local_80.Set)->Elements).Data.ArrayNum ==
                  ((local_80.Set)->Elements).NumFreeIndices) {
                pFVar23 = pFVar33;
                if ((uVar21 != 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InternalIndex == 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                        ,0x169e,
                                        L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                       ), bVar18)) {
                  pcVar11 = (code *)swi(3);
                  uVar19 = (*pcVar11)();
                  return (bool)uVar19;
                }
              }
              else {
                if (((int)uVar21 < 0) ||
                   (((local_80.Set)->Elements).AllocationFlags.NumBits <= (int)uVar21)) {
LAB_147b063ab:
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(InternalIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x16a2,
                                      L"Invalid internal index. Use IsValidIndex before calling this method."
                                     );
                  if (bVar18) {
                    pcVar11 = (code *)swi(3);
                    uVar19 = (*pcVar11)();
                    return (bool)uVar19;
                  }
                }
                else {
                  pTVar12 = &(local_80.Set)->Elements;
                  if ((((local_80.Set)->Elements).AllocationFlags.NumBits <= (int)uVar21) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x8c4,L""), bVar18)) {
                    pcVar11 = (code *)swi(3);
                    uVar19 = (*pcVar11)();
                    return (bool)uVar19;
                  }
                  FVar10 = (pTVar16->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar32 = (ForElementType<unsigned_int>)&pTVar12->AllocationFlags;
                  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
                    FVar32 = FVar10;
                  }
                  uVar22 = uVar21;
                  if ((int)uVar21 < 0) {
                    uVar22 = uVar21 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar32 + (longlong)((int)uVar22 >> 5) * 4) >>
                       (uVar21 & 0x1f) & 1) == 0) goto LAB_147b063ab;
                }
                pFVar23 = (FProperty *)
                          ((longlong)(int)(uVar21 * local_80.SetLayout.SparseArrayLayout.Size) +
                          ((local_80.Set)->Elements).Data._padding_);
              }
              pFVar36 = local_80.ElementProp;
              FVar13 = local_res18[0];
              if ((*plVar37 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x408,L""), bVar18)) {
                pcVar11 = (code *)swi(3);
                uVar19 = (*pcVar11)();
                return (bool)uVar19;
              }
              local_2b0.Object = (FJsonValue *)*plVar37;
              pTVar8 = (TReferenceControllerBase<1> *)plVar37[1];
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_2b0.SharedReferenceCount.ReferenceController = pTVar8;
              if ((local_2b0.Object == (FJsonValue *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x25d,L""), bVar18)) {
                pcVar11 = (code *)swi(3);
                uVar19 = (*pcVar11)();
                return (bool)uVar19;
              }
              ReadContainerEntry(local_520,&local_2b0,FVar13,local_518,uVar21,pFVar36,pFVar23);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar8);
              plVar37 = (longlong *)((longlong)local_508 + 0x10);
              uVar34 = (ulonglong)local_50c;
            } while( true );
          }
          pTVar6 = local_520->ImportProblems;
          ::FName::ToString(local_res18,&local_178);
          ::FString::PrintfImpl
                    (&local_460,
                     L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Array, got %s."
                    );
          pFVar7 = (pTVar6->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_460) &&
              ((FScriptContainerElement *)&local_460 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10))
             && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar18)) {
            pcVar11 = (code *)swi(3);
            uVar19 = (*pcVar11)();
            return (bool)uVar19;
          }
          iVar20 = pTVar6->ArrayNum;
          if (iVar20 == pTVar6->ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
          }
          lVar31 = (longlong)iVar20;
          pTVar6->ArrayNum = iVar20 + 1;
          pFVar7 = (pTVar6->AllocatorInstance).Data;
          *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
               local_460.Data.AllocatorInstance.Data;
          *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_460.Data.ArrayNum;
          *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_460.Data.ArrayMax;
          local_460.Data.ArrayNum = 0;
          local_460.Data.ArrayMax = 0;
          local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e8.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
          goto LAB_147b067af;
        }
        if ((*(ulonglong *)(lVar31 + 0x18) & 0x400000000000) != 0) {
          cVar17 = (**(code **)(pFVar5->_padding_ + 0x88))(pFVar5,&local_2f8);
          if (cVar17 != '\0') {
            local_b8.KeyProp = (FProperty *)param_5[1]._padding_;
            local_b8.ValueProp = (FProperty *)param_5[1]._padding_;
            local_b8.MapLayout.SetLayout.SparseArrayLayout =
                 (FScriptSparseArrayLayout)param_5[1]._padding_;
            local_b8.MapFlags = (EMapPropertyFlags)param_5[1]._padding_;
            local_b8.MapLayout._0_8_ = param_5[1]._padding_;
            local_b8.MapLayout.SetLayout._4_8_ = param_5[1]._padding_;
            if (((local_b8.KeyProp == (FProperty *)0x0) || (local_b8.ValueProp == (FProperty *)0x0))
               && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InKeyProp && InValueProp",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x1558,L""), bVar18)) {
              pcVar11 = (code *)swi(3);
              uVar19 = (*pcVar11)();
              return (bool)uVar19;
            }
            local_b8.field2_0x10.HeapMap = param_6;
            if (((local_b8.KeyProp == (FProperty *)0x0) || (local_b8.ValueProp == (FProperty *)0x0))
               && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                      ("KeyProp && ValueProp",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x1564,L""), bVar18)) {
              pcVar11 = (code *)swi(3);
              uVar19 = (*pcVar11)();
              return (bool)uVar19;
            }
            if ((local_b8.MapFlags & UsesMemoryImageAllocator) == None) {
              iVar35 = *(int *)&((local_b8.field2_0x10.FreezableMap)->Pairs).field_0x34;
            }
            else {
              iVar35 = ((local_b8.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
            }
            iVar35 = ((local_b8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar35;
            if (iVar35 != 0) {
              FScriptMapHelper::DestructItems(&local_b8,0,iVar35);
              local_268.__this = &local_b8;
              local_268.Slack = 0;
              FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
                        (&local_b8,&local_268);
            }
            pFVar25 = TSharedPtr<FJsonObject,1>::operator->(local_2f8);
            local_340._padding_._0_4_ = 0;
            local_340._padding_._4_4_ = 1;
            local_340.UnvisitedBitMask = 0xffffffff;
            puVar1 = &(pFVar25->Values).field_0x10;
            local_340.CurrentBitIndex = 0;
            local_340.BaseBitIndex = 0;
            local_340.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            if (*(int *)&(pFVar25->Values).field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_340);
            }
            unique0x100013ae =
                 (TBitArray<FDefaultBitArrayAllocator> *)
                 CONCAT44(local_340._padding_._4_4_,(undefined4)local_340._padding_);
            uStack_280 = CONCAT44(local_340.CurrentBitIndex,local_340.UnvisitedBitMask);
            local_278 = CONCAT44(local_340._28_4_,local_340.BaseBitIndex);
            local_220 = *(int *)&(pFVar25->Values).field_0x8 - *(int *)&(pFVar25->Values).field_0x34
            ;
            local_248._16_8_ = local_340.Array;
            uStack_270._4_4_ = uStack_21c;
            uStack_270._0_4_ = local_220;
            local_288 = local_340.Array;
            local_298._0_8_ = pFVar25;
            local_248._0_8_ = pFVar25;
            local_248._8_8_ = unique0x100013ae;
            lStack_230 = uStack_280;
            lStack_228 = local_278;
            pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                      TConstSetBitIterator<FDefaultBitArrayAllocator>
                                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_248,
                                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                                 *(int *)&(pFVar25->Values).field_0x28);
            lStack_210 = pTVar26->_padding_;
            pTStack_208 = pTVar26->Array;
            lStack_200._0_4_ = pTVar26->UnvisitedBitMask;
            lStack_200._4_4_ = pTVar26->CurrentBitIndex;
            lStack_1f8 = *(longlong *)&pTVar26->BaseBitIndex;
            local_1f0 = *(int *)&(pFVar25->Values).field_0x8 - *(int *)&(pFVar25->Values).field_0x34
            ;
            local_e8._44_4_ = uStack_1ec;
            local_e8.InitialNum = local_1f0;
            local_218 = pFVar25;
            local_e8._padding_ = (longlong)pFVar25;
            local_e8._padding_ = lStack_210;
            local_e8._padding_ = (longlong)pTStack_208;
            local_e8._padding_ = lStack_200;
            local_e8._padding_ = lStack_1f8;
            bVar18 = TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_298,&local_e8);
            if (bVar18) {
              do {
                pFVar3 = (FString *)
                         (*(longlong *)
                           (TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                            *)local_298._0_8_ + (longlong)uStack_280._4_4_ * 0x28);
                pFVar2 = &local_b8.MapLayout.SetLayout.SparseArrayLayout;
                if ((local_b8.MapFlags & UsesMemoryImageAllocator) == None) {
                  iVar35 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                           ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                               *)local_b8.field2_0x10.HeapMap,pFVar2);
                }
                else {
                  iVar35 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                           ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                               *)local_b8.field2_0x10.HeapMap,pFVar2);
                }
                FScriptMapHelper::ConstructItem(&local_b8,iVar35);
                FVar15 = local_b8.field2_0x10;
                if ((local_b8.MapFlags & UsesMemoryImageAllocator) == None) {
                  if (((local_b8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum ==
                      *(int *)&((local_b8.field2_0x10.FreezableMap)->Pairs).field_0x34)
                  goto LAB_147b05bec;
                  local_3b8[0] = iVar35;
                  bVar18 = FScriptMapHelper::
                           WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                     (&local_b8,(<lambda_1> *)local_3b8);
                  if ((!bVar18) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(InternalIndex)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x12dd,
                                          L"Invalid internal index. Use IsValidIndex before calling this method."
                                         ), bVar18)) {
                    pcVar11 = (code *)swi(3);
                    uVar19 = (*pcVar11)();
                    return (bool)uVar19;
                  }
                  pFVar23 = (FProperty *)
                            ((longlong)
                             (iVar35 * local_b8.MapLayout.SetLayout.SparseArrayLayout.Size) +
                            ((FVar15.FreezableMap)->Pairs).Elements.Data._padding_);
                }
                else if (((local_b8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum ==
                         ((local_b8.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices) {
LAB_147b05bec:
                  pFVar23 = pFVar33;
                  if ((iVar35 != 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InternalIndex == 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x12d9,
                                          L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                         ), bVar18)) {
                    pcVar11 = (code *)swi(3);
                    uVar19 = (*pcVar11)();
                    return (bool)uVar19;
                  }
                }
                else {
                  local_3bc = iVar35;
                  bVar18 = FScriptMapHelper::
                           WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                     (&local_b8,(<lambda_1> *)&local_3bc);
                  if ((!bVar18) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(InternalIndex)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x12dd,
                                          L"Invalid internal index. Use IsValidIndex before calling this method."
                                         ), bVar18)) {
                    pcVar11 = (code *)swi(3);
                    uVar19 = (*pcVar11)();
                    return (bool)uVar19;
                  }
                  uVar34 = ((FVar15.FreezableMap)->Pairs).Elements.Data._padding_;
                  if ((uVar34 & 1) != 0) {
                    uVar34 = (longlong)
                             &((TScriptArray<TSizedDefaultAllocator<32>_> *)
                              &(FVar15.HeapMap)->field_0x0)->_padding_ + ((longlong)uVar34 >> 0x18);
                  }
                  pFVar23 = (FProperty *)
                            ((longlong)
                             (iVar35 * local_b8.MapLayout.SetLayout.SparseArrayLayout.Size) + uVar34
                            );
                }
                local_258._0_8_ = &local_b8;
                local_258._8_4_ = iVar35;
                puVar27 = FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                    (&local_b8,(<lambda_1> *)local_258);
                pFVar36 = local_b8.KeyProp;
                ::FString::FString(&local_310,L"");
                FOutputDevice::FOutputDevice((FOutputDevice *)local_320);
                local_320[9] = false;
                local_320._0_8_ = &___7FStringOutputDevice__6B_;
                if ((pFVar36 != (FProperty *)0x0) &&
                   (bVar18 = DataTableUtils::IsSupportedTableProperty(pFVar36), bVar18)) {
                  DataTableUtilsImpl::AssignStringToPropertyDirect
                            (pFVar3,pFVar36,(uchar *)pFVar23,0x40,(FStringOutputDevice *)local_320);
                }
                FVar30.Data = local_310.Data.AllocatorInstance.Data;
                lVar31 = (longlong)local_310.Data.ArrayNum;
                local_470.Data = (FScriptContainerElement *)0x0;
                local_468 = local_310.Data.ArrayNum;
                if (local_310.Data.ArrayNum == 0) {
                  local_464 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_310.Data.ArrayNum,0,&local_470,local_310.Data.ArrayNum,
                             &local_464);
                  memcpy(local_470.Data,FVar30.Data,lVar31 * 2);
                }
                FOutputDevice::~FOutputDevice((FOutputDevice *)local_320);
                if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_310.Data.AllocatorInstance.Data);
                }
                pFVar23 = local_b8.ValueProp;
                FVar13 = local_res18[0];
                iVar29 = local_468 + -1;
                if (local_468 == 0) {
                  iVar29 = iVar20;
                }
                if (0 < iVar29) {
                  local_360 = &local_b8;
                  local_354 = 1;
                  local_358 = iVar35;
                  if ((local_b8.MapFlags & UsesMemoryImageAllocator) == None) {
                    `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::operator()<FScriptMap>
                              (&local_360,local_b8.field2_0x10.HeapMap);
                  }
                  else {
                    `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::
                    operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>
                              (&local_360,local_b8.field2_0x10.FreezableMap);
                  }
                  pTVar6 = local_520->ImportProblems;
                  ::FName::ToString(local_res18,&local_188);
                  ::FString::PrintfImpl
                            (&local_480,
                             L"Problem assigning key \'%s\' to property \'%s\' on row \'%s\' : %s");
                  pFVar7 = (pTVar6->AllocatorInstance).Data;
                  if (((pFVar7 <= (FScriptContainerElement *)&local_480) &&
                      ((FScriptContainerElement *)&local_480 <
                       pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar11 = (code *)swi(3);
                    uVar19 = (*pcVar11)();
                    return (bool)uVar19;
                  }
                  iVar20 = pTVar6->ArrayNum;
                  if (iVar20 == pTVar6->ArrayMax) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
                  }
                  lVar31 = (longlong)iVar20;
                  pTVar6->ArrayNum = iVar20 + 1;
                  pFVar7 = (pTVar6->AllocatorInstance).Data;
                  *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
                  *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
                       local_480.Data.AllocatorInstance.Data;
                  *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_480.Data.ArrayNum;
                  *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_480.Data.ArrayMax;
                  local_480.Data.ArrayNum = 0;
                  local_480.Data.ArrayMax = 0;
                  local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_1e8.Data.AllocatorInstance.Data = local_470.Data;
                  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_188.Data.AllocatorInstance.Data);
                    local_1e8.Data.AllocatorInstance.Data = local_470.Data;
                  }
                  goto LAB_147b067af;
                }
                pTVar28 = TSharedPtr<FJsonValue,1>::ToSharedRef
                                    ((TSharedPtr<FJsonValue,1> *)(pFVar3 + 1),&local_198);
                bVar18 = ReadContainerEntry(local_520,pTVar28,FVar13,local_518,iVar35,pFVar23,
                                            puVar27);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_198.SharedReferenceCount.ReferenceController);
                if (!bVar18) {
                  local_370 = &local_b8;
                  local_364 = 1;
                  local_368 = iVar35;
                  if ((local_b8.MapFlags & UsesMemoryImageAllocator) == None) {
                    `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::operator()<FScriptMap>
                              (&local_370,local_b8.field2_0x10.HeapMap);
                    local_1e8.Data.AllocatorInstance.Data = local_470.Data;
                  }
                  else {
                    `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::
                    operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>
                              (&local_370,local_b8.field2_0x10.FreezableMap);
                    local_1e8.Data.AllocatorInstance.Data = local_470.Data;
                  }
                  goto LAB_147b067af;
                }
                if (local_470.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_470.Data);
                }
                uStack_280 = CONCAT44(uStack_280._4_4_,(uint)uStack_280 & ~uStack_28c);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_298 + 8));
                bVar18 = TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         ::TRangedForIterator::operator!=((TRangedForIterator *)local_298,&local_e8)
                ;
              } while (bVar18);
            }
            FScriptMapHelper::Rehash(&local_b8);
            return true;
          }
          pTVar6 = local_520->ImportProblems;
          ::FName::ToString(local_res18,&local_1a8);
          ::FString::PrintfImpl
                    (&local_490,
                     L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Object, got %s."
                    );
          pFVar7 = (pTVar6->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_490) &&
              ((FScriptContainerElement *)&local_490 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10))
             && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar18)) {
            pcVar11 = (code *)swi(3);
            uVar19 = (*pcVar11)();
            return (bool)uVar19;
          }
          iVar20 = pTVar6->ArrayNum;
          if (iVar20 == pTVar6->ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
          }
          lVar31 = (longlong)iVar20;
          pTVar6->ArrayNum = iVar20 + 1;
          pFVar7 = (pTVar6->AllocatorInstance).Data;
          *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
               local_490.Data.AllocatorInstance.Data;
          *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_490.Data.ArrayNum;
          *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_490.Data.ArrayMax;
          local_490.Data.ArrayNum = 0;
          local_490.Data.ArrayMax = 0;
          local_490.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e8.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
          goto LAB_147b067af;
        }
        if ((*(uint *)(lVar31 + 0x18) >> 0x14 & 1) != 0) {
          local_378 = (TSharedPtr<FJsonObject,1> *)0x0;
          cVar17 = (**(code **)(pFVar5->_padding_ + 0x88))(pFVar5,&local_378);
          FVar13 = local_res18[0];
          if (cVar17 != '\0') {
            pUVar9 = (UScriptStruct *)param_5[1]._padding_;
            pTVar24 = TSharedPtr<FJsonObject,1>::ToSharedRef(local_378,&local_1d8);
            bVar18 = ReadStruct(local_520,pTVar24,pUVar9,FVar13,param_6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1d8.SharedReferenceCount.ReferenceController);
            return bVar18;
          }
          local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3a0.Data.ArrayNum = 0;
          local_3a0.Data.ArrayMax = 0;
          cVar17 = (**(code **)(param_1->Object->_padding_ + 0x58))(param_1->Object,&local_3a0);
          if (cVar17 == '\0') {
            pTVar6 = local_520->ImportProblems;
            ::FName::ToString(local_res18,&local_1c8);
            ::FString::PrintfImpl
                      (&local_4b0,
                       L"Property \'%s\' on row \'%s\' is the incorrect type. Expected String, got %s."
                      );
            pFVar7 = (pTVar6->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)&local_4b0) &&
                ((FScriptContainerElement *)&local_4b0 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)
                ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
              pcVar11 = (code *)swi(3);
              uVar19 = (*pcVar11)();
              return (bool)uVar19;
            }
            iVar20 = pTVar6->ArrayNum;
            if (iVar20 == pTVar6->ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
            }
            lVar31 = (longlong)iVar20;
            pTVar6->ArrayNum = iVar20 + 1;
            pFVar7 = (pTVar6->AllocatorInstance).Data;
            *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
                 local_4b0.Data.AllocatorInstance.Data;
            *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_4b0.Data.ArrayNum;
            *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_4b0.Data.ArrayMax;
            local_4b0.Data.ArrayNum = 0;
            local_4b0.Data.ArrayMax = 0;
            local_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            bVar18 = false;
          }
          else {
            DataTableUtils::AssignStringToProperty(&local_2c0,&local_3a0,param_5,param_4);
            iVar35 = local_2c0.Data.ArrayNum + -1;
            if (local_2c0.Data.ArrayNum == 0) {
              iVar35 = iVar20;
            }
            if (iVar35 < 1) {
              bVar18 = true;
            }
            else {
              pTVar6 = local_520->ImportProblems;
              ::FName::ToString(local_res18,&local_1b8);
              ::FString::PrintfImpl
                        (&local_4a0,
                         L"Problem assigning string \'%s\' to property \'%s\' on row \'%s\' : %s");
              pFVar7 = (pTVar6->AllocatorInstance).Data;
              if (((pFVar7 <= (FScriptContainerElement *)&local_4a0) &&
                  ((FScriptContainerElement *)&local_4a0 <
                   pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar11 = (code *)swi(3);
                uVar19 = (*pcVar11)();
                return (bool)uVar19;
              }
              iVar20 = pTVar6->ArrayNum;
              if (iVar20 == pTVar6->ArrayMax) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
              }
              lVar31 = (longlong)iVar20;
              pTVar6->ArrayNum = iVar20 + 1;
              pFVar7 = (pTVar6->AllocatorInstance).Data;
              *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
              *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
                   local_4a0.Data.AllocatorInstance.Data;
              *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_4a0.Data.ArrayNum;
              *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_4a0.Data.ArrayMax;
              local_4a0.Data.ArrayNum = 0;
              local_4a0.Data.ArrayMax = 0;
              local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
              bVar18 = false;
            }
            if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
            }
          }
          if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
            return bVar18;
          }
          return bVar18;
        }
      }
      local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3e0.Data.ArrayNum = 0;
      local_3e0.Data.ArrayMax = 0;
      cVar17 = (**(code **)(pFVar5->_padding_ + 0x58))(pFVar5,&local_3e0);
      if (cVar17 == '\0') {
        pTVar6 = local_520->ImportProblems;
        ::FName::ToString(local_res18,&local_118);
        ::FString::PrintfImpl
                  (&local_450,
                   L"Property \'%s\' on row \'%s\' is the incorrect type. Expected String, got %s.")
        ;
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_450) &&
            ((FScriptContainerElement *)&local_450 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          uVar19 = (*pcVar11)();
          return (bool)uVar19;
        }
        iVar20 = pTVar6->ArrayNum;
        if (iVar20 == pTVar6->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
        }
        lVar31 = (longlong)iVar20;
        pTVar6->ArrayNum = iVar20 + 1;
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
             local_450.Data.AllocatorInstance.Data;
        *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_450.Data.ArrayNum;
        *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_450.Data.ArrayMax;
        local_450.Data.ArrayNum = 0;
        local_450.Data.ArrayMax = 0;
        local_450.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        DataTableUtils::AssignStringToProperty(&local_350,&local_3e0,param_5,param_4);
        iVar35 = local_350.Data.ArrayNum + -1;
        if (local_350.Data.ArrayNum == 0) {
          iVar35 = iVar20;
        }
        if (iVar35 < 1) {
          FVar30.Data = local_3e0.Data.AllocatorInstance.Data;
          if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_350.Data.AllocatorInstance.Data);
            FVar30.Data = local_3e0.Data.AllocatorInstance.Data;
          }
LAB_147b067d5:
          if (FVar30.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar30.Data);
          }
          return true;
        }
        pTVar6 = local_520->ImportProblems;
        ::FName::ToString(local_res18,&local_158);
        ::FString::PrintfImpl
                  (&local_440,
                   L"Problem assigning string \'%s\' to property \'%s\' on row \'%s\' : %s");
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_440) &&
            ((FScriptContainerElement *)&local_440 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar11 = (code *)swi(3);
          uVar19 = (*pcVar11)();
          return (bool)uVar19;
        }
        iVar20 = pTVar6->ArrayNum;
        if (iVar20 == pTVar6->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
        }
        lVar31 = (longlong)iVar20;
        pTVar6->ArrayNum = iVar20 + 1;
        pFVar7 = (pTVar6->AllocatorInstance).Data;
        *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) =
             local_440.Data.AllocatorInstance.Data;
        *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_440.Data.ArrayNum;
        *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_440.Data.ArrayMax;
        local_440.Data.ArrayNum = 0;
        local_440.Data.ArrayMax = 0;
        local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.AllocatorInstance.Data = local_350.Data.AllocatorInstance.Data;
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
          local_118.Data.AllocatorInstance.Data = local_350.Data.AllocatorInstance.Data;
        }
      }
      local_1e8.Data.AllocatorInstance.Data = local_3e0.Data.AllocatorInstance.Data;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
        local_1e8.Data.AllocatorInstance.Data = local_3e0.Data.AllocatorInstance.Data;
      }
    }
    else {
      cVar17 = (**(code **)(pFVar5->_padding_ + 0x78))(pFVar5,&local_300);
      pFVar23 = local_508;
      if (cVar17 != '\0') {
        EVar4 = (EArrayPropertyFlags)local_508[1]._padding_;
        local_500.ElementAlignment = (**(code **)(*(longlong *)local_508[1]._padding_ + 0x168))();
        local_500.InnerProperty = (FProperty *)pFVar23[1]._padding_;
        local_500.ElementSize = (local_500.InnerProperty)->ElementSize;
        local_500.field1_0x8.HeapArray = param_6;
        local_500.ArrayFlags = EVar4;
        if ((local_500.ElementSize < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("ElementSize > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1177,L""), bVar18)) {
          pcVar11 = (code *)swi(3);
          uVar19 = (*pcVar11)();
          return (bool)uVar19;
        }
        if ((local_500.InnerProperty == (FProperty *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InnerProperty",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1178,L""), bVar18)) {
          pcVar11 = (code *)swi(3);
          uVar19 = (*pcVar11)();
          return (bool)uVar19;
        }
        uVar21 = (local_500.field1_0x8.FreezableArray)->ArrayNum;
        uVar34 = (ulonglong)uVar21;
        if (uVar21 != 0) {
          if ((((local_500.InnerProperty)->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) ==
               CPF_None) && (pFVar36 = local_500.InnerProperty, 0 < (int)uVar21)) {
            do {
              if ((pFVar36->PropertyFlags & CPF_NoDestructor) == CPF_None) {
                (**(code **)(pFVar36->_padding_ + 0x138))(pFVar36);
                pFVar36 = local_500.InnerProperty;
              }
              uVar34 = uVar34 - 1;
              pFVar23 = local_508;
            } while (uVar34 != 0);
          }
          (local_500.field1_0x8.FreezableArray)->ArrayNum = 0;
          if ((local_500.ArrayFlags & UsesMemoryImageAllocator) == None) {
            if ((local_500.field1_0x8.FreezableArray)->ArrayMax != 0) {
              TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                        ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)
                         local_500.field1_0x8.HeapArray,0,local_500.ElementSize,
                         local_500.ElementAlignment);
            }
          }
          else if ((local_500.field1_0x8.FreezableArray)->ArrayMax != 0) {
            TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                      (local_500.field1_0x8.FreezableArray,0,local_500.ElementSize,
                       local_500.ElementAlignment);
          }
        }
        local_3a8 = local_300;
        local_50c = *(uint *)(local_300 + 1);
        uVar34 = (ulonglong)(int)local_50c;
        plVar37 = (longlong *)*local_300;
        local_3b0 = plVar37 + uVar34 * 2;
        while( true ) {
          plVar14 = local_3b0;
          if ((int)local_3a8[1] != (int)uVar34) {
            local_510 = 0;
            `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_510);
          }
          if (plVar37 == plVar14) {
            return true;
          }
          local_3c0 = FScriptArrayHelper::AddValues(&local_500,1);
          FVar13 = local_res18[0];
          pFVar36 = pFVar33;
          if ((local_500.field1_0x8.FreezableArray)->ArrayNum != 0) {
            uVar34 = (local_500.field1_0x8.FreezableArray)->_padding_;
            if (((local_500.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar34 & 1) != 0))
            {
              uVar34 = (longlong)&(local_500.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar34 >> 0x18);
            }
            pFVar36 = (FProperty *)((longlong)local_500.ElementSize * (longlong)local_3c0 + uVar34);
          }
          pFVar23 = (FProperty *)pFVar23[1]._padding_;
          if ((*plVar37 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar18)) break;
          pTVar8 = (TReferenceControllerBase<1> *)plVar37[1];
          local_2d0.Object = (FJsonValue *)*plVar37;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2d0.SharedReferenceCount.ReferenceController = pTVar8;
          if ((local_2d0.Object == (FJsonValue *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar18)) {
            pcVar11 = (code *)swi(3);
            uVar19 = (*pcVar11)();
            return (bool)uVar19;
          }
          ReadContainerEntry(local_520,&local_2d0,FVar13,local_518,local_3c0,pFVar23,pFVar36);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
          plVar37 = plVar37 + 2;
          uVar34 = (ulonglong)local_50c;
          pFVar23 = local_508;
        }
        pcVar11 = (code *)swi(3);
        uVar19 = (*pcVar11)();
        return (bool)uVar19;
      }
      pTVar6 = local_520->ImportProblems;
      ::FName::ToString(local_res18,&local_1e8);
      ::FString::PrintfImpl
                (&local_4c0,
                 L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Array, got %s.");
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_4c0) &&
          ((FScriptContainerElement *)&local_4c0 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar11 = (code *)swi(3);
        uVar19 = (*pcVar11)();
        return (bool)uVar19;
      }
      iVar20 = pTVar6->ArrayNum;
      if (iVar20 == pTVar6->ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
      }
      lVar31 = (longlong)iVar20;
      pTVar6->ArrayNum = iVar20 + 1;
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) = local_4c0.Data.AllocatorInstance.Data;
      *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_4c0.Data.ArrayNum;
      *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_4c0.Data.ArrayMax;
      local_4c0.Data.ArrayNum = 0;
      local_4c0.Data.ArrayMax = 0;
      local_4c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d0.Data.ArrayNum = 0;
    local_3d0.Data.ArrayMax = 0;
    cVar17 = (**(code **)(pFVar5->_padding_ + 0x58))(pFVar5,&local_3d0);
    if (cVar17 == '\0') {
      local_390 = 0;
      cVar17 = (**(code **)(param_1->Object->_padding_ + 0x28))(param_1->Object,&local_390);
      if (cVar17 != '\0') {
        (**(code **)(*(longlong *)param_5[1]._padding_ + 0x1e8))
                  ((longlong *)param_5[1]._padding_,param_6,local_390);
        FVar30.Data = local_3d0.Data.AllocatorInstance.Data;
        goto LAB_147b067d5;
      }
      pTVar6 = local_520->ImportProblems;
      ::FName::ToString(local_res18,&local_148);
      ::FString::PrintfImpl
                (&local_420,
                 L"Property \'%s\' on row \'%s\' is the incorrect type. Expected Integer, got %s.");
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_420) &&
          ((FScriptContainerElement *)&local_420 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar11 = (code *)swi(3);
        uVar19 = (*pcVar11)();
        return (bool)uVar19;
      }
      iVar20 = pTVar6->ArrayNum;
      if (iVar20 == pTVar6->ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
      }
      lVar31 = (longlong)iVar20;
      pTVar6->ArrayNum = iVar20 + 1;
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) = local_420.Data.AllocatorInstance.Data;
      *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_420.Data.ArrayNum;
      *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_420.Data.ArrayMax;
      local_420.Data.ArrayNum = 0;
      local_420.Data.ArrayMax = 0;
      local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      DataTableUtils::AssignStringToProperty(&local_2f0,&local_3d0,param_5,param_4);
      if (local_2f0.Data.ArrayNum < 2) {
        FVar30.Data = local_3d0.Data.AllocatorInstance.Data;
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
          FVar30.Data = local_3d0.Data.AllocatorInstance.Data;
        }
        goto LAB_147b067d5;
      }
      pTVar6 = local_520->ImportProblems;
      ::FName::ToString(local_res18,&local_168);
      ::FString::PrintfImpl(&local_430,L"Property \'%s\' on row \'%s\' has invalid enum value: %s.")
      ;
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_430) &&
          ((FScriptContainerElement *)&local_430 < pFVar7 + (longlong)pTVar6->ArrayMax * 0x10)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar11 = (code *)swi(3);
        uVar19 = (*pcVar11)();
        return (bool)uVar19;
      }
      iVar20 = pTVar6->ArrayNum;
      if (iVar20 == pTVar6->ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
      }
      lVar31 = (longlong)iVar20;
      pTVar6->ArrayNum = iVar20 + 1;
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      *(undefined8 *)(pFVar7 + lVar31 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar7 + lVar31 * 0x10) = local_430.Data.AllocatorInstance.Data;
      *(int *)(pFVar7 + lVar31 * 0x10 + 8) = local_430.Data.ArrayNum;
      *(int *)(pFVar7 + lVar31 * 0x10 + 0xc) = local_430.Data.ArrayMax;
      local_430.Data.ArrayNum = 0;
      local_430.Data.ArrayMax = 0;
      local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
        local_148.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
      }
    }
    local_1e8.Data.AllocatorInstance.Data = local_3d0.Data.AllocatorInstance.Data;
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
      local_1e8.Data.AllocatorInstance.Data = local_3d0.Data.AllocatorInstance.Data;
    }
  }
LAB_147b067af:
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  return false;
}

// ReadTable @ 147b07dd0

/* WARNING: Removing unreachable block (ram,0x000147b083be) */
/* WARNING: Removing unreachable block (ram,0x000147b08286) */
/* WARNING: Removing unreachable block (ram,0x000147b07fbc) */

bool __thiscall FDataTableImporterJSON::ReadTable(FDataTableImporterJSON *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  FJsonObject *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_98;
  StackState local_88;
  TSharedRef<FJsonObject,1> local_50;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_40;
  
  if ((this->JSONData->Data).ArrayNum < 2) {
    pTVar1 = this->ImportProblems;
    ::FString::FString(&local_d8,L"Input data is empty.");
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar13 + (longlong)pTVar1->ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar9 = pTVar1->ArrayNum;
    if (iVar9 == pTVar1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar9 + 1;
    pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 = local_d8.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_d8.Data.ArrayNum;
    *(int *)(pFVar13 + 0xc) = local_d8.Data.ArrayMax;
    return false;
  }
  if ((this->DataTable->RowStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
    pTVar1 = this->ImportProblems;
    ::FString::FString(&local_c8,L"No RowStruct specified.");
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 < pFVar13 + (longlong)pTVar1->ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar9 = pTVar1->ArrayNum;
    if (iVar9 == pTVar1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar9 + 1;
    pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 = local_c8.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_c8.Data.ArrayNum;
    *(int *)(pFVar13 + 0xc) = local_c8.Data.ArrayMax;
    return false;
  }
  uVar14 = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pTVar11 = TJsonStringReader<wchar_t>::Create(&local_40,this->JSONData);
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar3 = pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  local_88.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Identifier.Data.ArrayNum = 0;
  local_88.Identifier.Data.ArrayMax = 0;
  local_88.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Array.ArrayNum = 0;
  local_88.Array.ArrayMax = 0;
  local_88.Object.Object = (FJsonObject *)0x0;
  local_88.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar7 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar3,&local_88,None);
  if (bVar7) {
    bVar7 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_88,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data,
               local_88.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_88.Array.AllocatorInstance.Data);
    }
    if (local_88.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar7) && (local_98.ArrayNum != 0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      (**(code **)(this->DataTable->_padding_ + 0x2e0))();
      uVar16 = uVar14;
      if (0 < local_98.ArrayNum) {
        do {
          uVar15 = (uint)uVar14;
          uVar10 = 0;
          if ((int)uVar15 < local_98.ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          FVar6.Data = local_98.AllocatorInstance.Data;
          if ((*(longlong *)(local_98.AllocatorInstance.Data + uVar16) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          plVar12 = (longlong *)(**(code **)**(undefined8 **)(FVar6.Data + uVar16))();
          pTVar2 = (TReferenceControllerBase<1> *)plVar12[1];
          pFVar4 = (FJsonObject *)*plVar12;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar4 == (FJsonObject *)0x0) {
            pTVar1 = this->ImportProblems;
            ::FString::PrintfImpl(&local_b8,L"Row \'%d\' is not a valid JSON object.");
            pFVar13 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar13 <= (FScriptContainerElement *)&local_b8) &&
                ((FScriptContainerElement *)&local_b8 < pFVar13 + (longlong)pTVar1->ArrayMax * 0x10)
                ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            iVar9 = pTVar1->ArrayNum;
            if (iVar9 == pTVar1->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
            }
            pTVar1->ArrayNum = iVar9 + 1;
            pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
            *(undefined8 *)pFVar13 = 0;
            *(FScriptContainerElement **)pFVar13 = local_b8.Data.AllocatorInstance.Data;
            local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar13 + 8) = local_b8.Data.ArrayNum;
            *(int *)(pFVar13 + 0xc) = local_b8.Data.ArrayMax;
            local_b8.Data.ArrayNum = 0;
            local_b8.Data.ArrayMax = 0;
          }
          else {
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_50.Object = pFVar4;
            local_50.SharedReferenceCount.ReferenceController = pTVar2;
            ReadRow(this,&local_50,uVar15,false,(FName *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          uVar14 = (ulonglong)(uVar15 + 1);
          uVar16 = uVar16 + 0x10;
        } while ((int)(uVar15 + 1) < local_98.ArrayNum);
      }
      uVar14 = 1;
      iVar9 = local_98.ArrayNum;
      goto LAB_147b083ce;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data,
               local_88.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_88.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_88.Array.AllocatorInstance.Data);
    }
    if (local_88.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Identifier.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = this->ImportProblems;
  ::FString::PrintfImpl(&local_a8,L"Failed to parse the JSON data. Error: %s");
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar13 <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 < pFVar13 + (longlong)pTVar1->ArrayMax * 0x10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar9 = pTVar1->ArrayNum;
  if (iVar9 == pTVar1->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar9 + 1;
  pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  *(FScriptContainerElement **)pFVar13 = local_a8.Data.AllocatorInstance.Data;
  *(int *)(pFVar13 + 8) = local_a8.Data.ArrayNum;
  *(int *)(pFVar13 + 0xc) = local_a8.Data.ArrayMax;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar9 = local_98.ArrayNum;
LAB_147b083ce:
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_98.AllocatorInstance.Data,iVar9);
  if ((TSharedPtr<FJsonValue,1> *)local_98.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return SUB81(uVar14,0);
}

