// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 20

// UEOpEquals @ 148e83470

bool __thiscall
TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UDataTable,bool> @ 148e9a480

bool __thiscall
TWeakObjectPtr<UDataTable,FWeakObjectPtr>::UEOpEquals<UDataTable,bool>
          (TWeakObjectPtr<UDataTable,FWeakObjectPtr> *this,UDataTable *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UDataTable *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UPhysicsAsset,bool> @ 148e9a530

bool __thiscall
TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr>::UEOpEquals<UPhysicsAsset,bool>
          (TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr> *this,
          TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<USkeletalMeshComponent,bool> @ 148e9a580

bool __thiscall
TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals<USkeletalMeshComponent,bool>
          (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals @ 148ed5060

bool __thiscall
TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UStaticMeshComponent,bool> @ 148f44590

bool __thiscall
TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>::UEOpEquals<UStaticMeshComponent,bool>
          (TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UNiagaraComponent,bool> @ 1490215c0

bool __thiscall
TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals<UNiagaraComponent,bool>
          (TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UNiagaraDataChannel_const_,bool> @ 1490ac740

bool __thiscall
TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>::
UEOpEquals<UNiagaraDataChannel_const_,bool>
          (TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UTexture,bool> @ 1490ac790

bool __thiscall
TWeakObjectPtr<UTexture,FWeakObjectPtr>::UEOpEquals<UTexture,bool>
          (TWeakObjectPtr<UTexture,FWeakObjectPtr> *this,UTexture *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UTexture *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<ALandscape_const_,bool> @ 149167c20

bool __thiscall
TWeakObjectPtr<ALandscape_const_,FWeakObjectPtr>::UEOpEquals<ALandscape_const_,bool>
          (TWeakObjectPtr<ALandscape_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<ALandscape_const_,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UPhysicalMaterial_const_,bool> @ 149167c70

bool __thiscall
TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr>::UEOpEquals<UPhysicalMaterial_const_,bool>
          (TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UPhysicalMaterial,bool> @ 149167cc0

bool __thiscall
TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr>::UEOpEquals<UPhysicalMaterial,bool>
          (TWeakObjectPtr<UPhysicalMaterial_const_,FWeakObjectPtr> *this,UPhysicalMaterial *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UPhysicalMaterial *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPhysicalMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPhysicalMaterial *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<USparseVolumeTextureFrame,bool> @ 149210d10

bool __thiscall
TWeakObjectPtr<USparseVolumeTexture,FWeakObjectPtr>::UEOpEquals<USparseVolumeTextureFrame,bool>
          (TWeakObjectPtr<USparseVolumeTexture,FWeakObjectPtr> *this,
          USparseVolumeTextureFrame *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USparseVolumeTextureFrame *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USparseVolumeTextureFrame *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (USparseVolumeTextureFrame *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UStaticMesh,bool> @ 149210dc0

bool __thiscall
TWeakObjectPtr<UStaticMesh,FWeakObjectPtr>::UEOpEquals<UStaticMesh,bool>
          (TWeakObjectPtr<UStaticMesh,FWeakObjectPtr> *this,
          TWeakObjectPtr<UStaticMesh,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UNiagaraComponent_const_,bool> @ 149273bc0

bool __thiscall
TWeakObjectPtr<UNiagaraComponent_const_,FWeakObjectPtr>::UEOpEquals<UNiagaraComponent_const_,bool>
          (TWeakObjectPtr<UNiagaraComponent_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNiagaraComponent_const_,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UNiagaraEmitter_const_,bool> @ 149273c10

bool __thiscall
TWeakObjectPtr<UNiagaraEmitter_const_,FWeakObjectPtr>::UEOpEquals<UNiagaraEmitter_const_,bool>
          (TWeakObjectPtr<UNiagaraEmitter_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNiagaraEmitter_const_,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UNiagaraSystem_const_,bool> @ 149273c60

bool __thiscall
TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr>::UEOpEquals<UNiagaraSystem_const_,bool>
          (TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UNiagaraEmitter,bool> @ 149273cb0

bool __thiscall
TWeakObjectPtr<UNiagaraEmitter_const_,FWeakObjectPtr>::UEOpEquals<UNiagaraEmitter,bool>
          (TWeakObjectPtr<UNiagaraEmitter_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UNiagaraSystem,bool> @ 149273d00

bool __thiscall
TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr>::UEOpEquals<UNiagaraSystem,bool>
          (TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UNiagaraEffectType,bool> @ 149331c60

bool __thiscall
TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>::UEOpEquals<UNiagaraEffectType,bool>
          (TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

