// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 10

// StaticClass @ 14e110330

UClass * __cdecl UOptimusComponentSourceBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentSourceBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentSourceBinding",
               &Z_Registration_Info_UClass_UOptimusComponentSourceBinding.InnerSingleton,
               StaticRegisterNativesUOptimusComponentSourceBinding,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusComponentSourceBinding>,
               InternalVTableHelperCtorCaller<UOptimusComponentSourceBinding>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentSourceBinding.InnerSingleton;
}

// UOptimusComponentSourceBinding @ 14e158770

UOptimusComponentSourceBinding * __thiscall
UOptimusComponentSourceBinding::UOptimusComponentSourceBinding
          (UOptimusComponentSourceBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusComponentSourceBinding__6B_;
  (this->BindingName).ComparisonIndex = 0;
  (this->BindingName).Number = 0;
  (this->ComponentType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  this->bIsPrimaryBinding = false;
  return this;
}

// UOptimusComponentSourceBinding @ 14e1587b0

UOptimusComponentSourceBinding * __thiscall
UOptimusComponentSourceBinding::UOptimusComponentSourceBinding
          (UOptimusComponentSourceBinding *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusComponentSourceBinding__6B_;
  (this->BindingName).ComparisonIndex = 0;
  (this->BindingName).Number = 0;
  (this->ComponentType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  this->bIsPrimaryBinding = false;
  return this;
}

// ~UOptimusComponentSourceBinding @ 14e162340

void __thiscall
UOptimusComponentSourceBinding::~UOptimusComponentSourceBinding
          (UOptimusComponentSourceBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusComponentSourceBinding__6B_;
  pFVar1 = (this->ComponentTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetComponentSource @ 14e1bead0

UOptimusComponentSource * __thiscall
UOptimusComponentSourceBinding::GetComponentSource(UOptimusComponentSourceBinding *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UOptimusComponentSource *pUVar5;
  
  pUVar2 = (this->ComponentType).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UOptimusComponentSource::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (pUVar2 = (this->ComponentType).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
        pUVar4 = UOptimusComponentSource::StaticClass();
        if (pUVar4 != (UClass *)0x0) {
          iVar1 = (int)pUVar4->_padding_;
          if (((int)pUVar2->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar5 = UClass::GetDefaultObject<UOptimusComponentSource>
                               ((this->ComponentType).Class.field0_0x0.DebugPtr);
            return pUVar5;
          }
        }
        pUVar5 = UClass::GetDefaultObject<UOptimusComponentSource>((UClass *)0x0);
        return pUVar5;
      }
    }
  }
  return (UOptimusComponentSource *)0x0;
}

// GetIndex @ 14e1c8780

int __thiscall UOptimusComponentSourceBinding::GetIndex(UOptimusComponentSourceBinding *this)

{
  FScriptContainerElement *pFVar1;
  UOptimusComponentSourceBindingContainer *pUVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  
  pUVar2 = CastChecked<UOptimusComponentSourceBindingContainer,UObject>((UObject *)this->_padding_);
  pFVar1 = (pUVar2->Bindings).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (longlong)(pUVar2->Bindings).ArrayNum * 8) {
      return -1;
    }
    if (*(UOptimusComponentSourceBinding **)pFVar3 == (UOptimusComponentSourceBinding *)0x0) {
      bVar4 = this == (UOptimusComponentSourceBinding *)0x0;
    }
    else {
      bVar4 = *(UOptimusComponentSourceBinding **)pFVar3 == this;
    }
    if (bVar4) break;
    pFVar3 = pFVar3 + 8;
  }
  return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
}

// GetOwningDeformer @ 14e1cbfd0

UOptimusDeformer * __thiscall
UOptimusComponentSourceBinding::GetOwningDeformer(UOptimusComponentSourceBinding *this)

{
  UOptimusComponentSourceBindingContainer *pUVar1;
  UOptimusDeformer *pUVar2;
  
  pUVar1 = CastChecked<UOptimusComponentSourceBindingContainer,UObject>((UObject *)this->_padding_);
  if (pUVar1 != (UOptimusComponentSourceBindingContainer *)0x0) {
    pUVar2 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar1->_padding_);
    return pUVar2;
  }
  return (UOptimusDeformer *)0x0;
}

// GetPrimaryBindingName @ 14e1d4130

FName __cdecl UOptimusComponentSourceBinding::GetPrimaryBindingName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = PrimaryBindingName;
  return in_RCX;
}

// GetPrivateStaticClass @ 14e1d4b90

UClass * __cdecl UOptimusComponentSourceBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComponentSourceBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComponentSourceBinding",
               &Z_Registration_Info_UClass_UOptimusComponentSourceBinding.InnerSingleton,
               StaticRegisterNativesUOptimusComponentSourceBinding,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusComponentSourceBinding>,
               InternalVTableHelperCtorCaller<UOptimusComponentSourceBinding>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComponentSourceBinding.InnerSingleton;
}

// StaticRegisterNativesUOptimusComponentSourceBinding @ 14e2257f0

void __cdecl
UOptimusComponentSourceBinding::StaticRegisterNativesUOptimusComponentSourceBinding(void)

{
  return;
}

