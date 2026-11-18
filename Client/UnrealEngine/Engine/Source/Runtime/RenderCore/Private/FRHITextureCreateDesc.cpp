// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Create2D @ 145d1ae50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHITextureCreateDesc * __cdecl
FRHITextureCreateDesc::Create2D
          (FRHITextureCreateDesc *__return_storage_ptr__,wchar_t *param_1,TIntPoint<int> param_2,
          EPixelFormat param_3)

{
  undefined1 auStack_b8 [32];
  FRHITextureDesc local_98;
  wchar_t *local_48;
  undefined8 local_40;
  FResourceBulkDataInterface *local_38;
  FName local_30;
  FName local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98.Flags = None;
  local_98.ClearValue._0_8_ = 1;
  local_98.ClearValue.Value._4_8_ = 0;
  local_98.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_98.ClearValue.Value.Color[3] = 0.0;
  local_98.ExtData = 0;
  local_98.Depth = 1;
  local_98.ArraySize = 1;
  local_98.NumMips = '\x01';
  local_98.NumSamples = '\x01';
  local_98.Dimension = Texture2D;
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
  local_98.Extent.field0_0x0 = param_2.field0_0x0;
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

