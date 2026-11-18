// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 13

// ~TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144615bf0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144615c90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
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

// ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144615d30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144615dd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144615e70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 144615f10

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  DestroyElements(this,0,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// DestroyElements @ 1446166d0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
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
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// DestroyElements @ 1446167b0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>
  *this_00;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar6 = (ulonglong)param_1;
  if (param_1 < param_1 + param_2) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>
               *)(uVar6 * 0x30 + *(longlong *)this);
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
          UE::Core::Private::Tuple::
          TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>
          ::
          ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>
                    (this_00);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>
                 *)&this_00[1].field_0x8;
    } while ((int)(iVar5 + 1U) < param_1 + param_2);
  }
  return;
}

// DestroyElements @ 144616880

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  for (; param_1 < iVar1; param_1 = param_1 + 1) {
  }
  return;
}

// DestroyElements @ 1446168a0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  for (; param_1 < iVar1; param_1 = param_1 + 1) {
  }
  return;
}

// DestroyElements @ 1446168c0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  for (; param_1 < iVar1; param_1 = param_1 + 1) {
  }
  return;
}

// DestroyElements @ 1446168e0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(void *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    lVar10 = (longlong)(param_1 + param_2) - uVar6;
    bVar2 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar9 = (undefined8 *)(uVar6 * 0x70 + 0x58 + *(longlong *)this);
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)this + 0x28))) {
        if ((*(int *)((longlong)this + 0x28) <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar8 = (longlong)this + 0x10;
        if (*(longlong *)((longlong)this + 0x20) != 0) {
          lVar8 = *(longlong *)((longlong)this + 0x20);
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(lVar8 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)*puVar9,
                     *(int *)(puVar9 + 1));
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          *(undefined4 *)(puVar9 + -1) = 0;
          if ((void *)puVar9[-2] != (void *)0x0) {
            FMemory::Free((void *)puVar9[-2]);
          }
          TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(puVar9 + -10));
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      puVar9 = puVar9 + 0xe;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// Empty @ 144616b30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Empty(TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  DestroyElements(this,0,*(int *)&this->field_0x8);
  if (-1 < param_1) {
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,param_1,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
    *(undefined4 *)&this->field_0x34 = 0;
    *(undefined4 *)&this->field_0x30 = 0xffffffff;
    uVar2 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&this->field_0x28 = 0;
    if ((*(int *)&this->field_0x2c < (int)uVar2) || (0x80 < *(int *)&this->field_0x2c)) {
      uVar1 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar1 = uVar2;
      }
      *(uint *)&this->field_0x2c = uVar1;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

