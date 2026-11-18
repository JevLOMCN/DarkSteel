// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_> @ 142c951e0

TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
* __thiscall
TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
::
TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
          (TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
           *this,TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
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
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  return this;
}

// RemoveAndCopyValue @ 142cb71a0

bool __thiscall
TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::RemoveAndCopyValue
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          int param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar6 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x38;
    }
    uVar8 = *(uint *)(puVar6 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        lVar9 = (longlong)(int)uVar8 * 0x10;
        lVar1 = lVar9 + *(longlong *)this;
        if (*(int *)(lVar9 + *(longlong *)this) == param_1) {
          *param_2 = *(int *)(lVar1 + 4);
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&this->field_0x28)) {
            puVar6 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar6 = &this->field_0x10;
            }
            if ((*(uint *)(puVar6 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_142cb7284;
          }
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
LAB_142cb7284:
          lVar1 = *(longlong *)this;
          puVar6 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar6 = &this->field_0x38;
          }
          puVar7 = (uint *)(puVar6 + (longlong)*(int *)(lVar1 + lVar9 + 0xc) * 4);
          do {
            uVar2 = *puVar7;
            if (uVar2 == 0xffffffff) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
            }
            else if (uVar2 == uVar8) {
              *puVar7 = *(uint *)(lVar1 + lVar9 + 8);
              TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar8,1);
              return true;
            }
            puVar7 = (uint *)(*(longlong *)this + 8 + (longlong)(int)uVar2 * 0x10);
          } while( true );
        }
        uVar8 = *(uint *)(lVar1 + 8);
      } while (uVar8 != 0xffffffff);
    }
  }
  return false;
}

