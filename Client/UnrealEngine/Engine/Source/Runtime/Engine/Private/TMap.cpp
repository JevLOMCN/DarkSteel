// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// RemoveAndCopyValue @ 147354da0

bool __thiscall
TMap<FTraceHandle,FActiveSound::FAsyncTraceDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTraceHandle,FActiveSound::FAsyncTraceDetails,0>_>
::RemoveAndCopyValue
          (TMap<FTraceHandle,FActiveSound::FAsyncTraceDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTraceHandle,FActiveSound::FAsyncTraceDetails,0>_>
           *this,FTraceHandle *param_1,FAsyncTraceDetails *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  FActiveSound *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  
  uVar4 = (param_1->field0_0x0)._Handle;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar10 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar10 = &this->field_0x38;
    }
    uVar12 = *(uint *)(puVar10 +
                      ((uVar4 >> 0x20) * 0x17 + uVar4 & (ulonglong)(*(int *)&this->field_0x48 - 1))
                      * 4);
    if (uVar12 != 0xffffffff) {
      lVar5 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar12 * 0x28;
        if (uVar4 == *(ulonglong *)(lVar1 + lVar5)) {
          puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar5);
          pFVar7 = (FActiveSound *)puVar2[1];
          *(undefined8 *)param_2 = *puVar2;
          param_2->ActiveSound = pFVar7;
          if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&this->field_0x28)) {
            puVar10 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar10 = &this->field_0x10;
            }
            if ((*(uint *)(puVar10 +
                          (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) >>
                 (uVar12 & 0x1f) & 1) != 0) goto LAB_147354e9e;
          }
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
LAB_147354e9e:
          lVar5 = *(longlong *)this;
          puVar10 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar10 = &this->field_0x38;
          }
          puVar11 = (uint *)(puVar10 + (longlong)*(int *)(lVar5 + lVar1 + 0x24) * 4);
          do {
            uVar3 = *puVar11;
            if (uVar3 == 0xffffffff) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
            }
            else if (uVar3 == uVar12) {
              *puVar11 = *(uint *)(lVar5 + lVar1 + 0x20);
              TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar12,1);
              return true;
            }
            puVar11 = (uint *)(*(longlong *)this + (longlong)(int)uVar3 * 0x28 + 0x20);
          } while( true );
        }
        uVar12 = *(uint *)(lVar1 + 0x20 + lVar5);
      } while (uVar12 != 0xffffffff);
    }
  }
  return false;
}

// TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_> @ 147378240

TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_> *
__thiscall
TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>::
TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
          (TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
           *this,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> @ 1474310d0

TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> * __thiscall
TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)this,(TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)param_1);
  return this;
}

// TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> @ 147431120

TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> * __thiscall
TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_> @ 147431160

TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
* __thiscall
TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
::
TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
          (TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
           *this,TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
               *)this,(TSet<TTuple<FName,FAnimGroupInstance>,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>,FDefaultSetAllocator>
                       *)param_1);
  return this;
}

// TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_> @ 1474311b0

TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
* __thiscall
TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
::
TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
          (TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// ~TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> @ 147435960

void __thiscall
TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
~TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_> @ 1474359a0

void __thiscall
TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
::
~TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
          (TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// RemoveAndCopyValue @ 1475f2bb0

bool __thiscall
TMap<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
::RemoveAndCopyValue
          (TMap<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSkinWeightProfileStack,FSkinWeightVertexBuffer_*,0>_>
           *this,FSkinWeightProfileStack *param_1,FSkinWeightVertexBuffer **param_2)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  longlong lVar11;
  
  FVar1 = (param_1->Layers).Elements[0];
  uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = (param_1->Layers).Elements[1];
  uVar7 = FVar1.Number + 0x9e3779b9 + uVar7;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar9 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               (uVar7 * 0x40 + FVar2.Number + (uVar7 >> 2) + uVar8 + 0x9e3779b9 ^
                               uVar7)) * 4);
    if (uVar7 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar11 = (longlong)(int)uVar7 * 0x20;
        if ((*(FName *)(lVar11 + lVar3) == (param_1->Layers).Elements[0]) &&
           (*(FName *)(lVar11 + 8 + lVar3) == (param_1->Layers).Elements[1])) {
          if (uVar7 == 0xffffffff) {
            return false;
          }
          *param_2 = *(FSkinWeightVertexBuffer **)(lVar11 + 0x10 + lVar3);
          if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
            puVar9 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar9 = &this->field_0x10;
            }
            if ((*(uint *)(puVar9 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar7 & 0x1f) & 1) != 0) goto LAB_1475f2ce4;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_1475f2ce4:
          lVar3 = *(longlong *)this;
          puVar9 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar9 = &this->field_0x38;
          }
          puVar10 = (uint *)(puVar9 + (longlong)*(int *)(lVar3 + lVar11 + 0x1c) * 4);
          do {
            uVar8 = *puVar10;
            if (uVar8 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            else if (uVar8 == uVar7) {
              *puVar10 = *(uint *)(lVar3 + lVar11 + 0x18);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar7,1);
              return true;
            }
            puVar10 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar8 * 0x20);
          } while( true );
        }
        uVar7 = *(uint *)(lVar11 + 0x18 + lVar3);
      } while (uVar7 != 0xffffffff);
    }
  }
  return false;
}

// RemoveAndCopyValue @ 1475f2d70

bool __thiscall
TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
::RemoveAndCopyValue
          (TMap<FName,FPrimaryAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPrimaryAssetData,0>_>
           *this,FName param_1,FPrimaryAssetData *param_2)

{
  FUtf8String *pFVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  uVar10 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar11 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar11 = &this->field_0x38;
    }
    uVar10 = *(uint *)(puVar11 +
                      (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1.Number + uVar10) * 4);
    if (uVar10 != 0xffffffff) {
      lVar4 = *(longlong *)this;
      do {
        lVar14 = (longlong)(int)uVar10 * 0x78;
        if (*(FName *)(lVar14 + lVar4) == param_1) {
          lVar2 = lVar14 + lVar4;
          TPersistentObjectPtr<FSoftObjectPath>::operator=
                    ((TPersistentObjectPtr<FSoftObjectPath> *)param_2,
                     (TPersistentObjectPtr<FSoftObjectPath> *)(lVar2 + 8));
          FVar7 = *(FName *)(lVar2 + 0x38);
          puVar13 = (undefined8 *)(lVar2 + 0x40);
          pFVar1 = &(param_2->ARLookupPath).SubPathString;
          (param_2->ARLookupPath).AssetPath.PackageName = *(FName *)(lVar2 + 0x30);
          (param_2->ARLookupPath).AssetPath.AssetName = FVar7;
          if (pFVar1 != (FUtf8String *)puVar13) {
            pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
            }
            (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar13;
            *puVar13 = 0;
            (param_2->ARLookupPath).SubPathString.Data.ArrayNum = *(int *)(lVar2 + 0x48);
            (param_2->ARLookupPath).SubPathString.Data.ArrayMax = *(int *)(lVar2 + 0x4c);
            *(undefined8 *)(lVar2 + 0x48) = 0;
          }
          if ((param_2->CurrentState).Storage != (uchar *)0x0) {
            FPrimaryAssetLoadState::DestroyStoredItems(&param_2->CurrentState);
            FMemory::Free((param_2->CurrentState).Storage);
          }
          (param_2->CurrentState).Storage = *(uchar **)(lVar14 + 0x50 + lVar4);
          (param_2->CurrentState).NumBundleNames = *(ushort *)(lVar14 + 0x58 + lVar4);
          (param_2->CurrentState).bWithDownloadParams = *(bool *)(lVar14 + 0x5a + lVar4);
          *(undefined8 *)(lVar14 + 0x50 + lVar4) = 0;
          *(undefined2 *)(lVar14 + 0x58 + lVar4) = 0;
          *(undefined1 *)(lVar14 + 0x5a + lVar4) = 0;
          if ((param_2->PendingState).Storage != (uchar *)0x0) {
            FPrimaryAssetLoadState::DestroyStoredItems(&param_2->PendingState);
            FMemory::Free((param_2->PendingState).Storage);
          }
          (param_2->PendingState).Storage = *(uchar **)(lVar14 + 0x60 + lVar4);
          (param_2->PendingState).NumBundleNames = *(ushort *)(lVar14 + 0x68 + lVar4);
          (param_2->PendingState).bWithDownloadParams = *(bool *)(lVar14 + 0x6a + lVar4);
          *(undefined8 *)(lVar14 + 0x60 + lVar4) = 0;
          *(undefined2 *)(lVar14 + 0x68 + lVar4) = 0;
          *(undefined1 *)(lVar14 + 0x6a + lVar4) = 0;
          if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&this->field_0x28)) {
            puVar11 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar11 = &this->field_0x10;
            }
            if ((*(uint *)(puVar11 +
                          (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4) >>
                 (uVar10 & 0x1f) & 1) != 0) goto LAB_1475f2f4e;
          }
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
LAB_1475f2f4e:
          lVar4 = *(longlong *)this;
          puVar11 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar11 = &this->field_0x38;
          }
          puVar12 = (uint *)(puVar11 + (longlong)*(int *)(lVar4 + 0x74 + lVar14) * 4);
          do {
            uVar3 = *puVar12;
            if (uVar3 == 0xffffffff) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
            }
            else if (uVar3 == uVar10) {
              *puVar12 = *(uint *)(lVar4 + 0x70 + lVar14);
              TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar10,1);
              TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar10,1);
              return true;
            }
            puVar12 = (uint *)(*(longlong *)this + 0x70 + (longlong)(int)uVar3 * 0x78);
          } while( true );
        }
        uVar10 = *(uint *)(lVar14 + 0x70 + lVar4);
      } while (uVar10 != 0xffffffff);
    }
  }
  return false;
}

// TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_> @ 14761b300

TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
* __thiscall
TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
::
TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
          (TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
           *this,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// RemoveAndCopyValue @ 147a7a600

bool __thiscall
TMap<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>::
RemoveAndCopyValue(TMap<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                   *this,FName param_1,FRealCurve **param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar4 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar4 = &this->field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1.Number + uVar2) *
                              4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(FName *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          *param_2 = *(FRealCurve **)(lVar1 + 8);
          TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                           *)this,iVar3);
          return true;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// RemoveAndCopyValue @ 147b0ba60

bool __thiscall
TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
::RemoveAndCopyValue
          (TMap<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
           *this,FName param_1,uchar **param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  
  uVar7 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar8 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar8 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1.Number + uVar7)
                               * 4);
    if (uVar7 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar7 * 0x18;
        if (*(FName *)(lVar1 + lVar3) == param_1) {
          *param_2 = *(uchar **)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
            puVar8 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar8 = &this->field_0x10;
            }
            if ((*(uint *)(puVar8 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar7 & 0x1f) & 1) != 0) goto LAB_147b0bb5c;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_147b0bb5c:
          lVar3 = *(longlong *)this;
          puVar8 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar8 = &this->field_0x38;
          }
          puVar9 = (uint *)(puVar8 + (longlong)*(int *)(lVar1 + lVar3 + 0x14) * 4);
          do {
            uVar2 = *puVar9;
            if (uVar2 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            else if (uVar2 == uVar7) {
              *puVar9 = *(uint *)(lVar1 + lVar3 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar7,1);
              return true;
            }
            puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar7 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar7 != 0xffffffff);
    }
  }
  return false;
}

// TMap<float> @ 147b382b0

TMap<float> * __thiscall
DynamicRenderScaling::TMap<float>::TMap<float>(TMap<float> *this,TMap<float> *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar3;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> _Dst;
  
  (this->Array).AllocatorInstance.SecondaryData =
       (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0;
  FVar3 = (param_1->Array).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Array).ArrayNum;
  (this->Array).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    param_1 = (TMap<float> *)FVar3;
  }
  piVar1 = &(this->Array).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x10;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<float>::FItem>_>
            (0x10,8,iVar2,0,(ForElementType<DynamicRenderScaling::TMap<float>::FItem> *)this,iVar2,
             piVar1);
  FVar3 = (this->Array).AllocatorInstance.SecondaryData;
  _Dst = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)this;
  if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
    _Dst = FVar3;
  }
  memcpy((void *)_Dst,param_1,(longlong)iVar2 << 4);
  return this;
}

// SetAll @ 147b8abf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall DynamicRenderScaling::TMap<float>::SetAll(TMap<float> *this,float *param_1)

{
  float fVar1;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<DynamicRenderScaling::TMap<float>::FItem> FVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar5 = FBudget::GetGlobalListSize();
  TArray<DynamicRenderScaling::TMap<float>::FItem,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  ::SetNum(&this->Array,iVar5,Default);
  iVar5 = (this->Array).ArrayNum;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    do {
      fVar1 = *param_1;
      uVar6 = 0;
      if ((int)uVar8 < iVar5) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (this->Array).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)this;
      if (FVar2 != (ForElementType<DynamicRenderScaling::TMap<float>::FItem>)0x0) {
        FVar7 = FVar2;
      }
      uVar8 = uVar8 + 1;
      *(float *)(lVar9 + 8 + (longlong)FVar7) = fVar1;
      lVar9 = lVar9 + 0x10;
      iVar5 = (this->Array).ArrayNum;
    } while ((int)uVar8 < iVar5);
  }
  return;
}

// TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> @ 147bb7d10

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall
TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,initializer_list<TPairInitializer<FString_const_&,FString_const_&>_> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  TPairInitializer<FString_const_&,FString_const_&> *pTVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  TPairInitializer<FString_const_&,FString_const_&> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  int iVar16;
  undefined8 local_78;
  FString *pFStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar3 = param_1->_Last;
  uVar9 = 0;
  pTVar12 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar13 = (uint)((longlong)pTVar3 - (longlong)pTVar12 >> 4);
  if (uVar13 == 0) goto joined_r0x000147bb7f97;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar13);
  if (uVar13 < 4) {
    uVar13 = 1;
  }
  else {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar13 <= *(int *)&this->field_0x48))
  goto joined_r0x000147bb7f97;
  *(uint *)&this->field_0x48 = uVar13;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar13 != 0) {
    uVar7 = uVar13;
    if (uVar13 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar7 = 0;
        goto LAB_147bb7ded;
      }
    }
    else {
LAB_147bb7ded:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar7,4);
    }
    if (0 < (int)uVar13) {
      uVar14 = (ulonglong)uVar13;
      uVar10 = uVar9;
      do {
        puVar8 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x40;
        }
        uVar5 = uVar10 & (longlong)(int)uVar13 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(puVar8 + uVar5 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar13 = *(uint *)&this->field_0x28;
    pFStack_70 = (FString *)&this->field_0x10;
    local_78 = (FString *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar13 != 0) {
      puVar15 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar15 = (uint *)pFStack_70;
      }
      uVar7 = *puVar15;
      uVar10 = uVar9;
      while (uVar7 == 0) {
        uStack_60 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_60;
        iVar6 = (int)uVar9;
        uVar7 = iVar6 + 1;
        uVar9 = (ulonglong)uVar7;
        uVar14 = (ulonglong)local_78 >> 0x20;
        local_78 = (FString *)CONCAT44((int)uVar14,uVar7);
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar7)
        goto LAB_147bb7ed9;
        uVar7 = puVar15[(longlong)iVar6 + 1];
      }
      local_78 = (FString *)CONCAT44(-uVar7 & uVar7,SUB84(local_78,0));
      uVar9 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar13 < (int)uStack_64) {
LAB_147bb7ed9:
        uVar9 = (ulonglong)uVar13;
        uStack_64 = uVar13;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFStack_70;
    if ((int)uVar9 < (int)uVar13) {
      do {
        iVar16 = (int)uVar9;
        puVar1 = (undefined8 *)(*(longlong *)local_58 + (longlong)iVar16 * 0x28);
        iVar2 = *(int *)(*(longlong *)local_58 + 8 + (longlong)iVar16 * 0x28);
        iVar6 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar11 = L"";
          iVar6 = 0;
        }
        else {
          pwVar11 = (wchar_t *)*puVar1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
        uVar13 = *(int *)&this->field_0x48 - 1U & uVar13;
        *(uint *)((longlong)puVar1 + 0x24) = uVar13;
        puVar8 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&this->field_0x40;
        }
        uVar9 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar8 + uVar9 * 4);
        *(int *)(puVar8 + uVar9 * 4) = iVar16;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x000147bb7f97:
  for (; pTVar12 != pTVar3; pTVar12 = pTVar12 + 1) {
    local_78 = pTVar12->Key;
    pFStack_70 = pTVar12->Value;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000008,
               (bool *)&local_78);
  }
  return this;
}

// TMap<TArray<float,TSizedDefaultAllocator<32>_>_> @ 147c2b3f0

TMap<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::
TMap<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TMap<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  int *piVar1;
  int *piVar2;
  FItem *_Dst;
  ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
  FVar3;
  TLinkedList<DynamicRenderScaling::FBudget_*> *pTVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  TLinkedList<DynamicRenderScaling::FBudget_*> **ppTVar11;
  TMap<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar12;
  ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
  FVar13;
  uint uVar14;
  
  (this->Array).AllocatorInstance.SecondaryData =
       (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
        )0x0;
  piVar1 = &(this->Array).ArrayNum;
  piVar2 = &(this->Array).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0x10;
  uVar8 = FBudget::GetGlobalListSize();
  iVar10 = *piVar1;
  if (iVar10 < (int)uVar8) {
    iVar9 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>_>
                      (0x18,8,uVar8 - iVar10,
                       (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                        *)this,piVar1,piVar2);
    FVar3 = (this->Array).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
              )this;
    if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                  )0x0) {
      FVar13 = FVar3;
    }
    DefaultConstructItems<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem,int>
              ((void *)((longlong)FVar13 + (longlong)iVar9 * 0x18),uVar8 - iVar10);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar10) {
      uVar14 = iVar10 - uVar8;
      if (((int)(uVar14 | uVar8) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TMap<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar6)();
        return pTVar12;
      }
      if (uVar14 != 0) {
        FVar3 = (this->Array).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                  )this;
        if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                      )0x0) {
          FVar13 = FVar3;
        }
        _Dst = (FItem *)((longlong)FVar13 + (longlong)(int)uVar8 * 0x18);
        DestructItems<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem,int>
                  (_Dst,uVar14);
        iVar10 = (*piVar1 - uVar14) - uVar8;
        if (iVar10 != 0) {
          memmove(_Dst,_Dst + (int)uVar14,(longlong)iVar10 * 0x18);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>_>
                  (0x18,8,(ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                           *)this,*piVar1,piVar2);
      }
    }
  }
  ppTVar11 = FBudget::GetGlobalList();
  pTVar4 = *ppTVar11;
  while( true ) {
    if (pTVar4 == (TLinkedList<DynamicRenderScaling::FBudget_*> *)0x0) {
      return this;
    }
    uVar8 = pTVar4->Element->BudgetId;
    pwVar5 = pTVar4->Element->Name;
    uVar14 = 0;
    if ((int)uVar8 < *piVar1) {
      uVar14 = ~uVar8 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    FVar3 = (this->Array).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
              )this;
    if (FVar3 != (ForElementType<DynamicRenderScaling::TMap<TArray<float,TSizedDefaultAllocator<32>_>_>::FItem>
                  )0x0) {
      FVar13 = FVar3;
    }
    *(wchar_t **)((longlong)FVar13 + (longlong)(int)uVar8 * 0x18) = pwVar5;
    pTVar4 = (TLinkedList<DynamicRenderScaling::FBudget_*> *)pTVar4->_padding_;
  }
  pcVar6 = (code *)swi(3);
  pTVar12 = (TMap<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar6)();
  return pTVar12;
}

// RemoveAndCopyValue @ 147dbcad0

bool __thiscall
TMap<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>_>
::RemoveAndCopyValue
          (TMap<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>_>
           *this,FName param_1,FAsyncLoadingStringTable *param_2)

{
  TArray<TFunction<void___cdecl(FName,FName)>,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  uVar8 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar9 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &this->field_0x38;
    }
    uVar8 = *(uint *)(puVar9 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1.Number + uVar8)
                               * 4);
    if (uVar8 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar11 = (longlong)(int)uVar8 * 0x30;
        if (*(FName *)(lVar11 + lVar3) == param_1) {
          pTVar1 = &param_2->LoadedCallbacks;
          puVar12 = (undefined8 *)(lVar3 + 0x18 + lVar11);
          param_2->AsyncLoadingId = *(int *)(lVar11 + 8 + lVar3);
          param_2->RequestedTableId = *(FName *)(lVar11 + 0xc + lVar3);
          if (pTVar1 != (TArray<TFunction<void___cdecl(FName,FName)>,TSizedDefaultAllocator<32>_> *)
                        puVar12) {
            DestructItems<TFunction<void___cdecl(FName,FName)>,int>
                      ((TFunction<void___cdecl(FName,FName)> *)(pTVar1->AllocatorInstance).Data,
                       (param_2->LoadedCallbacks).ArrayNum);
            pFVar4 = (pTVar1->AllocatorInstance).Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)*puVar12;
            *puVar12 = 0;
            (param_2->LoadedCallbacks).ArrayNum = *(int *)(puVar12 + 1);
            (param_2->LoadedCallbacks).ArrayMax = *(int *)((longlong)puVar12 + 0xc);
            puVar12[1] = 0;
          }
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&this->field_0x28)) {
            puVar9 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar9 = &this->field_0x10;
            }
            if ((*(uint *)(puVar9 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_147dbcc2f;
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
LAB_147dbcc2f:
          lVar3 = *(longlong *)this;
          puVar9 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar9 = &this->field_0x38;
          }
          puVar10 = (uint *)(puVar9 + (longlong)*(int *)(lVar11 + lVar3 + 0x2c) * 4);
          do {
            uVar2 = *puVar10;
            if (uVar2 == 0xffffffff) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            else if (uVar2 == uVar8) {
              *puVar10 = *(uint *)(lVar11 + lVar3 + 0x28);
              TSparseArray<TSparseSetElement<TTuple<FName,FStringTableEngineBridge::FAsyncLoadingStringTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FStringTableEngineBridge::FAsyncLoadingStringTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar8,1);
              TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar8,1);
              return true;
            }
            puVar10 = (uint *)(*(longlong *)this + 0x28 + (longlong)(int)uVar2 * 0x30);
          } while( true );
        }
        uVar8 = *(uint *)(lVar11 + 0x28 + lVar3);
      } while (uVar8 != 0xffffffff);
    }
  }
  return false;
}

// ~TMap<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_> @ 147f67f70

void __thiscall
TMap<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
::
~TMap<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
          (TMap<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Append<FDefaultSetAllocator> @ 147f944b0

void __thiscall
TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
::Append<FDefaultSetAllocator>
          (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
           *this,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_147f9456d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_147f9456d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_147f94670;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_147f94670:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x18;
    local_a0 = local_a8 + 8;
    TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FNetworkGUID_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
              ((TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FNetworkGUID_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                        *)&stack0x00000018,(bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// FindAndRemoveChecked @ 147fcb8c0

FNetworkGUID __thiscall
TMap<int,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0>_>::
FindAndRemoveChecked
          (TMap<int,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0>_>
           *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FNetworkGUID FVar4;
  undefined1 *puVar5;
  undefined4 in_register_00000014;
  FNetworkGUID_u_0 FVar6;
  uint uVar7;
  longlong lVar8;
  uint in_R8D;
  uint *puVar9;
  
  FVar6.ObjectId._4_4_ = in_register_00000014;
  FVar6.Value = param_1;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar5 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar5 + (ulonglong)(*(int *)&this->field_0x48 - 1U & in_R8D) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        if (*(uint *)(*(longlong *)this + (longlong)(int)uVar7 * 0x18) == in_R8D) {
          if (uVar7 == 0xffffffff) goto LAB_147fcb92f;
          goto LAB_147fcb955;
        }
        uVar7 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar7 * 0x18);
      } while (uVar7 != 0xffffffff);
    }
  }
  uVar7 = 0xffffffff;
LAB_147fcb92f:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar4.field0_0x0 = (FNetworkGUID_u_0)(*pcVar2)();
    return (FNetworkGUID)FVar4.field0_0x0;
  }
LAB_147fcb955:
  *(undefined8 *)FVar6 = *(undefined8 *)((longlong)(int)uVar7 * 0x18 + 8 + *(longlong *)this);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
    puVar5 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_147fcb9c9;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar4.field0_0x0 = (FNetworkGUID_u_0)(*pcVar2)();
    return (FNetworkGUID)FVar4.field0_0x0;
  }
LAB_147fcb9c9:
  lVar8 = *(longlong *)this + (longlong)(int)uVar7 * 0x18;
  puVar5 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar5 = &this->field_0x38;
  }
  puVar9 = (uint *)(puVar5 + (longlong)*(int *)(lVar8 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar7) {
      *puVar9 = *(uint *)(lVar8 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return (FNetworkGUID)FVar6;
    }
    puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar2 = (code *)swi(3);
  FVar4.field0_0x0 = (FNetworkGUID_u_0)(*pcVar2)();
  return (FNetworkGUID)FVar4.field0_0x0;
}

// TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_> @ 1480131f0

TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
* __thiscall
TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
::
TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
          (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
           *this,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// RemoveAndCopyValue @ 1480c9510

bool __thiscall
TMap<FNetworkGUID,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,double,0>_>::
RemoveAndCopyValue(TMap<FNetworkGUID,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,double,0>_>
                   *this,FNetworkGUID *param_1,double *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar2 = (param_1->field0_0x0).ObjectId;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar8 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x38;
    }
    uVar10 = *(uint *)(puVar8 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                                (ulonglong)(*(int *)&this->field_0x48 - 1)) * 4);
    if (uVar10 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar7 = (longlong)(int)uVar10;
        if (*(ulonglong *)(lVar3 + lVar7 * 0x18) == uVar2) {
          *param_2 = *(double *)(lVar3 + 8 + lVar7 * 0x18);
          if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&this->field_0x28)) {
            puVar8 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar8 = &this->field_0x10;
            }
            if ((*(uint *)(puVar8 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) *
                                    4) >> (uVar10 & 0x1f) & 1) != 0) goto LAB_1480c9606;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_1480c9606:
          lVar3 = *(longlong *)this;
          puVar8 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar8 = &this->field_0x38;
          }
          puVar9 = (uint *)(puVar8 + (longlong)*(int *)(lVar3 + 0x14 + lVar7 * 0x18) * 4);
          do {
            uVar1 = *puVar9;
            if (uVar1 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            else if (uVar1 == uVar10) {
              *puVar9 = *(uint *)(lVar3 + 0x10 + lVar7 * 0x18);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar10,1);
              return true;
            }
            puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x18 + 0x10);
          } while( true );
        }
        uVar10 = *(uint *)(lVar3 + 0x10 + lVar7 * 0x18);
      } while (uVar10 != 0xffffffff);
    }
  }
  return false;
}

// Append<FDefaultSetAllocator> @ 148505e60

void __thiscall
TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
::Append<FDefaultSetAllocator>
          (TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
           *this,TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<int,FShaderMapCompileResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_148505f1d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_148505f1d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_148506020;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_148506020:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x38;
    local_a0 = local_a8 + 8;
    TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FShaderMapCompileResults_const_&>_>
              ((TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<int_const_&,FShaderMapCompileResults_const_&> *)
                       &stack0x00000018,(bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator= @ 148625b50

TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> * __thiscall
TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
          (TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this,
          TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *param_1)

{
  int iVar1;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    iVar1 = *(int *)&param_1->field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,iVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar1,(ForAnyElementType *)this,(int *)&this->field_0x8,
               (int *)&this->field_0xc);
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    if (&this->field_0x10 != &param_1->field_0x10) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10);
    }
    if (iVar1 != 0) {
      memcpy(*(void **)this,*(void **)param_1,(longlong)iVar1 * 0x14);
    }
    return this;
  }
  return this;
}

// TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_> @ 148690810

TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
* __thiscall
TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
::
TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
          (TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           *this,TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// operator= @ 14880d9d0

TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
* __thiscall
TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
::operator=(TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
            *this,TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                  *param_1)

{
  int iVar1;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    iVar1 = *(int *)&param_1->field_0x8;
    TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,iVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,(ForAnyElementType *)this,(int *)&this->field_0x8,
               (int *)&this->field_0xc);
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    if (&this->field_0x10 != &param_1->field_0x10) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10);
    }
    if (iVar1 != 0) {
      memcpy(*(void **)this,*(void **)param_1,(longlong)iVar1 * 0x18);
    }
    return this;
  }
  return this;
}

// FindAndRemoveChecked @ 14883a130

TObjectPtr<USubsystem> __thiscall
TMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
::FindAndRemoveChecked
          (TMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
           *this,TObjectPtr<UClass_const_> param_1)

{
  uint uVar1;
  TObjectPtr<UClass_const_>_u_0 TVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  TObjectPtr<USubsystem> TVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  TObjectPtr<UClass_const_>_u_0 *in_R8;
  uint *puVar10;
  TObjectPtr<UClass_const_>_u_0 local_res8;
  
  TVar2 = (TObjectPtr<UClass_const_>_u_0)in_R8->DebugPtr;
  local_res8 = TVar2;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar2.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  uVar7 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                    ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
                      *)this,uVar7 >> 0x10 ^ uVar7,
                     (TObjectPtr<UClass_const_> *)&local_res8.ObjectPtr);
  if (uVar7 == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PairId.IsValidId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x556,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.field0_0x0 = (TObjectPtr<USubsystem>_u_0)(*pcVar4)();
      return (TObjectPtr<USubsystem>)TVar6.field0_0x0;
    }
  }
  pUVar3 = *(UObject **)((longlong)(int)uVar7 * 0x18 + 8 + *(longlong *)this);
  *(UObject **)param_1.field0_0x0 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
    puVar8 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14883a26a;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    TVar6.field0_0x0 = (TObjectPtr<USubsystem>_u_0)(*pcVar4)();
    return (TObjectPtr<USubsystem>)TVar6.field0_0x0;
  }
LAB_14883a26a:
  lVar9 = *(longlong *)this + (longlong)(int)uVar7 * 0x18;
  puVar8 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x38;
  }
  puVar10 = (uint *)(puVar8 + (longlong)*(int *)(lVar9 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if (uVar1 == 0xffffffff) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.field0_0x0 = (TObjectPtr<USubsystem>_u_0)(*pcVar4)();
        return (TObjectPtr<USubsystem>)TVar6.field0_0x0;
      }
    }
    if (uVar1 == uVar7) break;
    puVar10 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  *puVar10 = *(uint *)(lVar9 + 0x10);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,uVar7,1);
  return (TObjectPtr<USubsystem>)param_1.field0_0x0.DebugPtr;
}

// TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_> @ 148a7e7e0

TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
* __thiscall
TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
::
TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
          (TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
           *this,TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_> @ 148a7e900

TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
* __thiscall
TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
::
TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
          (TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
           *this,TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// Append<FDefaultSetAllocator> @ 148aab400

void __thiscall
TMap<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
::Append<FDefaultSetAllocator>
          (void *this,
          TMap<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
          *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  TIntVector3<__int64> *pTVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar13 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  uVar6 = 1;
  uVar10 = (uVar13 - *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8;
  if (uVar13 < uVar10) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
    }
    TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve(this,uVar10);
    if (uVar10 < 4) {
      iVar5 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((*(int *)((longlong)this + 0x48) == 0) || (*(int *)((longlong)this + 0x48) < iVar5)) {
      *(int *)((longlong)this + 0x48) = iVar5;
      TSet<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash(this);
    }
  }
  iVar5 = *(int *)&param_1->field_0x28;
  iVar11 = 0;
  puVar2 = &param_1->field_0x10;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148aab50d;
      uVar10 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = iVar14 + -1 + local_res18;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_148aab50d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar13 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar5 < (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148aab611;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_148aab611:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pTVar9 = (TIntVector3<__int64> *)
             ((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)param_1);
    TMapBase<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<__int64>,TArray<`FSpatialHashStreamingGrid::GetCells'::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>,0>_>
    ::
    Emplace<UE::Math::TIntVector3<__int64>_const_&,TArray<_FSpatialHashStreamingGrid::GetCells_::__l2::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>_const_&>
              (this,pTVar9,
               (TArray<_public:_void___cdecl_FSpatialHashStreamingGrid::GetCells(TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>_const_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,UWorldPartitionRuntimeHash::FStreamingSourceCells_&,bool,FWorldPartitionStreamingContext_const_&)const_::_2_::FStreamingSourceInfo,TSizedDefaultAllocator<32>_>
                *)(pTVar9 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

