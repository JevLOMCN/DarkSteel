// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 10

// ~FMockChunkDataSerialization @ 143288a80

void __thiscall
BuildPatchServices::FMockChunkDataSerialization::~FMockChunkDataSerialization
          (FMockChunkDataSerialization *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->SaveToArchiveFunc != 0) {
    plVar1 = *(longlong **)&(this->SaveToArchiveFunc).field_0x28;
    plVar3 = (longlong *)&(this->SaveToArchiveFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->TxLoadFromArchive).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TxLoadFromMemory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TxLoadFromFile).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash>,int>
            ((TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash> *)
             (this->RxInjectShaToChunkData).AllocatorInstance.Data,
             (this->RxInjectShaToChunkData).ArrayNum);
  pFVar2 = (this->RxInjectShaToChunkData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RxSaveToArchive).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RxLoadFromArchive).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult>,int>
            ((TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,BuildPatchServices::EChunkLoadResult>
              *)(this->RxLoadFromMemory).AllocatorInstance.Data,(this->RxLoadFromMemory).ArrayNum);
  pFVar2 = (this->RxLoadFromMemory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<FString,BuildPatchServices::IChunkDataAccess_const_*>,int>
            ((TTuple<FString,BuildPatchServices::IChunkDataAccess_const_*> *)
             (this->RxSaveToFile).AllocatorInstance.Data,(this->RxSaveToFile).ArrayNum);
  pFVar2 = (this->RxSaveToFile).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<FString,enum_BuildPatchServices::EChunkLoadResult>,int>
            ((TTuple<FString,BuildPatchServices::EChunkLoadResult> *)
             (this->RxLoadFromFile).AllocatorInstance.Data,(this->RxLoadFromFile).ArrayNum);
  pFVar2 = (this->RxLoadFromFile).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IChunkDataSerialization_BuildPatchServices__6B_;
  return;
}

// DecompressValidatedRead @ 1432cbc10

bool __thiscall
BuildPatchServices::FMockChunkDataSerialization::DecompressValidatedRead
          (FMockChunkDataSerialization *this,FChunkHeader *param_1,TMemoryView<void> *param_2,
          FUniqueBuffer *param_3)

{
  return false;
}

// InjectShaToChunkData @ 1432db4a0

void __thiscall
BuildPatchServices::FMockChunkDataSerialization::InjectShaToChunkData
          (FMockChunkDataSerialization *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FSHAHash *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->RxInjectShaToChunkData).ArrayNum;
  piVar1 = &(this->RxInjectShaToChunkData).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->RxInjectShaToChunkData).AllocatorInstance,piVar1);
  }
  (this->RxInjectShaToChunkData).ArrayNum = iVar2 + 1;
  TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash>::
  TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,FSHAHash_const_&>
            ((TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FSHAHash> *)
             ((this->RxInjectShaToChunkData).AllocatorInstance.Data + (longlong)iVar2 * 0x28),
             param_1,param_2);
  return;
}

// LoadFromArchive @ 1432dcd30

IChunkDataAccess * __thiscall
BuildPatchServices::FMockChunkDataSerialization::LoadFromArchive
          (FMockChunkDataSerialization *this,FArchive *param_1,EChunkLoadResult *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  IChunkDataAccess *pIVar7;
  int iVar8;
  
  iVar6 = (this->TxLoadFromArchive).ArrayNum;
  pIVar7 = (IChunkDataAccess *)0x0;
  if (iVar6 != 0) {
    if (iVar6 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pIVar7 = (IChunkDataAccess *)(*pcVar3)();
        return pIVar7;
      }
    }
    iVar6 = (this->TxLoadFromArchive).ArrayNum;
    iVar8 = iVar6 + -1;
    pFVar2 = (this->TxLoadFromArchive).AllocatorInstance.Data + (longlong)iVar6 * 0x10 + -0x10;
    pIVar7 = *(IChunkDataAccess **)pFVar2;
    uVar4 = *(undefined8 *)(pFVar2 + 8);
    (this->TxLoadFromArchive).ArrayNum = iVar8;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->TxLoadFromArchive).AllocatorInstance,iVar8,
               &(this->TxLoadFromArchive).ArrayMax);
    *param_2 = (EChunkLoadResult)uVar4;
  }
  iVar6 = (this->RxLoadFromArchive).ArrayNum;
  piVar1 = &(this->RxLoadFromArchive).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->RxLoadFromArchive).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->RxLoadFromArchive).AllocatorInstance.Data;
  (this->RxLoadFromArchive).ArrayNum = iVar6 + 1;
  pFVar2[iVar6] = (FScriptContainerElement)*param_2;
  return pIVar7;
}

// LoadFromFile @ 1432dce40

IChunkDataAccess * __thiscall
BuildPatchServices::FMockChunkDataSerialization::LoadFromFile
          (FMockChunkDataSerialization *this,FString *param_1,EChunkLoadResult *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  IChunkDataAccess *pIVar7;
  int iVar8;
  
  iVar6 = (this->TxLoadFromFile).ArrayNum;
  pIVar7 = (IChunkDataAccess *)0x0;
  if (iVar6 != 0) {
    if (iVar6 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pIVar7 = (IChunkDataAccess *)(*pcVar3)();
        return pIVar7;
      }
    }
    iVar6 = (this->TxLoadFromFile).ArrayNum;
    iVar8 = iVar6 + -1;
    pFVar2 = (this->TxLoadFromFile).AllocatorInstance.Data + (longlong)iVar6 * 0x10 + -0x10;
    pIVar7 = *(IChunkDataAccess **)pFVar2;
    uVar4 = *(undefined8 *)(pFVar2 + 8);
    (this->TxLoadFromFile).ArrayNum = iVar8;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->TxLoadFromFile).AllocatorInstance,iVar8,
               &(this->TxLoadFromFile).ArrayMax);
    *param_2 = (EChunkLoadResult)uVar4;
  }
  iVar6 = (this->RxLoadFromFile).ArrayNum;
  piVar1 = &(this->RxLoadFromFile).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxLoadFromFile).AllocatorInstance,piVar1);
  }
  (this->RxLoadFromFile).ArrayNum = iVar6 + 1;
  pFVar2 = (this->RxLoadFromFile).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
  ::FString::FString((FString *)pFVar2,param_1);
  *(EChunkLoadResult *)
   &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2[0x10].field_0x0)->AllocatorInstance).
    Data = *param_2;
  return pIVar7;
}

// LoadFromMemory @ 1432dd140

IChunkDataAccess * __thiscall
BuildPatchServices::FMockChunkDataSerialization::LoadFromMemory
          (FMockChunkDataSerialization *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,EChunkLoadResult *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  IChunkDataAccess *pIVar7;
  int iVar8;
  
  iVar6 = (this->TxLoadFromMemory).ArrayNum;
  pIVar7 = (IChunkDataAccess *)0x0;
  if (iVar6 != 0) {
    if (iVar6 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pIVar7 = (IChunkDataAccess *)(*pcVar3)();
        return pIVar7;
      }
    }
    iVar6 = (this->TxLoadFromMemory).ArrayNum;
    iVar8 = iVar6 + -1;
    pFVar2 = (this->TxLoadFromMemory).AllocatorInstance.Data + (longlong)iVar6 * 0x10 + -0x10;
    pIVar7 = *(IChunkDataAccess **)pFVar2;
    uVar4 = *(undefined8 *)(pFVar2 + 8);
    (this->TxLoadFromMemory).ArrayNum = iVar8;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->TxLoadFromMemory).AllocatorInstance,iVar8,
               &(this->TxLoadFromMemory).ArrayMax);
    *param_2 = (EChunkLoadResult)uVar4;
  }
  iVar6 = (this->RxLoadFromMemory).ArrayNum;
  piVar1 = &(this->RxLoadFromMemory).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxLoadFromMemory).AllocatorInstance,piVar1);
  }
  (this->RxLoadFromMemory).ArrayNum = iVar6 + 1;
  TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult>
  ::
  TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,enum_BuildPatchServices::EChunkLoadResult_&>
            ((this->RxLoadFromMemory).AllocatorInstance.Data + (longlong)iVar6 * 0x18,param_1,
             param_2);
  return pIVar7;
}

// SaveToArchive @ 1432ec430

EChunkSaveResult __thiscall
BuildPatchServices::FMockChunkDataSerialization::SaveToArchive
          (FMockChunkDataSerialization *this,FArchive *param_1,IChunkDataAccess *param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  EChunkSaveResult EVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  IChunkDataAccess *local_res8;
  
  EVar4 = Success;
  if (*(void **)&this->SaveToArchiveFunc != (void *)0x0) {
    local_res8 = param_2;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->SaveToArchiveFunc);
    pcVar2 = *(code **)&this->SaveToArchiveFunc;
    plVar3 = *(longlong **)&(this->SaveToArchiveFunc).field_0x28;
    plVar7 = (longlong *)&(this->SaveToArchiveFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    EVar4 = (*pcVar2)(uVar6,param_1,&local_res8);
  }
  iVar5 = (this->RxSaveToArchive).ArrayNum;
  piVar1 = &(this->RxSaveToArchive).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->RxSaveToArchive).AllocatorInstance,piVar1);
  }
  (this->RxSaveToArchive).ArrayNum = iVar5 + 1;
  *(IChunkDataAccess **)((this->RxSaveToArchive).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       param_2;
  return EVar4;
}

// SaveToFile @ 1432ec4e0

EChunkSaveResult __thiscall
BuildPatchServices::FMockChunkDataSerialization::SaveToFile
          (FMockChunkDataSerialization *this,FString *param_1,IChunkDataAccess *param_2)

{
  int *piVar1;
  FScriptContainerElement *this_00;
  int iVar2;
  
  iVar2 = (this->RxSaveToFile).ArrayNum;
  piVar1 = &(this->RxSaveToFile).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxSaveToFile).AllocatorInstance,piVar1);
  }
  (this->RxSaveToFile).ArrayNum = iVar2 + 1;
  this_00 = (this->RxSaveToFile).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
  ::FString::FString((FString *)this_00,param_1);
  *(IChunkDataAccess **)(this_00 + 0x10) = param_2;
  return Success;
}

// SaveToMemory @ 1432ec560

/* WARNING: Enum "Type": Some values do not have unique names */

EChunkSaveResult __thiscall
BuildPatchServices::FMockChunkDataSerialization::SaveToMemory
          (FMockChunkDataSerialization *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,IChunkDataAccess *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_BuildPatchServices::EChunkSaveResult___cdecl_BuildPatchServices::FMockChunkDataSerialization::SaveToMemory(TArray<unsigned_char,TSizedDefaultAllocator<32>_>&___ptr64,BuildPatchServices::IChunkDataAccess_const*___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return SerializationError;
}

// ValidateAndRead @ 1432f6580

bool __thiscall
BuildPatchServices::FMockChunkDataSerialization::ValidateAndRead
          (FMockChunkDataSerialization *this,FArchive *param_1,TMemoryView<void> *param_2,
          FChunkHeader *param_3,FUniqueBuffer *param_4)

{
  return false;
}

