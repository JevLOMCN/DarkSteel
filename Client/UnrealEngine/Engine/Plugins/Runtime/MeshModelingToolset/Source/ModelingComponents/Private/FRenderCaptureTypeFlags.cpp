// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// operator== @ 14cb656d0

bool __thiscall
UE::Geometry::FRenderCaptureTypeFlags::operator==
          (FRenderCaptureTypeFlags *this,FRenderCaptureTypeFlags *param_1)

{
  undefined1 local_res8 [32];
  FRenderCaptureTypeFlags *local_28;
  FRenderCaptureTypeFlags *local_20;
  undefined1 *local_18;
  
  local_18 = local_res8;
  local_res8[0] = 1;
  local_28 = this;
  local_20 = param_1;
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,BaseColor);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Roughness);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Specular);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Metallic);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,CombinedMRS);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,WorldNormal);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Emissive);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Opacity);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,SubsurfaceColor);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,DeviceDepth);
  return (bool)local_res8[0];
}

// operator!= @ 14cb65820

bool __thiscall
UE::Geometry::FRenderCaptureTypeFlags::operator!=
          (FRenderCaptureTypeFlags *this,FRenderCaptureTypeFlags *param_1)

{
  char local_res8 [32];
  FRenderCaptureTypeFlags *local_28;
  FRenderCaptureTypeFlags *local_20;
  char *local_18;
  
  local_18 = local_res8;
  local_res8[0] = '\x01';
  local_28 = this;
  local_20 = param_1;
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,BaseColor);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Roughness);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Specular);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Metallic);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,CombinedMRS);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,WorldNormal);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Emissive);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,Opacity);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,SubsurfaceColor);
  `UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
            (&local_28,DeviceDepth);
  return local_res8[0] == '\0';
}

// operator[] @ 14cb65bb0

bool * __thiscall
UE::Geometry::FRenderCaptureTypeFlags::operator[]
          (FRenderCaptureTypeFlags *this,ERenderCaptureType param_1)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if ((int)param_1 < 0x21) {
    if (param_1 == WorldNormal) {
      return &this->bWorldNormal;
    }
    if (param_1 == BaseColor) {
      return &this->bBaseColor;
    }
    if (param_1 == Roughness) {
      return &this->bRoughness;
    }
    if (param_1 == Metallic) {
      return &this->bMetallic;
    }
    if (param_1 == Specular) {
      return &this->bSpecular;
    }
    if (param_1 == Emissive) {
      return &this->bEmissive;
    }
  }
  else {
    if (param_1 == DeviceDepth) {
      return &this->bDeviceDepth;
    }
    if (param_1 == CombinedMRS) {
      return &this->bCombinedMRS;
    }
    if (param_1 == Opacity) {
      return &this->bOpacity;
    }
    if (param_1 == SubsurfaceColor) {
      return &this->bSubsurfaceColor;
    }
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1012220025257328541>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                     ,99,"false");
  if (!bVar2) {
    return &this->bBaseColor;
  }
  pcVar1 = (code *)swi(3);
  pbVar3 = (bool *)(*pcVar1)();
  return pbVar3;
}

// operator[] @ 14cb65c90

bool * __thiscall
UE::Geometry::FRenderCaptureTypeFlags::operator[]
          (FRenderCaptureTypeFlags *this,ERenderCaptureType param_1)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if ((int)param_1 < 0x21) {
    if (param_1 == WorldNormal) {
      return &this->bWorldNormal;
    }
    if (param_1 == BaseColor) {
      return &this->bBaseColor;
    }
    if (param_1 == Roughness) {
      return &this->bRoughness;
    }
    if (param_1 == Metallic) {
      return &this->bMetallic;
    }
    if (param_1 == Specular) {
      return &this->bSpecular;
    }
    if (param_1 == Emissive) {
      return &this->bEmissive;
    }
  }
  else {
    if (param_1 == DeviceDepth) {
      return &this->bDeviceDepth;
    }
    if (param_1 == CombinedMRS) {
      return &this->bCombinedMRS;
    }
    if (param_1 == Opacity) {
      return &this->bOpacity;
    }
    if (param_1 == SubsurfaceColor) {
      return &this->bSubsurfaceColor;
    }
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1012220025257328541>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\WorldRenderCapture.cpp"
                     ,99,"false");
  if (!bVar2) {
    return &this->bBaseColor;
  }
  pcVar1 = (code *)swi(3);
  pbVar3 = (bool *)(*pcVar1)();
  return pbVar3;
}

// operator() @ 14cb663d0

void __thiscall
`UE::Geometry::FRenderCaptureTypeFlags::operator=='::__l2::<lambda_1>::operator()
          (void *this,ERenderCaptureType param_1)

{
  FRenderCaptureTypeFlags *this_00;
  bool *pbVar1;
  bool *pbVar2;
  
  if (**(char **)((longlong)this + 0x10) != '\0') {
    this_00 = *(FRenderCaptureTypeFlags **)this;
    pbVar1 = UE::Geometry::FRenderCaptureTypeFlags::operator[]
                       (*(FRenderCaptureTypeFlags **)((longlong)this + 8),param_1);
    pbVar2 = UE::Geometry::FRenderCaptureTypeFlags::operator[](this_00,param_1);
    if (*pbVar2 == *pbVar1) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      return;
    }
  }
  **(undefined1 **)((longlong)this + 0x10) = 0;
  return;
}

// All @ 14cb73ce0

FRenderCaptureTypeFlags * __cdecl
UE::Geometry::FRenderCaptureTypeFlags::All
          (FRenderCaptureTypeFlags *__return_storage_ptr__,bool param_1)

{
  __return_storage_ptr__->bBaseColor = true;
  __return_storage_ptr__->bRoughness = true;
  __return_storage_ptr__->bMetallic = true;
  __return_storage_ptr__->bSpecular = true;
  __return_storage_ptr__->bEmissive = true;
  __return_storage_ptr__->bWorldNormal = true;
  __return_storage_ptr__->bOpacity = true;
  __return_storage_ptr__->bSubsurfaceColor = true;
  __return_storage_ptr__->bDeviceDepth = true;
  __return_storage_ptr__->bCombinedMRS = param_1;
  return __return_storage_ptr__;
}

// BaseColor @ 14cb747e0

FRenderCaptureTypeFlags * __cdecl
UE::Geometry::FRenderCaptureTypeFlags::BaseColor(FRenderCaptureTypeFlags *__return_storage_ptr__)

{
  __return_storage_ptr__->bRoughness = false;
  __return_storage_ptr__->bMetallic = false;
  __return_storage_ptr__->bSpecular = false;
  __return_storage_ptr__->bEmissive = false;
  __return_storage_ptr__->bWorldNormal = false;
  __return_storage_ptr__->bCombinedMRS = false;
  __return_storage_ptr__->bDeviceDepth = false;
  __return_storage_ptr__->bOpacity = false;
  __return_storage_ptr__->bSubsurfaceColor = false;
  __return_storage_ptr__->bBaseColor = true;
  return __return_storage_ptr__;
}

// None @ 14cba50f0

FRenderCaptureTypeFlags * __cdecl
UE::Geometry::FRenderCaptureTypeFlags::None(FRenderCaptureTypeFlags *__return_storage_ptr__)

{
  __return_storage_ptr__->bBaseColor = false;
  __return_storage_ptr__->bRoughness = false;
  __return_storage_ptr__->bMetallic = false;
  __return_storage_ptr__->bSpecular = false;
  __return_storage_ptr__->bEmissive = false;
  __return_storage_ptr__->bWorldNormal = false;
  __return_storage_ptr__->bCombinedMRS = false;
  __return_storage_ptr__->bDeviceDepth = false;
  __return_storage_ptr__->bOpacity = false;
  __return_storage_ptr__->bSubsurfaceColor = false;
  return __return_storage_ptr__;
}

// SetEnabled @ 14cbaf490

void __thiscall
UE::Geometry::FRenderCaptureTypeFlags::SetEnabled
          (FRenderCaptureTypeFlags *this,ERenderCaptureType param_1,bool param_2)

{
  bool *pbVar1;
  
  pbVar1 = operator[](this,param_1);
  *pbVar1 = param_2;
  return;
}

// Single @ 14cbb3390

FRenderCaptureTypeFlags * __cdecl
UE::Geometry::FRenderCaptureTypeFlags::Single
          (FRenderCaptureTypeFlags *__return_storage_ptr__,ERenderCaptureType param_1)

{
  bool *pbVar1;
  
  __return_storage_ptr__->bBaseColor = false;
  __return_storage_ptr__->bRoughness = false;
  __return_storage_ptr__->bMetallic = false;
  __return_storage_ptr__->bSpecular = false;
  __return_storage_ptr__->bEmissive = false;
  __return_storage_ptr__->bWorldNormal = false;
  __return_storage_ptr__->bCombinedMRS = false;
  __return_storage_ptr__->bDeviceDepth = false;
  __return_storage_ptr__->bOpacity = false;
  __return_storage_ptr__->bSubsurfaceColor = false;
  pbVar1 = operator[](__return_storage_ptr__,param_1);
  *pbVar1 = true;
  return __return_storage_ptr__;
}

// WorldNormal @ 14cbbce70

FRenderCaptureTypeFlags * __cdecl
UE::Geometry::FRenderCaptureTypeFlags::WorldNormal(FRenderCaptureTypeFlags *__return_storage_ptr__)

{
  __return_storage_ptr__->bBaseColor = false;
  __return_storage_ptr__->bRoughness = false;
  __return_storage_ptr__->bMetallic = false;
  __return_storage_ptr__->bSpecular = false;
  __return_storage_ptr__->bEmissive = false;
  __return_storage_ptr__->bWorldNormal = true;
  __return_storage_ptr__->bCombinedMRS = false;
  __return_storage_ptr__->bDeviceDepth = false;
  __return_storage_ptr__->bOpacity = false;
  __return_storage_ptr__->bSubsurfaceColor = false;
  return __return_storage_ptr__;
}

