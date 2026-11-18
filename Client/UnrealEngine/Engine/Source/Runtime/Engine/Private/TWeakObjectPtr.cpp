// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 54

// UEOpEquals<AActor_const_,bool> @ 147378150

bool __thiscall
TWeakObjectPtr<AActor_const_,FWeakObjectPtr>::UEOpEquals<AActor_const_,bool>
          (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals @ 14747e160

bool __thiscall
TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UAnimMontage,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UScriptStruct,bool> @ 1474ace30

bool __thiscall
TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
          (TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *this,
          TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UScriptStruct,bool> @ 14752f030

bool __thiscall
TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
          (TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *this,UScriptStruct *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
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

// UEOpEquals<USkeletalMesh_const_,bool> @ 1475a3580

bool __thiscall
TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr>::UEOpEquals<USkeletalMesh_const_,bool>
          (TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<USkeleton_const_,bool> @ 1475a35d0

bool __thiscall
TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>::UEOpEquals<USkeleton_const_,bool>
          (TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UObject,bool> @ 1475a3620

bool __thiscall
TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
          (TWeakObjectPtr<UObject,FWeakObjectPtr> *this,UObject *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
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

// UEOpEquals<UObject,bool> @ 1475a36d0

bool __thiscall
TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<UObject,bool>
          (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *this,UObject *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
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

// UEOpEquals<USkeletalMesh,bool> @ 1475a3780

bool __thiscall
TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
          (TWeakObjectPtr<USkeletalMesh_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_1)

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

// UEOpEquals<USkeletalMesh,bool> @ 1475a37d0

bool __thiscall
TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
          (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *this,
          TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UPrimitiveComponent,bool> @ 1476e6440

bool __thiscall
TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals<UPrimitiveComponent,bool>
          (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *param_1)

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

// UEOpEquals @ 14787a6e0

bool __thiscall
TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UPlayerInput,bool> @ 1478a4f80

bool __thiscall
TWeakObjectPtr<UPlayerInput,FWeakObjectPtr>::UEOpEquals<UPlayerInput,bool>
          (TWeakObjectPtr<UPlayerInput,FWeakObjectPtr> *this,UPlayerInput *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UPlayerInput *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPlayerInput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPlayerInput *)0x0)) {
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

// UEOpEquals @ 1478fae10

bool __thiscall
TWeakObjectPtr<UPlayerInput,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UPlayerInput,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<USceneCaptureComponent,bool> @ 147927ab0

bool __thiscall
TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>::UEOpEquals<USceneCaptureComponent,bool>
          (TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *param_1)

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

// UEOpEquals<USkinnedMeshComponent,bool> @ 147927b00

bool __thiscall
TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::UEOpEquals<USkinnedMeshComponent,bool>
          (TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *param_1)

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

// UEOpEquals<USkinnedMeshComponent,bool> @ 147927b50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::UEOpEquals<USkinnedMeshComponent,bool>
          (TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *this,USkinnedMeshComponent *param_1
          )

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USkinnedMeshComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkinnedMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (USkinnedMeshComponent *)0x0)) {
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

// UEOpEquals @ 147975d90

bool __thiscall
TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 147b1d940

bool __thiscall
TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UEdGraphPin_Deprecated_const_,bool> @ 147b37ac0

bool __thiscall
TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr>::
UEOpEquals<UEdGraphPin_Deprecated_const_,bool>
          (TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UEdGraphNode,bool> @ 147b37b10

bool __thiscall
TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>::UEOpEquals<UEdGraphNode,bool>
          (TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr> *this,
          TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UEdGraphPin_Deprecated,bool> @ 147b37b60

bool __thiscall
TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr>::
UEOpEquals<UEdGraphPin_Deprecated,bool>
          (TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UPrimitiveComponent,bool> @ 147c2b340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals<UPrimitiveComponent,bool>
          (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *this,UPrimitiveComponent *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UPrimitiveComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
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

// UEOpEquals @ 147c8d510

bool __thiscall
TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<AActor,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<ULevel,bool> @ 147ea30e0

bool __thiscall
TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
          (TWeakObjectPtr<ULevel,FWeakObjectPtr> *this,
          TWeakObjectPtr<ULevel,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UNetConnection_const_,bool> @ 148012b70

bool __thiscall
TWeakObjectPtr<UNetConnection_const_,FWeakObjectPtr>::UEOpEquals<UNetConnection_const_,bool>
          (TWeakObjectPtr<UNetConnection_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNetConnection_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UClass,bool> @ 148012bc0

bool __thiscall
TWeakObjectPtr<UClass_const_,FWeakObjectPtr>::UEOpEquals<UClass,bool>
          (TWeakObjectPtr<UClass_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UClass,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UNetConnection,bool> @ 148012c10

bool __thiscall
TWeakObjectPtr<UNetConnection_const_,FWeakObjectPtr>::UEOpEquals<UNetConnection,bool>
          (TWeakObjectPtr<UNetConnection_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNetConnection,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UNetworkMetricsBaseListener_const_,bool> @ 1480871a0

bool __thiscall
TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr>::
UEOpEquals<UNetworkMetricsBaseListener_const_,bool>
          (TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UNetworkMetricsBaseListener,bool> @ 1480871f0

bool __thiscall
TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr>::
UEOpEquals<UNetworkMetricsBaseListener,bool>
          (TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UFXSystemAsset_const_,bool> @ 1481597a0

bool __thiscall
TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>::UEOpEquals<UFXSystemAsset_const_,bool>
          (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UFXSystemComponent_const_,bool> @ 1481597f0

bool __thiscall
TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>::UEOpEquals<UFXSystemComponent_const_,bool>
          (TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UParticleSystemComponent,bool> @ 1481c5df0

bool __thiscall
TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr>::UEOpEquals<UParticleSystemComponent,bool>
          (TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<UParticleSystemComponent,FWeakObjectPtr> *param_1)

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

// UEOpEquals @ 148222810

bool __thiscall
TWeakObjectPtr<UBodySetupCore,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UBodySetupCore,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<UClusterUnionComponent,bool> @ 14824bc90

bool __thiscall
TWeakObjectPtr<UClusterUnionComponent,FWeakObjectPtr>::UEOpEquals<UClusterUnionComponent,bool>
          (TWeakObjectPtr<UClusterUnionComponent,FWeakObjectPtr> *this,
          UClusterUnionComponent *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UClusterUnionComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClusterUnionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UClusterUnionComponent *)0x0)) {
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

// UEOpEquals<UPrimitiveComponent_const_,bool> @ 1482d7c40

bool __thiscall
TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr>::
UEOpEquals<UPrimitiveComponent_const_,bool>
          (TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UInputComponent,bool> @ 148347bc0

bool __thiscall
TWeakObjectPtr<UInputComponent,FWeakObjectPtr>::UEOpEquals<UInputComponent,bool>
          (TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *this,
          TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UInputComponent,bool> @ 148347c10

bool __thiscall
TWeakObjectPtr<UInputComponent,FWeakObjectPtr>::UEOpEquals<UInputComponent,bool>
          (TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *this,UInputComponent *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UInputComponent *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInputComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputComponent *)0x0)) {
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

// TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> @ 148348be0

TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> * __thiscall
TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>
          (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *this)

{
  this->WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UEOpEquals @ 1484995b0

bool __thiscall
TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UWorld,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals<USoundEffectPreset,bool> @ 148690320

bool __thiscall
TWeakObjectPtr<USoundEffectPreset,FWeakObjectPtr>::UEOpEquals<USoundEffectPreset,bool>
          (TWeakObjectPtr<USoundEffectPreset,FWeakObjectPtr> *this,USoundEffectPreset *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  USoundEffectPreset *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundEffectPreset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundEffectPreset *)0x0)
     ) {
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

// UEOpEquals<AAutoRTFMTestActor,bool> @ 148803d70

bool __thiscall
TWeakObjectPtr<AAutoRTFMTestActor,FWeakObjectPtr>::UEOpEquals<AAutoRTFMTestActor,bool>
          (TWeakObjectPtr<AAutoRTFMTestActor,FWeakObjectPtr> *this,AAutoRTFMTestActor *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  AAutoRTFMTestActor *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AAutoRTFMTestActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AAutoRTFMTestActor *)0x0)
     ) {
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

// UEOpEquals<UExporter_const_,bool> @ 148903a40

bool __thiscall
TWeakObjectPtr<UExporter_const_,FWeakObjectPtr>::UEOpEquals<UExporter_const_,bool>
          (TWeakObjectPtr<UExporter_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UExporter_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<ACameraActor,bool> @ 1489b2090

bool __thiscall
TWeakObjectPtr<ACameraActor,FWeakObjectPtr>::UEOpEquals<ACameraActor,bool>
          (TWeakObjectPtr<ACameraActor,FWeakObjectPtr> *this,
          TWeakObjectPtr<ACameraActor,FWeakObjectPtr> *param_1)

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

// UEOpEquals<AController,bool> @ 1489b20e0

bool __thiscall
TWeakObjectPtr<AController,FWeakObjectPtr>::UEOpEquals<AController,bool>
          (TWeakObjectPtr<AController,FWeakObjectPtr> *this,
          TWeakObjectPtr<AController,FWeakObjectPtr> *param_1)

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

// UEOpEquals<APhysicsVolume,bool> @ 1489b2130

bool __thiscall
TWeakObjectPtr<APhysicsVolume,FWeakObjectPtr>::UEOpEquals<APhysicsVolume,bool>
          (TWeakObjectPtr<APhysicsVolume,FWeakObjectPtr> *this,
          TWeakObjectPtr<APhysicsVolume,FWeakObjectPtr> *param_1)

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

// UEOpEquals<APlayerController,bool> @ 1489b2180

bool __thiscall
TWeakObjectPtr<APlayerController,FWeakObjectPtr>::UEOpEquals<APlayerController,bool>
          (TWeakObjectPtr<APlayerController,FWeakObjectPtr> *this,
          TWeakObjectPtr<APlayerController,FWeakObjectPtr> *param_1)

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

// UEOpEquals<APlayerController,bool> @ 1489b21d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<APlayerController,FWeakObjectPtr>::UEOpEquals<APlayerController,bool>
          (TWeakObjectPtr<APlayerController,FWeakObjectPtr> *this,APlayerController *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  APlayerController *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (APlayerController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
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

// UEOpEquals<UWorld,bool> @ 1489b2280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld,bool>
          (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *this,UWorld *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UWorld *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
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

// UEOpEquals<URuntimeHashExternalStreamingObjectBase_const_,bool> @ 148ab2ea0

bool __thiscall
TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase_const_,FWeakObjectPtr>::
UEOpEquals<URuntimeHashExternalStreamingObjectBase_const_,bool>
          (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<URuntimeHashExternalStreamingObjectBase,bool> @ 148ab2ef0

bool __thiscall
TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>::
UEOpEquals<URuntimeHashExternalStreamingObjectBase,bool>
          (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> *this,
          TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> *param_1)

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

// UEOpEquals<URuntimeHashExternalStreamingObjectBase,bool> @ 148ab2f40

bool __thiscall
TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr>::
UEOpEquals<URuntimeHashExternalStreamingObjectBase,bool>
          (TWeakObjectPtr<URuntimeHashExternalStreamingObjectBase,FWeakObjectPtr> *this,
          URuntimeHashExternalStreamingObjectBase *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  URuntimeHashExternalStreamingObjectBase *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
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

// UEOpEquals<ULevelStreaming_const_,bool> @ 148ae9120

bool __thiscall
TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>::UEOpEquals<ULevelStreaming_const_,bool>
          (TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr> *param_1)

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

// UEOpEquals<UWorldPartitionLevelStreamingDynamic_const_,bool> @ 148ae9170

bool __thiscall
TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic_const_,FWeakObjectPtr>::
UEOpEquals<UWorldPartitionLevelStreamingDynamic_const_,bool>
          (TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic_const_,FWeakObjectPtr> *this,
          TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic_const_,FWeakObjectPtr> *param_1)

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

