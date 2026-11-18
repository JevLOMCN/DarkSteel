// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FPathTracingDebugModeInfo @ 1450afa50

FPathTracingDebugModeInfo * __thiscall
FPathTracingDebugModeInfo::FPathTracingDebugModeInfo(FPathTracingDebugModeInfo *this)

{
  undefined4 local_res8 [2];
  TPairInitializer<FName_&&,int_&&> local_res10;
  FName *local_28;
  undefined4 *local_20;
  
  *(undefined8 *)&this->Map = 0;
  *(undefined8 *)&(this->Map).field_0x8 = 0;
  *(undefined8 *)&(this->Map).field_0x20 = 0;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  *(undefined4 *)&(this->Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  *(undefined8 *)&(this->Map).field_0x40 = 0;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  (this->CVarHelpText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVarHelpText).Data.ArrayNum = 0;
  (this->CVarHelpText).Data.ArrayMax = 0;
  ::FString::operator=
            (&this->CVarHelpText,
             L"Enables a debug mode for the path tracer which can visualize payload fields and perform basic lighting without sample accumulation.\nAllowed values:\n"
            );
  local_res8[0] = 0;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"Radiance");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - Radiance\n",0xc);
  local_res8[0] = 1;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"WorldNormal");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - WorldNormal\n",0xf);
  local_res8[0] = 2;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"WorldSmoothNormal");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - WorldSmoothNormal\n",0x15);
  local_res8[0] = 3;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"WorldGeoNormal");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - WorldGeoNormal\n",0x12);
  local_res8[0] = 4;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"BaseColor");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - BaseColor\n",0xd);
  local_res8[0] = 5;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"DiffuseColor");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - DiffuseColor\n",0x10);
  local_res8[0] = 6;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"SpecularColor");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - SpecularColor\n",0x11);
  local_res8[0] = 7;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"TransparencyColor");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - TransparencyColor\n",0x15);
  local_res8[0] = 8;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"Metallic");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - Metallic\n",0xc);
  local_res8[0] = 9;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"Specular");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - Specular\n",0xc);
  local_res8[0] = 10;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"Roughness");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - Roughness\n",0xd);
  local_res8[0] = 0xb;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"IOR");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - IOR\n",7);
  local_res8[0] = 0xc;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"ShadingModel");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - ShadingModel\n",0x10);
  local_res8[0] = 0xd;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"LightingChannelMask");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - LightingChannelMask\n",0x17);
  local_res8[0] = 0xe;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"CustomData0");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - CustomData0\n",0xf);
  local_res8[0] = 0xf;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"CustomData1");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - CustomData1\n",0xf);
  local_res8[0] = 0x10;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"WorldPosition");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - WorldPosition\n",0x11);
  local_res8[0] = 0x11;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"PrimaryRays");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - PrimaryRays\n",0xf);
  local_res8[0] = 0x12;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"WorldTangent");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - WorldTangent\n",0x10);
  local_res8[0] = 0x13;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"Anisotropy");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - Anisotropy\n",0xe);
  local_res8[0] = 0x14;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"LightGridCount");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - LightGridCount\n",0x12);
  local_res8[0] = 0x15;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"LightGridAxis");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - LightGridAxis\n",0x11);
  local_res8[0] = 0x16;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"DecalGridCount");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - DecalGridCount\n",0x12);
  local_res8[0] = 0x17;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"DecalGridAxis");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - DecalGridAxis\n",0x11);
  local_res8[0] = 0x18;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"VolumeLightCount");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - VolumeLightCount\n",0x14);
  local_res8[0] = 0x19;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"HitKind");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - HitKind\n",0xb);
  local_res8[0] = 0x1a;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"TransparencyCount");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - TransparencyCount\n",0x15);
  local_res8[0] = 0x1b;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"SSSColor");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - SSSColor\n",0xc);
  local_res8[0] = 0x1c;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"SSSRadius");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - SSSRadius\n",0xd);
  local_res8[0] = 0x1d;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"SSSWeight");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - SSSWeight\n",0xd);
  local_res8[0] = 0x1e;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"SSSPhase");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - SSSPhase\n",0xc);
  local_res8[0] = 0x1f;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"FuzzColor");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - FuzzColor\n",0xd);
  local_res8[0] = 0x20;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"FuzzRoughness");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - FuzzRoughness\n",0x11);
  local_res8[0] = 0x21;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"FuzzAmount");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - FuzzAmount\n",0xe);
  local_res8[0] = 0x22;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"BSDFOpacity");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - BSDFOpacity\n",0xf);
  local_res8[0] = 0x23;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"SubstrateWeightV");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - SubstrateWeightV\n",0x14);
  local_res8[0] = 0x24;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"SubstrateTransmittanceN");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - SubstrateTransmittanceN\n",0x1b);
  local_res8[0] = 0x25;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"SubstrateCoverageAboveN");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - SubstrateCoverageAboveN\n",0x1b);
  local_res8[0] = 0x26;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"SubstrateF90");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - SubstrateF90\n",0x10);
  local_res8[0] = 0x27;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"EyeIrisMask");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - EyeIrisMask\n",0xf);
  local_res8[0] = 0x29;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"EyeIrisNormal");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - EyeIrisNormal\n",0x11);
  local_res8[0] = 0x28;
  local_28 = ::FName::FName((FName *)&local_res10.Value,L"EyeCausticNormal");
  local_20 = local_res8;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_28);
  ::FString::AppendChars(&this->CVarHelpText,L" - EyeCausticNormal\n",0x14);
  return this;
}

// Get @ 1450cebd0

FPathTracingDebugModeInfo * __cdecl FPathTracingDebugModeInfo::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPathTracingDebugModeInfo&___ptr64___cdecl_FPathTracingDebugModeInfo::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPathTracingDebugModeInfo&___ptr64___cdecl_FPathTracingDebugModeInfo::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPathTracingDebugModeInfo&___ptr64___cdecl_FPathTracingDebugModeInfo::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FPathTracingDebugModeInfo
                (&`public:_static_struct_FPathTracingDebugModeInfo&___ptr64___cdecl_FPathTracingDebugModeInfo::Get(void)'
                  ::__l2::Singleton);
      atexit(`FPathTracingDebugModeInfo::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`public:_static_struct_FPathTracingDebugModeInfo&___ptr64___cdecl_FPathTracingDebugModeInfo::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPathTracingDebugModeInfo&___ptr64___cdecl_FPathTracingDebugModeInfo::Get(void)'
              ::__l2::Singleton;
    }
  }
  return &`public:_static_struct_FPathTracingDebugModeInfo&___ptr64___cdecl_FPathTracingDebugModeInfo::Get(void)'
          ::__l2::Singleton;
}

