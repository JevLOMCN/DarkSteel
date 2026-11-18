// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 3

// StaticStruct @ 14cfae3c0

UScriptStruct * __cdecl FLiveLinkBaseFrameData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,(UObject *)pUVar1,
                         L"LiveLinkBaseFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.OuterSingleton;
}

// FLiveLinkBaseFrameData @ 14cfb5280

FLiveLinkBaseFrameData * __thiscall
FLiveLinkBaseFrameData::FLiveLinkBaseFrameData(FLiveLinkBaseFrameData *this)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  (this->WorldTime).Offset = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *(undefined8 *)&(this->MetaData).StringMetaData = 0;
  *(undefined8 *)&(this->MetaData).StringMetaData.field_0x20 = 0;
  (this->WorldTime).Time = dVar1 + __real_4170000000000000;
  *(undefined8 *)&(this->MetaData).StringMetaData.field_0x8 = 0;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x34 = 0;
  *(undefined8 *)&(this->MetaData).StringMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x48 = 0;
  (this->MetaData).SceneTime.Time.FrameNumber = 0;
  (this->MetaData).SceneTime.Time.SubFrame = 0.0;
  (this->MetaData).SceneTime.Rate.Numerator = 0x18;
  (this->MetaData).SceneTime.Rate.Denominator = 1;
  (this->PropertyValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyValues).ArrayNum = 0;
  (this->PropertyValues).ArrayMax = 0;
  (this->ArrivalTime).WorldTime = 0.0;
  (this->ArrivalTime).SceneTime.Time.FrameNumber = 0;
  (this->ArrivalTime).SceneTime.Time.SubFrame = 0.0;
  (this->ArrivalTime).SceneTime.Rate.Numerator = 0x18;
  (this->ArrivalTime).SceneTime.Rate.Denominator = 1;
  this->FrameId = -1;
  return this;
}

// operator= @ 14cfb6ae0

FLiveLinkBaseFrameData * __thiscall
FLiveLinkBaseFrameData::operator=(FLiveLinkBaseFrameData *this,FLiveLinkBaseFrameData *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  FFrameRate FVar5;
  FFrameTime FVar6;
  
  dVar4 = (param_1->WorldTime).Offset;
  (this->WorldTime).Time = (param_1->WorldTime).Time;
  (this->WorldTime).Offset = dVar4;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&this->MetaData,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&param_1->MetaData);
  FVar5 = (param_1->MetaData).SceneTime.Rate;
  pTVar1 = &this->PropertyValues;
  (this->MetaData).SceneTime.Time = (param_1->MetaData).SceneTime.Time;
  (this->MetaData).SceneTime.Rate = FVar5;
  if (pTVar1 != &param_1->PropertyValues) {
    iVar3 = (param_1->PropertyValues).ArrayNum;
    piVar2 = &(this->PropertyValues).ArrayMax;
    _Src = (param_1->PropertyValues).AllocatorInstance.Data;
    (this->PropertyValues).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
  FVar6 = (param_1->ArrivalTime).SceneTime.Time;
  (this->ArrivalTime).WorldTime = (param_1->ArrivalTime).WorldTime;
  (this->ArrivalTime).SceneTime.Time = FVar6;
  (this->ArrivalTime).SceneTime.Rate = (param_1->ArrivalTime).SceneTime.Rate;
  this->FrameId = param_1->FrameId;
  return this;
}

