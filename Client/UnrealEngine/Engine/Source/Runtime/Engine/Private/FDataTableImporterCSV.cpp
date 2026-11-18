// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FDataTableImporterCSV @ 147abae60

FDataTableImporterCSV * __thiscall
FDataTableImporterCSV::FDataTableImporterCSV
          (FDataTableImporterCSV *this,UDataTable *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  
  this->DataTable = param_1;
  (this->CSVData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CSVData).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CSVData).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->CSVData).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  this->ImportProblems = param_3;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FDataTableImporterCSV @ 147abed80

void __thiscall FDataTableImporterCSV::~FDataTableImporterCSV(FDataTableImporterCSV *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->CSVData).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ReadTable @ 147b06810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147b06fc4) */
/* WARNING: Removing unreachable block (ram,0x000147b07229) */
/* WARNING: Removing unreachable block (ram,0x000147b0755b) */
/* WARNING: Removing unreachable block (ram,0x000147b07b68) */
/* WARNING: Removing unreachable block (ram,0x000147b07149) */
/* WARNING: Removing unreachable block (ram,0x000147b06ed6) */
/* WARNING: Removing unreachable block (ram,0x000147b07cd1) */
/* WARNING: Removing unreachable block (ram,0x000147b06a0a) */
/* WARNING: Removing unreachable block (ram,0x000147b06b02) */

bool __thiscall FDataTableImporterCSV::ReadTable(FDataTableImporterCSV *this)

{
  uint *puVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  UDataTable *pUVar3;
  UScriptStruct *pUVar4;
  FName FVar5;
  undefined8 uVar6;
  FProperty *this_00;
  code *pcVar7;
  undefined1 auVar8 [8];
  FDataTableImporterCSV *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FString *pFVar17;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this_01;
  uchar **ppuVar18;
  ulonglong uVar19;
  byte bVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  ForElementType<unsigned_int> FVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  FName *pFVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 auStackY_2e8 [32];
  uint local_298;
  uint local_294;
  FName *local_290;
  undefined1 local_278 [8];
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FDataTableImporterCSV *local_1d0;
  uint local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  longlong local_198;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> local_190;
  FCsvParser local_180;
  FString local_150;
  undefined4 local_13c;
  int local_138;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FString local_108;
  FSparseArrayAllocationInfo local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar33 = 0;
  local_1d0 = this;
  if ((this->CSVData).Data.ArrayNum < 2) {
    pTVar2 = this->ImportProblems;
    ::FString::FString(&local_220,L"Input data is empty.");
    pFVar23 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar23 <= (FScriptContainerElement *)&local_220) &&
        ((FScriptContainerElement *)&local_220 < pFVar23 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    iVar13 = pTVar2->ArrayNum;
    if (iVar13 == pTVar2->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar13 + 1;
    pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar23 = 0;
    *(FScriptContainerElement **)pFVar23 = local_220.Data.AllocatorInstance.Data;
    *(int *)(pFVar23 + 8) = local_220.Data.ArrayNum;
    *(int *)(pFVar23 + 0xc) = local_220.Data.ArrayMax;
  }
  else {
    if ((this->DataTable->RowStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
      FCsvParser::FCsvParser(&local_180,&this->CSVData);
      if (local_180.Rows.ArrayNum < 1) {
        pTVar2 = this->ImportProblems;
        ::FString::FString(&local_200,L"Too few rows (there must be at least a header row).");
        pFVar23 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar23 <= (FScriptContainerElement *)&local_200) &&
            ((FScriptContainerElement *)&local_200 < pFVar23 + (longlong)pTVar2->ArrayMax * 0x10))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        iVar13 = pTVar2->ArrayNum;
        if (iVar13 == pTVar2->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
        }
        pTVar2->ArrayNum = iVar13 + 1;
        pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
        *(undefined8 *)pFVar23 = 0;
        *(FScriptContainerElement **)pFVar23 = local_200.Data.AllocatorInstance.Data;
        *(int *)(pFVar23 + 8) = local_200.Data.ArrayNum;
        *(int *)(pFVar23 + 0xc) = local_200.Data.ArrayMax;
        local_200.Data.ArrayNum = 0;
        local_200.Data.ArrayMax = 0;
        local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        bVar10 = false;
      }
      else {
        local_294 = 0;
        uVar22 = uVar33;
        uVar25 = uVar33;
        uVar31 = uVar33;
        uVar16 = local_294;
        if (1 < (this->DataTable->ImportKeyField).Data.ArrayNum) {
          while( true ) {
            if ((local_180.Rows.ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            uVar27 = (uint)uVar22;
            uVar31 = 0;
            uVar16 = local_294;
            if (*(int *)(local_180.Rows.AllocatorInstance.Data + 8) <= (int)uVar27) break;
            if ((local_180.Rows.ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            FVar21.Data = local_180.Rows.AllocatorInstance.Data;
            uVar16 = 0;
            if ((int)uVar27 < *(int *)(local_180.Rows.AllocatorInstance.Data + 8)) {
              uVar16 = ~uVar27 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            pFVar17 = ::FString::FString(&local_d8,*(wchar_t **)(uVar25 + *(longlong *)FVar21.Data))
            ;
            iVar13 = (pFVar17->Data).ArrayNum;
            iVar14 = (this->DataTable->ImportKeyField).Data.ArrayNum;
            if (iVar14 == iVar13) {
              if (iVar14 < 2) {
                bVar10 = true;
              }
              else {
                iVar13 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)
                                    (this->DataTable->ImportKeyField).Data.AllocatorInstance.Data,
                                    (wchar_t *)(pFVar17->Data).AllocatorInstance.Data);
                bVar10 = iVar13 == 0;
              }
            }
            else {
              bVar10 = iVar13 + iVar14 == 1;
            }
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            uVar31 = uVar22;
            uVar16 = uVar27;
            if (bVar10) break;
            uVar22 = (ulonglong)(uVar27 + 1);
            uVar25 = uVar25 + 8;
          }
        }
        local_294 = uVar16;
        pUVar3 = this->DataTable;
        pTVar2 = this->ImportProblems;
        pUVar4 = (pUVar3->RowStruct).field0_0x0.DebugPtr;
        if ((local_180.Rows.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        iVar13 = (int)uVar31;
        UDataTable::GetTablePropertyArray
                  (pUVar3,&local_190,
                   (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                   local_180.Rows.AllocatorInstance.Data,(UStruct *)pUVar4,pTVar2,iVar13);
        if (this->DataTable->bPreserveExistingValues == '\0') {
          (**(code **)(this->DataTable->_padding_ + 0x2e0))();
        }
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
        ;
        local_88.AllocationFlags.NumBits = 0;
        local_88.AllocationFlags.MaxBits = 0x80;
        local_88.FirstFreeIndex = -1;
        local_88.NumFreeIndices = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = 0;
        local_298 = 1;
        if (1 < local_180.Rows.ArrayNum) {
          local_198 = 0x10;
          do {
            lVar32 = local_198;
            pFVar28 = (FName *)0x0;
            uVar16 = 0;
            if ((int)local_298 < local_180.Rows.ArrayNum) {
              uVar16 = ~local_298 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            pFVar23 = local_180.Rows.AllocatorInstance.Data + lVar32;
            if ((int)uVar31 < *(int *)(pFVar23 + 8)) {
              if (local_190.ArrayNum < *(int *)(pFVar23 + 8)) {
                pTVar2 = this->ImportProblems;
                ::FString::PrintfImpl
                          (&local_1e0,
                           L"Row \'%d\' has more cells than properties, is there a malformed string?"
                          );
                pFVar23 = (pTVar2->AllocatorInstance).Data;
                if (((pFVar23 <= (FScriptContainerElement *)&local_1e0) &&
                    ((FScriptContainerElement *)&local_1e0 <
                     pFVar23 + (longlong)pTVar2->ArrayMax * 0x10)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                iVar14 = pTVar2->ArrayNum;
                if (iVar14 == pTVar2->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
                }
                pTVar2->ArrayNum = iVar14 + 1;
                pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
                *(undefined8 *)pFVar23 = 0;
                *(FScriptContainerElement **)pFVar23 = local_1e0.Data.AllocatorInstance.Data;
                local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(pFVar23 + 8) = local_1e0.Data.ArrayNum;
                *(int *)(pFVar23 + 0xc) = local_1e0.Data.ArrayMax;
                local_1e0.Data.ArrayNum = 0;
                local_1e0.Data.ArrayMax = 0;
              }
              else {
                if (((int)uVar31 < 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  uVar11 = (*pcVar7)();
                  return (bool)uVar11;
                }
                ::FString::FString(&local_108,
                                   *(wchar_t **)(*(longlong *)pFVar23 + (longlong)iVar13 * 8));
                DataTableUtils::MakeValidName((FString *)local_278);
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                auVar8 = local_278;
                pUVar3 = this->DataTable;
                if ((FName)local_278 == (FName)0x0) {
                  pTVar2 = this->ImportProblems;
                  if ((pUVar3->ImportKeyField).Data.ArrayNum < 2) {
                    ::FString::PrintfImpl(&local_260,L"Row \'%d\' missing a name.");
                    pFVar23 = (pTVar2->AllocatorInstance).Data;
                    if (((pFVar23 <= (FScriptContainerElement *)&local_260) &&
                        ((FScriptContainerElement *)&local_260 <
                         pFVar23 + (longlong)pTVar2->ArrayMax * 0x10)) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      uVar11 = (*pcVar7)();
                      return (bool)uVar11;
                    }
                    iVar14 = pTVar2->ArrayNum;
                    if (iVar14 == pTVar2->ArrayMax) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
                    }
                    pTVar2->ArrayNum = iVar14 + 1;
                    pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
                    *(undefined8 *)pFVar23 = 0;
                    *(FScriptContainerElement **)pFVar23 = local_260.Data.AllocatorInstance.Data;
                    local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    *(int *)(pFVar23 + 8) = local_260.Data.ArrayNum;
                    *(int *)(pFVar23 + 0xc) = local_260.Data.ArrayMax;
                    local_260.Data.ArrayNum = 0;
                    local_260.Data.ArrayMax = 0;
                  }
                  else {
                    ::FString::PrintfImpl(&local_270,L"Row \'%d\' missing key field \'%s\'.");
                    pFVar23 = (pTVar2->AllocatorInstance).Data;
                    if (((pFVar23 <= (FScriptContainerElement *)&local_270) &&
                        ((FScriptContainerElement *)&local_270 <
                         pFVar23 + (longlong)pTVar2->ArrayMax * 0x10)) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      uVar11 = (*pcVar7)();
                      return (bool)uVar11;
                    }
                    iVar14 = pTVar2->ArrayNum;
                    if (iVar14 == pTVar2->ArrayMax) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
                    }
                    pTVar2->ArrayNum = iVar14 + 1;
                    pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
                    *(undefined8 *)pFVar23 = 0;
                    *(FScriptContainerElement **)pFVar23 = local_270.Data.AllocatorInstance.Data;
                    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    *(int *)(pFVar23 + 8) = local_270.Data.ArrayNum;
                    *(int *)(pFVar23 + 0xc) = local_270.Data.ArrayMax;
                    local_270.Data.ArrayNum = 0;
                    local_270.Data.ArrayMax = 0;
                  }
                }
                else {
                  local_290 = pFVar28;
                  if ((pUVar3->bPreserveExistingValues != '\0') &&
                     ((pUVar3->RowStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
                    this_01 = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                               *)(**(code **)(pUVar3->_padding_ + 0x2d0))();
                    ppuVar18 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                               ::Find(this_01,(FName)auVar8);
                    if (ppuVar18 != (uchar **)0x0) {
                      local_290 = (FName *)*ppuVar18;
                    }
                  }
                  cVar12 = (**(code **)(this->DataTable->_padding_ + 0x2d8))();
                  if (cVar12 == '\0') {
                    if (local_88.NumFreeIndices == 0) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x10,4,1,(ForAnyElementType *)&local_88,
                                          &local_88.Data.ArrayNum,&local_88.Data.ArrayMax);
                      iVar15 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                         (&local_88.AllocationFlags,1);
                      FVar24 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
                      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                          (ForElementType<unsigned_int>)0x0) {
                        FVar24 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
                      }
                      bVar20 = (byte)iVar15 & 0x1f;
                      if (iVar15 < 0) {
                        iVar15 = iVar15 + 0x1f;
                        bVar20 = bVar20 - 0x20;
                      }
                      puVar1 = (uint *)((longlong)FVar24 + (longlong)(iVar15 >> 5) * 4);
                      *puVar1 = *puVar1 & ~(1 << (bVar20 & 0x1f));
                      iVar15 = local_88.FirstFreeIndex;
                    }
                    else {
                      local_88.NumFreeIndices = local_88.NumFreeIndices + -1;
                      iVar15 = *(int *)(local_88.Data.AllocatorInstance.Data +
                                       (longlong)local_88.FirstFreeIndex * 0x10 + 4);
                      iVar14 = local_88.FirstFreeIndex;
                      if (local_88.NumFreeIndices != 0) {
                        *(undefined4 *)
                         (local_88.Data.AllocatorInstance.Data + (longlong)iVar15 * 0x10) =
                             0xffffffff;
                      }
                    }
                    local_88.FirstFreeIndex = iVar15;
                    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::AllocateIndex(&local_88,&local_f8,iVar14);
                    iVar14 = local_f8.Index;
                    if (local_f8.Pointer != (FName *)0x0) {
                      *(undefined1 (*) [8])local_f8.Pointer = local_278;
                      (((FName *)((longlong)local_f8.Pointer + 8))->ComparisonIndex).Value =
                           0xffffffff;
                      pFVar28 = local_f8.Pointer;
                    }
                    FVar5 = *pFVar28;
                    uVar16 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
                    uVar16 = uVar16 + FVar5.Number;
                    if ((local_88.Data.ArrayNum - local_88.NumFreeIndices != 1) &&
                       (local_88.Data.ArrayNum != local_88.NumFreeIndices)) {
                      FVar21.Data = local_50;
                      if (local_48.Data != (FScriptContainerElement *)0x0) {
                        FVar21.Data = local_48.Data;
                      }
                      for (iVar15 = *(int *)(FVar21.Data + (ulonglong)(local_40 - 1 & uVar16) * 4);
                          iVar15 != -1;
                          iVar15 = *(int *)(local_88.Data.AllocatorInstance.Data +
                                           (longlong)iVar15 * 0x10 + 8)) {
                        if (*(FName *)(local_88.Data.AllocatorInstance.Data +
                                      (longlong)iVar15 * 0x10) == *pFVar28) {
                          if (iVar15 != -1) {
                            *(FName *)(local_88.Data.AllocatorInstance.Data +
                                      (longlong)iVar15 * 0x10) = *pFVar28;
                            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ::RemoveAtUninitialized(&local_88,iVar14,1);
                            pTVar2 = this->ImportProblems;
                            ::FName::ToString((FName *)local_278,&local_c8);
                            ::FString::PrintfImpl(&local_250,L"Duplicate row name \'%s\'.");
                            pFVar23 = (pTVar2->AllocatorInstance).Data;
                            if (((pFVar23 <= (FScriptContainerElement *)&local_250) &&
                                ((FScriptContainerElement *)&local_250 <
                                 pFVar23 + (longlong)pTVar2->ArrayMax * 0x10)) &&
                               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar10)) {
                              pcVar7 = (code *)swi(3);
                              uVar11 = (*pcVar7)();
                              return (bool)uVar11;
                            }
                            iVar14 = pTVar2->ArrayNum;
                            if (iVar14 == pTVar2->ArrayMax) {
                              iVar14 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax
                                                 );
                            }
                            pTVar2->ArrayNum = iVar14 + 1;
                            pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
                            *(undefined8 *)pFVar23 = 0;
                            *(FScriptContainerElement **)pFVar23 =
                                 local_250.Data.AllocatorInstance.Data;
                            *(int *)(pFVar23 + 8) = local_250.Data.ArrayNum;
                            *(int *)(pFVar23 + 0xc) = local_250.Data.ArrayMax;
                            local_250.Data.ArrayNum = 0;
                            local_250.Data.ArrayMax = 0;
                            local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            if (local_c8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                            }
                            goto LAB_147b07ceb;
                          }
                          break;
                        }
                      }
                    }
                    uVar22 = 0;
                    uVar30 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
                    uVar27 = 1;
                    if (3 < uVar30) {
                      uVar25 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
                      lVar32 = 0x3f;
                      if (uVar25 != 0) {
                        for (; uVar25 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                        }
                      }
                      local_13c = (undefined4)lVar32;
                      uVar27 = 1 << ((byte)lVar32 & 0x1f);
                    }
                    if (((int)uVar30 < 1) || ((int)uVar27 <= (int)local_40)) {
                      uVar16 = local_40 - 1 & uVar16;
                      pFVar28[1].Number = uVar16;
                      FVar21.Data = local_50;
                      if (local_48.Data != (FScriptContainerElement *)0x0) {
                        FVar21.Data = local_48.Data;
                      }
                      uVar22 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
                      pFVar28[1].ComparisonIndex.Value = *(uint *)(FVar21.Data + uVar22 * 4);
                      *(int *)(FVar21.Data + uVar22 * 4) = iVar14;
                    }
                    else {
                      local_40 = uVar27;
                      if (local_48.Data != (FScriptContainerElement *)0x0) {
                        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                  (&local_48,0,0,4);
                      }
                      if (uVar27 != 0) {
                        uVar16 = uVar27;
                        if (uVar27 < 2) {
                          if (local_48.Data != (FScriptContainerElement *)0x0) {
                            uVar16 = 0;
                            goto LAB_147b07603;
                          }
                        }
                        else {
LAB_147b07603:
                          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                    (&local_48,0,uVar16,4);
                        }
                        if (0 < (int)uVar27) {
                          uVar31 = (ulonglong)uVar27;
                          uVar25 = uVar22;
                          do {
                            FVar21.Data = local_50;
                            if (local_48.Data != (FScriptContainerElement *)0x0) {
                              FVar21.Data = local_48.Data;
                            }
                            uVar19 = uVar25 & (longlong)(int)uVar27 - 1U;
                            uVar25 = uVar25 + 1;
                            *(undefined4 *)(FVar21.Data + uVar19 * 4) = 0xffffffff;
                            uVar31 = uVar31 - 1;
                          } while (uVar31 != 0);
                        }
                      }
                      if (local_40 != 0) {
                        pTStack_1c0 = &local_88.AllocationFlags;
                        local_1c8 = 0;
                        uStack_1c4 = 1;
                        uStack_1b4 = 0;
                        uStack_1b0 = 0;
                        if (local_88.AllocationFlags.NumBits != 0) {
                          FVar24 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
                          if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                              (ForElementType<unsigned_int>)0x0) {
                            FVar24 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
                          }
                          uVar16 = *(uint *)FVar24;
                          uVar25 = uVar22;
                          while (uVar16 == 0) {
                            uStack_1b0 = (int)uVar25 + 0x20;
                            uVar25 = (ulonglong)uStack_1b0;
                            iVar14 = (int)uVar22;
                            local_1c8 = iVar14 + 1;
                            uVar22 = (ulonglong)local_1c8;
                            if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                                     ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU))
                                >> 5 < (int)local_1c8) goto LAB_147b0771e;
                            uVar16 = *(uint *)((uchar *)((longlong)FVar24 + 4) +
                                              (longlong)iVar14 * 4);
                          }
                          uStack_1c4 = -uVar16 & uVar16;
                          uVar22 = (ulonglong)uStack_1c4 * 2 + 1;
                          lVar32 = 0x3f;
                          if (uVar22 != 0) {
                            for (; uVar22 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                            }
                          }
                          local_138 = (int)lVar32;
                          uStack_1b4 = local_138 + -1 + uStack_1b0;
                          uVar22 = (ulonglong)uStack_1b4;
                          if (local_88.AllocationFlags.NumBits < (int)uStack_1b4) {
LAB_147b0771e:
                            uVar22 = (ulonglong)(uint)local_88.AllocationFlags.NumBits;
                            uStack_1b4 = local_88.AllocationFlags.NumBits;
                          }
                        }
                        local_1b8 = 0xffffffff;
                        local_130 = &local_88;
                        local_128._padding_ = CONCAT44(uStack_1c4,local_1c8);
                        local_128.CurrentBitIndex = uStack_1b4;
                        local_128.UnvisitedBitMask = 0xffffffff;
                        local_128._28_4_ = uStack_1ac;
                        local_128.BaseBitIndex = uStack_1b0;
                        local_128.Array = pTStack_1c0;
                        if ((int)uVar22 < local_88.AllocationFlags.NumBits) {
                          do {
                            pFVar29 = (local_130->Data).AllocatorInstance.Data +
                                      (longlong)(int)uVar22 * 0x10;
                            uVar6 = *(undefined8 *)pFVar29;
                            uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
                            uVar16 = local_40 - 1 & uVar16 + (int)((ulonglong)uVar6 >> 0x20);
                            *(uint *)(pFVar29 + 0xc) = uVar16;
                            FVar21.Data = local_50;
                            if (local_48.Data != (FScriptContainerElement *)0x0) {
                              FVar21.Data = local_48.Data;
                            }
                            uVar25 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
                            *(undefined4 *)(pFVar29 + 8) = *(undefined4 *)(FVar21.Data + uVar25 * 4)
                            ;
                            *(int *)(FVar21.Data + uVar25 * 4) = (int)uVar22;
                            local_128.UnvisitedBitMask =
                                 local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
                            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                      (&local_128);
                            uVar22 = (ulonglong)(uint)local_128.CurrentBitIndex;
                          } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
                        }
                      }
                    }
                  }
                  if (local_290 == (FName *)0x0) {
                    pUVar4 = (this->DataTable->RowStruct).field0_0x0.DebugPtr;
                    iVar14 = (int)*(short *)((longlong)&pUVar4->_padding_ + 4);
                    local_290 = FMemory::Malloc((longlong)
                                                ((int)pUVar4->_padding_ + -1 + iVar14 & -iVar14),0);
                    pUVar4 = (this->DataTable->RowStruct).field0_0x0.DebugPtr;
                    (**(code **)(pUVar4->_padding_ + 0x2f8))(pUVar4,local_290,1);
                    (**(code **)(this->DataTable->_padding_ + 0x2b8))
                              (this->DataTable,local_278,local_290);
                  }
                  iVar14 = *(int *)(pFVar23 + 8);
                  uVar16 = 0;
                  lVar32 = 0;
                  if (0 < iVar14) {
                    do {
                      if (lVar32 != iVar13) {
                        uVar27 = 0;
                        if ((int)uVar16 < local_190.ArrayNum) {
                          uVar27 = ~uVar16 >> 0x1f;
                        }
                        if ((uVar27 == 0) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar10)) {
                          pcVar7 = (code *)swi(3);
                          uVar11 = (*pcVar7)();
                          return (bool)uVar11;
                        }
                        this_00 = *(FProperty **)(local_190.AllocatorInstance.Data + lVar32 * 8);
                        uVar27 = 0;
                        if ((int)uVar16 < *(int *)(pFVar23 + 8)) {
                          uVar27 = ~uVar16 >> 0x1f;
                        }
                        if ((uVar27 == 0) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar10)) {
                          pcVar7 = (code *)swi(3);
                          uVar11 = (*pcVar7)();
                          return (bool)uVar11;
                        }
                        ::FString::FString(&local_1a8,
                                           *(wchar_t **)(*(longlong *)pFVar23 + lVar32 * 8));
                        pFVar9 = local_1d0;
                        if ((local_1d0->DataTable->bPreserveExistingValues == '\0') ||
                           (1 < local_1a8.Data.ArrayNum)) {
                          DataTableUtils::AssignStringToProperty
                                    (&local_150,&local_1a8,this_00,(uchar *)local_290);
                          iVar14 = local_150.Data.ArrayNum + -1;
                          if (local_150.Data.ArrayNum == 0) {
                            iVar14 = 0;
                          }
                          if (0 < iVar14) {
                            if (this_00 == (FProperty *)0x0) {
                              uVar27 = (uint)uVar33 | 2;
                              pFVar17 = ::FString::FString(&local_b8,L"NONE");
                            }
                            else {
                              uVar27 = (uint)uVar33 | 1;
                              FField::GetAuthoredName((FField *)this_00,&local_e8);
                              pFVar17 = &local_e8;
                            }
                            uVar33 = (ulonglong)uVar27;
                            pFVar29 = (pFVar17->Data).AllocatorInstance.Data;
                            (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            (pFVar17->Data).ArrayNum = 0;
                            (pFVar17->Data).ArrayMax = 0;
                            if (((uVar27 & 2) != 0) &&
                               (uVar33 = (ulonglong)(uVar27 & 0xfffffffd),
                               local_b8.Data.AllocatorInstance.Data !=
                               (FScriptContainerElement *)0x0)) {
                              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                            }
                            if (((uVar33 & 1) != 0) &&
                               (uVar33 = (ulonglong)((uint)uVar33 & 0xfffffffe),
                               local_e8.Data.AllocatorInstance.Data !=
                               (FScriptContainerElement *)0x0)) {
                              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                            }
                            pTVar2 = pFVar9->ImportProblems;
                            ::FName::ToString((FName *)local_278,&local_a8);
                            ::FString::PrintfImpl
                                      (&local_240,
                                       L"Problem assigning string \'%s\' to property \'%s\' on row \'%s\' : %s"
                                      );
                            pFVar26 = (pTVar2->AllocatorInstance).Data;
                            if (((pFVar26 <= (FScriptContainerElement *)&local_240) &&
                                ((FScriptContainerElement *)&local_240 <
                                 pFVar26 + (longlong)pTVar2->ArrayMax * 0x10)) &&
                               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar10)) {
                              pcVar7 = (code *)swi(3);
                              uVar11 = (*pcVar7)();
                              return (bool)uVar11;
                            }
                            iVar14 = pTVar2->ArrayNum;
                            if (iVar14 == pTVar2->ArrayMax) {
                              iVar14 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax
                                                 );
                            }
                            pTVar2->ArrayNum = iVar14 + 1;
                            pFVar26 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
                            *(undefined8 *)pFVar26 = 0;
                            *(FScriptContainerElement **)pFVar26 =
                                 local_240.Data.AllocatorInstance.Data;
                            *(int *)(pFVar26 + 8) = local_240.Data.ArrayNum;
                            *(int *)(pFVar26 + 0xc) = local_240.Data.ArrayMax;
                            local_240.Data.ArrayNum = 0;
                            local_240.Data.ArrayMax = 0;
                            local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            if (local_a8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                            }
                            if (pFVar29 != (FScriptContainerElement *)0x0) {
                              FMemory::Free(pFVar29);
                            }
                          }
                          if (local_150.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_150.Data.AllocatorInstance.Data);
                          }
                        }
                        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                        }
                      }
                      iVar14 = *(int *)(pFVar23 + 8);
                      uVar16 = uVar16 + 1;
                      lVar32 = lVar32 + 1;
                    } while ((int)uVar16 < iVar14);
                  }
                  this = local_1d0;
                  if (iVar14 < local_190.ArrayNum) {
                    pTVar2 = local_1d0->ImportProblems;
                    ::FName::ToString((FName *)local_278,&local_98);
                    ::FString::PrintfImpl(&local_230,L"Too few cells on row \'%s\'.");
                    pFVar23 = (pTVar2->AllocatorInstance).Data;
                    if (((pFVar23 <= (FScriptContainerElement *)&local_230) &&
                        ((FScriptContainerElement *)&local_230 <
                         pFVar23 + (longlong)pTVar2->ArrayMax * 0x10)) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar10)) {
                      pcVar7 = (code *)swi(3);
                      uVar11 = (*pcVar7)();
                      return (bool)uVar11;
                    }
                    iVar14 = pTVar2->ArrayNum;
                    if (iVar14 == pTVar2->ArrayMax) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
                    }
                    pTVar2->ArrayNum = iVar14 + 1;
                    pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
                    *(undefined8 *)pFVar23 = 0;
                    *(FScriptContainerElement **)pFVar23 = local_230.Data.AllocatorInstance.Data;
                    *(int *)(pFVar23 + 8) = local_230.Data.ArrayNum;
                    *(int *)(pFVar23 + 0xc) = local_230.Data.ArrayMax;
                    local_230.Data.ArrayNum = 0;
                    local_230.Data.ArrayMax = 0;
                    local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_98.Data.AllocatorInstance.Data);
                    }
                  }
LAB_147b07ceb:
                  uVar31 = (ulonglong)local_294;
                }
              }
            }
            else {
              pTVar2 = this->ImportProblems;
              ::FString::PrintfImpl(&local_1f0,L"Row \'%d\' has too few cells.");
              pFVar23 = (pTVar2->AllocatorInstance).Data;
              if (((pFVar23 <= (FScriptContainerElement *)&local_1f0) &&
                  ((FScriptContainerElement *)&local_1f0 <
                   pFVar23 + (longlong)pTVar2->ArrayMax * 0x10)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar7 = (code *)swi(3);
                uVar11 = (*pcVar7)();
                return (bool)uVar11;
              }
              iVar14 = pTVar2->ArrayNum;
              if (iVar14 == pTVar2->ArrayMax) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
              }
              pTVar2->ArrayNum = iVar14 + 1;
              pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
              *(undefined8 *)pFVar23 = 0;
              *(FScriptContainerElement **)pFVar23 = local_1f0.Data.AllocatorInstance.Data;
              local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar23 + 8) = local_1f0.Data.ArrayNum;
              *(int *)(pFVar23 + 0xc) = local_1f0.Data.ArrayMax;
              local_1f0.Data.ArrayNum = 0;
              local_1f0.Data.ArrayMax = 0;
            }
            local_298 = local_298 + 1;
            local_198 = local_198 + 0x10;
          } while ((int)local_298 < local_180.Rows.ArrayNum);
        }
        bVar10 = true;
        local_40 = 0;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
        TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&local_88);
        if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.AllocatorInstance.Data);
        }
      }
      DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
                ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                 local_180.Rows.AllocatorInstance.Data,local_180.Rows.ArrayNum);
      if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
          local_180.Rows.AllocatorInstance.Data !=
          (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_180.Rows.AllocatorInstance.Data);
      }
      if (local_180.SourceString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return bVar10;
      }
      FMemory::Free(local_180.SourceString.Data.AllocatorInstance.Data);
      return bVar10;
    }
    pTVar2 = this->ImportProblems;
    ::FString::FString(&local_210,L"No RowStruct specified.");
    pFVar23 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar23 <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 < pFVar23 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    iVar13 = pTVar2->ArrayNum;
    if (iVar13 == pTVar2->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar13 + 1;
    pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar23 = 0;
    *(FScriptContainerElement **)pFVar23 = local_210.Data.AllocatorInstance.Data;
    *(int *)(pFVar23 + 8) = local_210.Data.ArrayNum;
    *(int *)(pFVar23 + 0xc) = local_210.Data.ArrayMax;
  }
  return false;
}

