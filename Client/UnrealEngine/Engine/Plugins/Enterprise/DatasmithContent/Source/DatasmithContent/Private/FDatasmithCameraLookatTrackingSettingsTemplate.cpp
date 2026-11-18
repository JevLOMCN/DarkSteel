// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 5

// StaticStruct @ 14e2ecfe0

UScriptStruct * __cdecl FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate,
                           (UObject *)pUVar1,L"DatasmithCameraLookatTrackingSettingsTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate.
         OuterSingleton;
}

// FDatasmithCameraLookatTrackingSettingsTemplate @ 14e2f3cd0

FDatasmithCameraLookatTrackingSettingsTemplate * __thiscall
FDatasmithCameraLookatTrackingSettingsTemplate::FDatasmithCameraLookatTrackingSettingsTemplate
          (FDatasmithCameraLookatTrackingSettingsTemplate *this)

{
  this->bEnableLookAtTracking = '\0';
  this->bAllowRoll = '\0';
  *(undefined8 *)&(this->ActorToTrack).SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->ActorToTrack).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ActorToTrack).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ActorToTrack).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ActorToTrack).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->ActorToTrack).SoftObjectPtr.field_0x18,0);
  return this;
}

// Apply @ 14e2f7ca0

void __thiscall
FDatasmithCameraLookatTrackingSettingsTemplate::Apply
          (FDatasmithCameraLookatTrackingSettingsTemplate *this,
          FCameraLookatTrackingSettings *param_1,
          FDatasmithCameraLookatTrackingSettingsTemplate *param_2)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *local_res18;
  undefined1 local_38 [8];
  FSoftObjectPath local_30;
  
  if (((((param_2 != (FDatasmithCameraLookatTrackingSettingsTemplate *)0x0) &&
        (((param_1->bEnableLookAtTracking ^ param_2->bEnableLookAtTracking) & 1) != 0)) ||
       (*(byte *)param_1 =
             *(byte *)param_1 ^ (param_1->bEnableLookAtTracking ^ this->bEnableLookAtTracking) & 1,
       param_2 != (FDatasmithCameraLookatTrackingSettingsTemplate *)0x0)) &&
      (((param_2->bAllowRoll ^ param_1->bAllowRoll) & 1) != 0)) ||
     (param_1->field_0x68 = param_1->field_0x68 ^ (this->bAllowRoll ^ param_1->bAllowRoll) & 1,
     param_2 != (FDatasmithCameraLookatTrackingSettingsTemplate *)0x0)) {
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&param_2->ActorToTrack);
    if (pUVar3 == (UObject *)0x0) {
LAB_14e2f7d32:
      pUVar3 = (UObject *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_14e2f7d32;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_30.AssetPath.AssetName.Number = 0;
    local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_30.AssetPath.PackageName.Number = 0;
    local_30.SubPathString.Data.ArrayNum = 0;
    local_30.SubPathString.Data.ArrayMax = 0;
    local_38 = (undefined1  [8])0x0;
    local_res18 = (UObject *)0x0;
    FUtf8String::Reset(&local_30.SubPathString,0);
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res18);
    bVar2 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(param_1->ActorToTrack).SoftObjectPtr.field_0x8,&local_30
                      );
    if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
      return;
    }
  }
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ActorToTrack);
  if (pUVar3 == (UObject *)0x0) {
    if (*(longlong *)&(this->ActorToTrack).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->ActorToTrack).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ActorToTrack);
      goto LAB_14e2f7df8;
    }
  }
  else {
LAB_14e2f7df8:
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         (local_res18 = pUVar3,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) goto LAB_14e2f7e23;
    }
  }
  local_res18 = (UObject *)0x0;
LAB_14e2f7e23:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  FSoftObjectPtr::operator=(&(param_1->ActorToTrack).SoftObjectPtr,(FObjectPtr)&local_res18);
  return;
}

// Equals @ 14e2f8d30

bool __thiscall
FDatasmithCameraLookatTrackingSettingsTemplate::Equals
          (FDatasmithCameraLookatTrackingSettingsTemplate *this,
          FDatasmithCameraLookatTrackingSettingsTemplate *param_1)

{
  bool bVar1;
  
  if ((((((undefined1 *)this)->bEnableLookAtTracking ^
        ((undefined1 *)param_1)->bEnableLookAtTracking) & 1) == 0) &&
     (((*(undefined1 *)this ^ *(undefined1 *)param_1) & 2) == 0)) {
    bVar1 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(this->ActorToTrack).SoftObjectPtr.field_0x8,
                       (FSoftObjectPath *)&(param_1->ActorToTrack).SoftObjectPtr.field_0x8);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Load @ 14e2fdc90

void __thiscall
FDatasmithCameraLookatTrackingSettingsTemplate::Load
          (FDatasmithCameraLookatTrackingSettingsTemplate *this,
          FCameraLookatTrackingSettings *param_1)

{
  byte bVar1;
  
  bVar1 = (this->bEnableLookAtTracking ^ param_1->bEnableLookAtTracking) & 1 ^ *(byte *)this;
  *(byte *)this = bVar1;
  *(byte *)this = (param_1->field_0x68 * '\x02' ^ bVar1) & 2 ^ bVar1;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ActorToTrack,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->ActorToTrack);
  return;
}

