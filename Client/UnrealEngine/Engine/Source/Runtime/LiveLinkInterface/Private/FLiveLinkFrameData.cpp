// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 2

// StaticStruct @ 14cfaf2d0

UScriptStruct * __cdecl FLiveLinkFrameData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkFrameData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkFrameData,(UObject *)pUVar1,
                         L"LiveLinkFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkFrameData.OuterSingleton;
}

// FLiveLinkFrameData @ 14cfb5410

FLiveLinkFrameData * __thiscall FLiveLinkFrameData::FLiveLinkFrameData(FLiveLinkFrameData *this)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = 0;
  (this->Transforms).ArrayMax = 0;
  (this->CurveElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveElements).ArrayNum = 0;
  (this->CurveElements).ArrayMax = 0;
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
  return this;
}

