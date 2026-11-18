// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// FStackAttributeContainer @ 1464074f0

FStackAttributeContainer * __thiscall
UE::Anim::FStackAttributeContainer::FStackAttributeContainer(FStackAttributeContainer *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  return this;
}

// ~FStackAttributeContainer @ 146409600

void __thiscall
UE::Anim::FStackAttributeContainer::~FStackAttributeContainer(FStackAttributeContainer *this)

{
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
               **)&this->field_0x20,*(int *)&this->field_0x28);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)&this->field_0x10,
             *(int *)&this->field_0x18);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)this,*(int *)&this->field_0x8);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// operator= @ 14640db80

FStackAttributeContainer * __thiscall
UE::Anim::FStackAttributeContainer::operator=
          (FStackAttributeContainer *this,FStackAttributeContainer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)this,
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)param_1)
  ;
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *)&this->field_0x10,
            (TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *)&param_1->field_0x10);
  puVar1 = &this->field_0x20;
  if (puVar1 != &param_1->field_0x20) {
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 **)puVar1,*(int *)&this->field_0x28);
    iVar3 = *(int *)&param_1->field_0x28;
    puVar2 = &this->field_0x2c;
    pTVar4 = *(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
               **)&param_1->field_0x20;
    *(int *)&this->field_0x28 = iVar3;
    if ((iVar3 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*(int *)puVar2,(ForAnyElementType *)puVar1,iVar3,(int *)puVar2);
      ConstructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                (*(void **)puVar1,pTVar4,iVar3);
    }
  }
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
             &this->field_0x30,
             (TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
             &param_1->field_0x30);
  return this;
}

