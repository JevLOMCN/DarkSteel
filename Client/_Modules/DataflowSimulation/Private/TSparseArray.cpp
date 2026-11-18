// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 8

// ~TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1462f2930

void __thiscall
TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1462f29d0

void __thiscall
TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1462f2a70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1462f2b10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1462f2bb0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// DestroyElements @ 1462f52c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined4 *)(uVar6 * 0x70 + 0x50 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(puVar9 + 4));
          *puVar9 = 0;
          if (*(void **)(puVar9 + -2) != (void *)0x0) {
            FMemory::Free(*(void **)(puVar9 + -2));
          }
          TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar9 + -0x12));
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 0x1c;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1462f53d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined8 *)(uVar6 * 0x68 + 0x50 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          *(undefined4 *)(puVar9 + 1) = 0;
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar9 + -8));
          if ((void *)puVar9[-10] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-10]);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 0xd;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// DestroyElements @ 1462f54e0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined8 *)(uVar6 * 0x68 + 0x50 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar8 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          *(undefined4 *)(puVar9 + 1) = 0;
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<IDataflowSimulationInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar9 + -8));
          if ((void *)puVar9[-10] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-10]);
          }
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 0xd;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

