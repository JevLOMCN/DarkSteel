// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// StaticStruct @ 1464cfd10

UScriptStruct * __cdecl FAudioOutputDeviceInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioOutputDeviceInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UScriptStruct_FAudioOutputDeviceInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioOutputDeviceInfo,(UObject *)pUVar1,
                         L"AudioOutputDeviceInfo");
  }
  return Z_Registration_Info_UScriptStruct_FAudioOutputDeviceInfo.OuterSingleton;
}

// FAudioOutputDeviceInfo @ 1464d7640

FAudioOutputDeviceInfo * __thiscall
FAudioOutputDeviceInfo::FAudioOutputDeviceInfo
          (FAudioOutputDeviceInfo *this,FAudioPlatformDeviceInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  ::FString::FString(&this->Name,&param_1->Name);
  ::FString::FString(&this->DeviceId,&param_1->DeviceId);
  this->NumChannels = param_1->NumChannels;
  this->SampleRate = param_1->SampleRate;
  this->Format = (EAudioMixerStreamDataFormatType)param_1->Format;
  (this->OutputChannelArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputChannelArray).ArrayNum = 0;
  (this->OutputChannelArray).ArrayMax = 0;
  this->field_0x40 =
       ((this->bIsSystemDefault ^ param_1->bIsSystemDefault) & 1 ^ this->field_0x40) & 0xfd;
  pFVar6 = (param_1->OutputChannelArray).AllocatorInstance.Data;
  iVar4 = (param_1->OutputChannelArray).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar4 * 4;
  while( true ) {
    if ((param_1->OutputChannelArray).ArrayNum != iVar4) {
      `TCheckedPointerIterator<enum_EAudioMixerChannel::Type_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    iVar5 = (this->OutputChannelArray).ArrayNum;
    FVar3 = *pFVar6;
    if (iVar5 == (this->OutputChannelArray).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->OutputChannelArray).AllocatorInstance,
                         &(this->OutputChannelArray).ArrayMax);
    }
    pFVar6 = pFVar6 + 4;
    (this->OutputChannelArray).ArrayNum = iVar5 + 1;
    (this->OutputChannelArray).AllocatorInstance.Data[iVar5] = FVar3;
  }
  return this;
}

