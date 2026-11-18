// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// Create2DArray @ 1456fc0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITextureCreateDesc * __cdecl
FRHITextureCreateDesc::Create2DArray
          (FRHITextureCreateDesc *__return_storage_ptr__,wchar_t *param_1,int param_2,int param_3,
          int param_4,EPixelFormat param_5)

{
  undefined1 auStack_c8 [32];
  int local_a8;
  int iStack_a4;
  FRHITextureDesc local_98;
  wchar_t *local_48;
  undefined8 local_40;
  FResourceBulkDataInterface *local_38;
  FName local_30;
  FName local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98.Flags = None;
  local_98.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_98.ClearValue._0_8_ = 1;
  local_98.Extent.field0_0x0._s_0.Y = param_3;
  local_98.Extent.field0_0x0._s_0.X = param_2;
  local_98.Format = param_5;
  local_98.ArraySize = (ushort)param_4;
  local_98.ClearValue.Value._4_8_ = 0;
  local_98.ClearValue.Value.Color[3] = 0.0;
  local_98.ExtData = 0;
  local_98.Depth = 1;
  local_98.NumMips = '\x01';
  local_98.NumSamples = '\x01';
  local_98.Dimension = Texture2DArray;
  local_98.UAVFormat = PF_Unknown;
  local_98.FastVRAMPercentage = 0xff;
  local_98.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_98.AliasableFormats.ArrayNum = 0;
  local_98.AliasableFormats.ArrayMax = 1;
  local_40 = 0;
  local_38 = (FResourceBulkDataInterface *)0x0;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  local_a8 = param_2;
  iStack_a4 = param_3;
  local_48 = param_1;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)__return_storage_ptr__,&local_98);
  __return_storage_ptr__->InitAction = local_40._4_4_;
  __return_storage_ptr__->BulkData = local_38;
  __return_storage_ptr__->ClassName = local_30;
  __return_storage_ptr__->OwnerName = local_28;
  __return_storage_ptr__->DebugName = local_48;
  __return_storage_ptr__->InitialState = (ERHIAccess)local_40;
  if (local_98.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// Create3D @ 1456fc200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITextureCreateDesc * __cdecl
FRHITextureCreateDesc::Create3D
          (FRHITextureCreateDesc *__return_storage_ptr__,wchar_t *param_1,int param_2,int param_3,
          int param_4,EPixelFormat param_5)

{
  undefined1 auStack_c8 [32];
  int local_a8;
  int iStack_a4;
  FRHITextureDesc local_98;
  wchar_t *local_48;
  undefined8 local_40;
  FResourceBulkDataInterface *local_38;
  FName local_30;
  FName local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98.Flags = None;
  local_98.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_98.ClearValue._0_8_ = 1;
  local_98.Extent.field0_0x0._s_0.Y = param_3;
  local_98.Extent.field0_0x0._s_0.X = param_2;
  local_98.Depth = (ushort)param_4;
  local_98.Format = param_5;
  local_98.ClearValue.Value._4_8_ = 0;
  local_98.ClearValue.Value.Color[3] = 0.0;
  local_98.ExtData = 0;
  local_98.ArraySize = 1;
  local_98.NumMips = '\x01';
  local_98.NumSamples = '\x01';
  local_98.Dimension = Texture3D;
  local_98.UAVFormat = PF_Unknown;
  local_98.FastVRAMPercentage = 0xff;
  local_98.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_98.AliasableFormats.ArrayNum = 0;
  local_98.AliasableFormats.ArrayMax = 1;
  local_40 = 0;
  local_38 = (FResourceBulkDataInterface *)0x0;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  local_a8 = param_2;
  iStack_a4 = param_3;
  local_48 = param_1;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)__return_storage_ptr__,&local_98);
  __return_storage_ptr__->InitAction = local_40._4_4_;
  __return_storage_ptr__->BulkData = local_38;
  __return_storage_ptr__->ClassName = local_30;
  __return_storage_ptr__->OwnerName = local_28;
  __return_storage_ptr__->DebugName = local_48;
  __return_storage_ptr__->InitialState = (ERHIAccess)local_40;
  if (local_98.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// CreateCube @ 1456fc5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITextureCreateDesc * __cdecl
FRHITextureCreateDesc::CreateCube
          (FRHITextureCreateDesc *__return_storage_ptr__,wchar_t *param_1,uint param_2,
          EPixelFormat param_3)

{
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint uStack_a4;
  FRHITextureDesc local_98;
  wchar_t *local_48;
  undefined8 local_40;
  FResourceBulkDataInterface *local_38;
  FName local_30;
  FName local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98.Flags = None;
  local_98.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_98.ClearValue._0_8_ = 1;
  local_98.Extent.field0_0x0._s_0.Y = param_2;
  local_98.Extent.field0_0x0._s_0.X = param_2;
  local_98.ClearValue.Value._4_8_ = 0;
  local_98.ClearValue.Value.Color[3] = 0.0;
  local_98.ExtData = 0;
  local_98.Depth = 1;
  local_98.ArraySize = 1;
  local_98.NumMips = '\x01';
  local_98.NumSamples = '\x01';
  local_98.Dimension = TextureCube;
  local_98.UAVFormat = PF_Unknown;
  local_98.FastVRAMPercentage = 0xff;
  local_98.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_98.AliasableFormats.ArrayNum = 0;
  local_98.AliasableFormats.ArrayMax = 1;
  local_40 = 0;
  local_38 = (FResourceBulkDataInterface *)0x0;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  local_a8 = param_2;
  uStack_a4 = param_2;
  local_98.Format = param_3;
  local_48 = param_1;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)__return_storage_ptr__,&local_98);
  __return_storage_ptr__->InitAction = local_40._4_4_;
  __return_storage_ptr__->BulkData = local_38;
  __return_storage_ptr__->ClassName = local_30;
  __return_storage_ptr__->OwnerName = local_28;
  __return_storage_ptr__->DebugName = local_48;
  __return_storage_ptr__->InitialState = (ERHIAccess)local_40;
  if (local_98.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// CreateCubeArray @ 1456fc700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITextureCreateDesc * __cdecl
FRHITextureCreateDesc::CreateCubeArray
          (FRHITextureCreateDesc *__return_storage_ptr__,wchar_t *param_1,uint param_2,
          ushort param_3,EPixelFormat param_4)

{
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint uStack_a4;
  FRHITextureDesc local_98;
  wchar_t *local_48;
  undefined8 local_40;
  FResourceBulkDataInterface *local_38;
  FName local_30;
  FName local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98.Flags = None;
  local_98.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_98.ClearValue._0_8_ = 1;
  local_98.Extent.field0_0x0._s_0.Y = param_2;
  local_98.Extent.field0_0x0._s_0.X = param_2;
  local_98.Format = param_4;
  local_98.ClearValue.Value._4_8_ = 0;
  local_98.ClearValue.Value.Color[3] = 0.0;
  local_98.ExtData = 0;
  local_98.Depth = 1;
  local_98.NumMips = '\x01';
  local_98.NumSamples = '\x01';
  local_98.Dimension = TextureCubeArray;
  local_98.UAVFormat = PF_Unknown;
  local_98.FastVRAMPercentage = 0xff;
  local_98.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_98.AliasableFormats.ArrayNum = 0;
  local_98.AliasableFormats.ArrayMax = 1;
  local_40 = 0;
  local_38 = (FResourceBulkDataInterface *)0x0;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  local_a8 = param_2;
  uStack_a4 = param_2;
  local_98.ArraySize = param_3;
  local_48 = param_1;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)__return_storage_ptr__,&local_98);
  __return_storage_ptr__->InitAction = local_40._4_4_;
  __return_storage_ptr__->BulkData = local_38;
  __return_storage_ptr__->ClassName = local_30;
  __return_storage_ptr__->OwnerName = local_28;
  __return_storage_ptr__->DebugName = local_48;
  __return_storage_ptr__->InitialState = (ERHIAccess)local_40;
  if (local_98.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

