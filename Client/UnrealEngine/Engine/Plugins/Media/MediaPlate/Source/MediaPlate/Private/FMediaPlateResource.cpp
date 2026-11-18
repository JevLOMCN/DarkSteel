// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 9

// StaticStruct @ 14ea87450

UScriptStruct * __cdecl FMediaPlateResource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaPlateResource.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MediaPlate();
    Z_Registration_Info_UScriptStruct_FMediaPlateResource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlateResource,(UObject *)pUVar1,
                         L"MediaPlateResource");
  }
  return Z_Registration_Info_UScriptStruct_FMediaPlateResource.OuterSingleton;
}

// FMediaPlateResource @ 14ea893a0

FMediaPlateResource * __thiscall FMediaPlateResource::FMediaPlateResource(FMediaPlateResource *this)

{
  undefined1 *puVar1;
  
  this->Type = Asset;
  (this->ExternalMediaPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalMediaPath).Data.ArrayNum = 0;
  (this->ExternalMediaPath).Data.ArrayMax = 0;
  puVar1 = &(this->MediaAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->MediaAsset).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->MediaAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->MediaAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->MediaAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->SourcePlaylist).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SourcePlaylist).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SourcePlaylist).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SourcePlaylist).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SourcePlaylist).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  return this;
}

// GetMediaAsset @ 14ea8b0a0

UMediaSource * __thiscall FMediaPlateResource::GetMediaAsset(FMediaPlateResource *this)

{
  int iVar1;
  UMediaSource *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMediaSource *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->MediaAsset);
  if (pUVar2 == (UMediaSource *)0x0) {
    if (*(longlong *)&(this->MediaAsset).SoftObjectPtr.field_0x8 == 0) {
      return (UMediaSource *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->MediaAsset).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UMediaSource *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->MediaAsset);
  }
  if (pUVar2 != (UMediaSource *)0x0) {
    pUVar3 = Z_Construct_UClass_UMediaSource_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMediaSource *)0x0;
}

// GetSourcePlaylist @ 14ea8b6a0

UMediaPlaylist * __thiscall FMediaPlateResource::GetSourcePlaylist(FMediaPlateResource *this)

{
  int iVar1;
  UMediaPlaylist *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMediaPlaylist *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SourcePlaylist);
  if (pUVar2 == (UMediaPlaylist *)0x0) {
    if (*(longlong *)&(this->SourcePlaylist).SoftObjectPtr.field_0x8 == 0) {
      return (UMediaPlaylist *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SourcePlaylist).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UMediaPlaylist *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SourcePlaylist);
  }
  if (pUVar2 != (UMediaPlaylist *)0x0) {
    pUVar3 = Z_Construct_UClass_UMediaPlaylist_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMediaPlaylist *)0x0;
}

// Init @ 14ea8ba10

void __thiscall FMediaPlateResource::Init(FMediaPlateResource *this,FMediaPlateResource *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  UMediaSource *pUVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  UMediaSource *local_res8;
  FString local_38;
  FString local_28;
  
  iVar7 = (param_1->ExternalMediaPath).Data.ArrayNum;
  pFVar5 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  iVar6 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = iVar4;
  }
  if (iVar6 != 0) {
    pFVar2 = ::FString::ConstructFromPtrSize
                       (&local_38,
                        (wchar_t *)(param_1->ExternalMediaPath).Data.AllocatorInstance.Data,iVar6);
    iVar7 = 0;
    if (&local_28 != pFVar2) {
      pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = (pFVar2->Data).ArrayNum;
      iVar7 = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar2 = &this->ExternalMediaPath;
    if (pFVar2 == &local_28) {
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
    }
    else {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar2->Data).AllocatorInstance.Data = pFVar5;
      (this->ExternalMediaPath).Data.ArrayNum = iVar4;
      (this->ExternalMediaPath).Data.ArrayMax = iVar7;
    }
  }
  pUVar3 = GetMediaAsset(param_1);
  if (pUVar3 != (UMediaSource *)0x0) {
    local_res8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FSoftObjectPtr::operator=(&(this->MediaAsset).SoftObjectPtr,(FObjectPtr)&local_res8);
  }
  local_res8 = (UMediaSource *)GetSourcePlaylist(param_1);
  if (local_res8 != (UMediaSource *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FSoftObjectPtr::operator=(&(this->SourcePlaylist).SoftObjectPtr,(FObjectPtr)&local_res8);
  }
  this->Type = param_1->Type;
  return;
}

// LoadExternalMedia @ 14ea8bf90

void __thiscall FMediaPlateResource::LoadExternalMedia(FMediaPlateResource *this,FString *param_1)

{
  this->Type = External;
  ::FString::operator=(&this->ExternalMediaPath,param_1);
  return;
}

// SelectAsset @ 14ea8f180

void __thiscall FMediaPlateResource::SelectAsset(FMediaPlateResource *this,UMediaSource *param_1)

{
  UMediaSource *local_res8 [4];
  
  this->Type = Asset;
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&(this->MediaAsset).SoftObjectPtr,(FObjectPtr)local_res8);
  return;
}

// SelectPlaylist @ 14ea8f2a0

void __thiscall
FMediaPlateResource::SelectPlaylist(FMediaPlateResource *this,UMediaPlaylist *param_1)

{
  UMediaPlaylist *local_res8 [4];
  
  this->Type = Playlist;
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlaylist *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&(this->SourcePlaylist).SoftObjectPtr,(FObjectPtr)local_res8);
  return;
}

// SetResourceType @ 14ea8fb60

void __thiscall
FMediaPlateResource::SetResourceType(FMediaPlateResource *this,EMediaPlateResourceType param_1)

{
  this->Type = param_1;
  return;
}

