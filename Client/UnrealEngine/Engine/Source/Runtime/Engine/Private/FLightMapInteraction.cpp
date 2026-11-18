// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InitVirtualTexture @ 1484e01a0

FLightMapInteraction * __cdecl
FLightMapInteraction::InitVirtualTexture
          (FLightMapInteraction *__return_storage_ptr__,ULightMapVirtualTexture2D *param_1,
          TVector4<float> *param_2,TVector4<float> *param_3,TVector2<double> *param_4,
          TVector2<double> *param_5,bool param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 = 0;
  __return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 + 4) =
       0;
  __return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->HighQualityTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->SkyOcclusionTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->AOMaterialMaskTexture = (ULightMapTexture2D *)0x0;
  *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 = 0;
  __return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 + 4) =
       0;
  __return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->LowQualityTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->bAllowHighQualityLightMaps = param_6;
  __return_storage_ptr__->Type = LMIT_Texture;
  __return_storage_ptr__->NumLightmapCoefficients = 2;
  __return_storage_ptr__->VirtualTexture = param_1;
  if (param_6) {
    uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 =
         *(undefined8 *)&param_2->field0_0x0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 =
         *(undefined8 *)&param_3->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 8)
         = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_2[1].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 =
         *(undefined8 *)&param_2[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_3[1].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 =
         *(undefined8 *)&param_3[1].field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 + 8)
         = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)((longlong)&param_2[2].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 =
         *(undefined8 *)&param_2[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_3[2].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 =
         *(undefined8 *)&param_3[2].field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 8)
         = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_2[3].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 =
         *(undefined8 *)&param_2[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_3[3].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 =
         *(undefined8 *)&param_3[3].field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 + 8)
         = uVar1;
  }
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

// Texture @ 1484fd610

FLightMapInteraction * __cdecl
FLightMapInteraction::Texture
          (FLightMapInteraction *__return_storage_ptr__,ULightMapTexture2D **param_1,
          ULightMapTexture2D *param_2,ULightMapTexture2D *param_3,TVector4<float> *param_4,
          TVector4<float> *param_5,TVector2<double> *param_6,TVector2<double> *param_7,bool param_8)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 = 0;
  __return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 + 4) =
       0;
  __return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->HighQualityTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->SkyOcclusionTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->AOMaterialMaskTexture = (ULightMapTexture2D *)0x0;
  *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 = 0;
  __return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 4)
       = 0;
  *(undefined8 *)
   ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 0xc) = 0x3f800000
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 4) =
       0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 + 4) =
       0;
  __return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->LowQualityTexture = (ULightMapTexture2D *)0x0;
  __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
  __return_storage_ptr__->bAllowHighQualityLightMaps = param_8;
  __return_storage_ptr__->Type = LMIT_Texture;
  __return_storage_ptr__->NumLightmapCoefficients = 2;
  if (param_8) {
    __return_storage_ptr__->HighQualityTexture = *param_1;
    __return_storage_ptr__->SkyOcclusionTexture = param_2;
    __return_storage_ptr__->AOMaterialMaskTexture = param_3;
    uVar1 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 =
         *(undefined8 *)&param_4->field0_0x0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[0].field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 =
         *(undefined8 *)&param_5->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[0].field0_0x0 + 8)
         = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_4[1].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 =
         *(undefined8 *)&param_4[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->HighQualityCoefficientScales[1].field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_5[1].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 =
         *(undefined8 *)&param_5[1].field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->HighQualityCoefficientAdds[1].field0_0x0 + 8)
         = uVar1;
  }
  else {
    __return_storage_ptr__->LowQualityTexture = param_1[1];
    uVar1 = *(undefined8 *)((longlong)&param_4[2].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 =
         *(undefined8 *)&param_4[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[0].field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_5[2].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 =
         *(undefined8 *)&param_5[2].field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[0].field0_0x0 + 8)
         = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_4[3].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 =
         *(undefined8 *)&param_4[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&__return_storage_ptr__->LowQualityCoefficientScales[1].field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_5[3].field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 =
         *(undefined8 *)&param_5[3].field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->LowQualityCoefficientAdds[1].field0_0x0 + 8)
         = uVar1;
  }
  dVar2 = (param_6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  (__return_storage_ptr__->CoordinateScale).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_7->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
  (__return_storage_ptr__->CoordinateBias).field0_0x0._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

