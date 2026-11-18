// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// RegisterGCObject @ 141eb1960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FGCObject::RegisterGCObject(FGCObject *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGCObjectReferencer *pUVar3;
  FUObjectItem *this_00;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((!GIsRequestingExit) && (this->bReferenceAdded == false)) {
    if (GGCObjectReferencer == (UGCObjectReferencer *)0x0) {
      pUVar1 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar2 = Z_Construct_UClass_UGCObjectReferencer_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar2);
      local_98._8_8_ = pUVar1;
      pUVar3 = (UGCObjectReferencer *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar4 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      GGCObjectReferencer = pUVar3;
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      FUObjectItem::SetRootFlags(this_00,RootSet);
    }
    UGCObjectReferencer::AddObject(GGCObjectReferencer,this);
    this->bReferenceAdded = true;
  }
  return;
}

// StaticInit @ 141ebe330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FGCObject::StaticInit(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGCObjectReferencer *pUVar3;
  FUObjectItem *this;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (GGCObjectReferencer == (UGCObjectReferencer *)0x0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UGCObjectReferencer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar3 = (UGCObjectReferencer *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    GGCObjectReferencer = pUVar3;
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
  }
  return;
}

// UnregisterGCObject @ 141ec44a0

void __thiscall FGCObject::UnregisterGCObject(FGCObject *this)

{
  if ((GGCObjectReferencer != (UGCObjectReferencer *)0x0) && (this->bReferenceAdded != false)) {
    UGCObjectReferencer::RemoveObject(GGCObjectReferencer,this);
    this->bReferenceAdded = false;
  }
  return;
}

// ~FGCObject @ 141ed5ba0

void __thiscall FGCObject::~FGCObject(FGCObject *this)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  UnregisterGCObject(this);
  return;
}

// GetReferencerPropertyName @ 141efa4e0

bool __thiscall
FGCObject::GetReferencerPropertyName(FGCObject *this,UObject *param_1,FString *param_2)

{
  return false;
}

