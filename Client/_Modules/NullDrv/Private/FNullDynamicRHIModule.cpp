// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 3

// SupportsDynamicReloading @ 1446c3d60

bool __thiscall FNullDynamicRHIModule::SupportsDynamicReloading(FNullDynamicRHIModule *this)

{
  return false;
}

// IsSupported @ 1446c3d70

bool __thiscall FNullDynamicRHIModule::IsSupported(FNullDynamicRHIModule *this)

{
  return true;
}

// CreateRHI @ 1446c3d80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FDynamicRHI * __thiscall FNullDynamicRHIModule::CreateRHI(FNullDynamicRHIModule *this,Type param_1)

{
  longlong lVar1;
  FDynamicRHI *pFVar2;
  wchar_t *pwVar3;
  FName *pFVar4;
  FName local_res18 [2];
  
  pFVar2 = ::operator_new(0x160);
  if (pFVar2 == (FDynamicRHI *)0x0) {
    return (FDynamicRHI *)0x0;
  }
  (pFVar2->PixelFormatBlockBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->PixelFormatBlockBytes).ArrayNum = 0;
  (pFVar2->PixelFormatBlockBytes).ArrayMax = 0;
  pFVar2[1].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[1].PixelFormatBlockBytes.ArrayNum = 0;
  pFVar2[1].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[2]._padding_ = 0;
  pFVar2[2].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[2].PixelFormatBlockBytes.ArrayNum = 0;
  pFVar2[2].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[3]._padding_ = 0;
  pFVar2[3].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined2 *)&pFVar2[3].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[3].PixelFormatBlockBytes.ArrayNum = -1;
  pFVar2[4]._padding_ = 0;
  pFVar2[4].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[4].PixelFormatBlockBytes.ArrayNum = -1;
  *(undefined2 *)&pFVar2[4].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[5]._padding_ = 0;
  pFVar2[5].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[5].PixelFormatBlockBytes.ArrayNum = -1;
  *(undefined2 *)&pFVar2[5].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[6]._padding_ = 0;
  pFVar2[6].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[6].PixelFormatBlockBytes.ArrayNum = -1;
  *(undefined2 *)&pFVar2[6].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[7]._padding_ = 0;
  pFVar2[7].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[7].PixelFormatBlockBytes.ArrayNum = -1;
  *(undefined2 *)&pFVar2[7].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[8]._padding_ = 0;
  pFVar2[8].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[8].PixelFormatBlockBytes.ArrayNum = -1;
  *(undefined2 *)&pFVar2[8].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[9]._padding_ = 0;
  pFVar2[9].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[9].PixelFormatBlockBytes.ArrayNum = -1;
  *(undefined2 *)&pFVar2[9].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[10]._padding_ = 0;
  pFVar2[10].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[10].PixelFormatBlockBytes.ArrayNum = -1;
  *(undefined2 *)&pFVar2[10].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[0xb]._padding_ = 0;
  pFVar2[0xb].PixelFormatBlockBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)&pFVar2[0xb].PixelFormatBlockBytes.ArrayNum = 0;
  pFVar2[0xb].PixelFormatBlockBytes.ArrayMax = 0;
  pFVar2[0xc]._padding_ = -1;
  pFVar2[0xc].PixelFormatBlockBytes.AllocatorInstance.Data =
       (FScriptContainerElement *)0xffffffffffffffff;
  pFVar2[0xc].PixelFormatBlockBytes.ArrayNum = 0;
  pFVar2[0xc].PixelFormatBlockBytes.ArrayMax = 0;
  *(undefined1 *)&pFVar2[0xd]._padding_ = 0;
  *(undefined8 *)((longlong)&pFVar2[0xd]._padding_ + 4) = 0;
  *(undefined2 *)((longlong)&pFVar2[0xd].PixelFormatBlockBytes.AllocatorInstance.Data + 4) = 0;
  *(undefined1 *)((longlong)&pFVar2[0xd].PixelFormatBlockBytes.AllocatorInstance.Data + 6) = 0;
  pFVar2->_padding_ = (longlong)&FNullDynamicRHI::_vftable__for__FDynamicRHIPSOFallback__;
  pFVar2[1]._padding_ = (longlong)&FNullDynamicRHI::_vftable__for__IRHICommandContextPSOFallback__;
  FLargeMemoryData::FLargeMemoryData
            ((FLargeMemoryData *)&pFVar2[0xd].PixelFormatBlockBytes.ArrayNum,0);
  pwVar3 = FGenericPlatformMisc::GetNullRHIShaderFormat();
  pFVar4 = ::FName::FName(local_res18,pwVar3);
  GMaxRHIShaderPlatform = ShaderFormatToLegacyShaderPlatform(*pFVar4);
  GRHIGlobals.MaxTextureDimensions.Value = 0x4000;
  for (lVar1 = 0x3f; 0x7fffUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  GRHIGlobals.MaxTextureMipCount = (int)lVar1 + 1;
  if (0xf < GRHIGlobals.MaxTextureMipCount) {
    GRHIGlobals.MaxTextureMipCount = 0xf;
  }
  return pFVar2;
}

