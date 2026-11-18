// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// LoadFromMemory @ 1432dcf70

IChunkDataAccess * __thiscall
BuildPatchServices::FFakeChunkDataSerialization::LoadFromMemory
          (FFakeChunkDataSerialization *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,EChunkLoadResult *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  IChunkDataAccess *pIVar5;
  int iVar6;
  EChunkLoadResult EStack_c0;
  FMemoryReader local_b8;
  
  if (*(int *)&this->field_0x80 == 0) {
    pIVar5 = ::operator_new(0x90);
    if (pIVar5 != (IChunkDataAccess *)0x0) {
      *pIVar5 = (IChunkDataAccess)&___7FFakeChunkDataAccess_BuildPatchServices__6B_;
      FChunkHeader::FChunkHeader((FChunkHeader *)(pIVar5 + 1));
      pIVar5[10] = (IChunkDataAccess)0x0;
      pIVar5[0xc] = (IChunkDataAccess)0x0;
      pIVar5[0x11] = (IChunkDataAccess)0x0;
      pIVar5[4] = (IChunkDataAccess)0x0;
    }
    FMemoryReader::FMemoryReader(&local_b8,param_1,false);
    BuildPatchServices::operator<<((FArchive *)&local_b8,(FChunkHeader *)(pIVar5 + 1));
    *param_2 = Success;
    iVar6 = *(int *)&this->field_0x30;
    if (iVar6 == *(int *)&this->field_0x34) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    *(int *)&this->field_0x30 = iVar6 + 1;
    TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult>
    ::
    TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,enum_BuildPatchServices::EChunkLoadResult_&>
              ((void *)(*(longlong *)&this->field_0x28 + (longlong)iVar6 * 0x18),param_1,param_2);
    FArchive::~FArchive((FArchive *)&local_b8);
  }
  else {
    if ((*(int *)&this->field_0x80 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pIVar5 = (IChunkDataAccess *)(*pcVar2)();
      return pIVar5;
    }
    iVar6 = *(int *)&this->field_0x80 + -1;
    puVar1 = (undefined8 *)
             (*(longlong *)&this->field_0x78 + -0x10 + (longlong)*(int *)&this->field_0x80 * 0x10);
    pIVar5 = (IChunkDataAccess *)*puVar1;
    uVar3 = puVar1[1];
    *(int *)&this->field_0x80 = iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(ForAnyElementType *)&this->field_0x78,iVar6,(int *)&this->field_0x84);
    EStack_c0 = (EChunkLoadResult)uVar3;
    *param_2 = EStack_c0;
    iVar6 = *(int *)&this->field_0x30;
    if (iVar6 == *(int *)&this->field_0x34) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    *(int *)&this->field_0x30 = iVar6 + 1;
    TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult>
    ::
    TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,enum_BuildPatchServices::EChunkLoadResult><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,enum_BuildPatchServices::EChunkLoadResult_&>
              ((void *)(*(longlong *)&this->field_0x28 + (longlong)iVar6 * 0x18),param_1,param_2);
  }
  return pIVar5;
}

