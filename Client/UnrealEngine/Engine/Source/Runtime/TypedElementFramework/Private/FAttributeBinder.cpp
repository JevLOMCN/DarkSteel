// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// FAttributeBinder @ 142c959d0

FAttributeBinder * __thiscall
UE::Editor::DataStorage::FAttributeBinder::FAttributeBinder(FAttributeBinder *this,ulong64 param_1)

{
  FName FVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  ICoreProvider *pIVar5;
  undefined1 local_res8 [8];
  
  FVar1 = StorageFeatureName;
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
  if (iVar2 < 1) {
    this->TargetRow = param_1;
    this->DataStorage = (ICoreProvider *)0x0;
  }
  else {
    pIVar3 = IModularFeatures::Get();
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,FVar1,0);
    this->TargetRow = param_1;
    pIVar5 = (ICoreProvider *)(lVar4 + -8);
    if (lVar4 == 0) {
      pIVar5 = (ICoreProvider *)0x0;
    }
    this->DataStorage = pIVar5;
    if (pIVar5 != (ICoreProvider *)0x0) {
      return this;
    }
  }
  `UE::Editor::DataStorage::FAttributeBinder::FAttributeBinder'::__l2::<lambda_1>::operator()
            (local_res8);
  return this;
}

// FAttributeBinder @ 142c95a80

FAttributeBinder * __thiscall
UE::Editor::DataStorage::FAttributeBinder::FAttributeBinder
          (FAttributeBinder *this,ulong64 param_1,ICoreProvider *param_2)

{
  undefined1 local_res8 [32];
  
  this->TargetRow = param_1;
  this->DataStorage = param_2;
  if (param_2 == (ICoreProvider *)0x0) {
    `UE::Editor::DataStorage::FAttributeBinder::FAttributeBinder'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  return this;
}

// BindTextFormat @ 142ca6ef0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextAttributeFormatted * __thiscall
UE::Editor::DataStorage::FAttributeBinder::BindTextFormat
          (FAttributeBinder *this,FTextAttributeFormatted *__return_storage_ptr__,
          FTextFormat *param_1)

{
  ICoreProvider *pIVar1;
  ulong64 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTextFormatData *pFVar4;
  atomic<int> *paVar5;
  
  pIVar1 = this->DataStorage;
  uVar2 = this->TargetRow;
  pTVar3 = (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->TextFormatData).Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  *(undefined8 *)&__return_storage_ptr__->NamedProperties = 0;
  *(undefined8 *)&(__return_storage_ptr__->NamedProperties).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NamedProperties).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->NamedProperties).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->NamedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->NamedProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->NamedProperties).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NamedProperties).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->NamedProperties).field_0x48 = 0;
  (__return_storage_ptr__->Format).TextFormatData.Object = pFVar4;
  (__return_storage_ptr__->Format).TextFormatData.SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  __return_storage_ptr__->TargetRow = uVar2;
  __return_storage_ptr__->DataStorage = pIVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 150498c90

bool __thiscall
`UE::Editor::DataStorage::FAttributeBinder::FAttributeBinder'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5333795206296764397>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5333795206296764397>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

