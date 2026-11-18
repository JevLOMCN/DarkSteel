// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// CreateRHIBuffer @ 1483f9cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::CreateRHIBuffer
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,FRHICommandListBase *param_1)

{
  EShaderPlatform EVar1;
  bool bVar2;
  wchar_t *in_R8;
  longlong local_res8;
  undefined4 in_stack_ffffffffffffffcc;
  
  if (this->CachedNumIndices != 0) {
    this->CachedNumIndices = (int)(this->Indices)._padding_;
    (**(code **)((this->Indices)._padding_ + 0x30))(&this->Indices);
    EVar1 = GMaxRHIShaderPlatform;
    bVar2 = AreBufferSRVsAlwaysCreatedByDefault(GMaxRHIShaderPlatform);
    if (!bVar2) {
      IsGPUSkinPassThroughSupported(EVar1);
    }
    local_res8 = this->_padding_;
    FRawStaticIndexBuffer16or32Interface::CreateRHIIndexBufferInternal
              (param_1,in_R8,(FName *)L"FRawStaticIndexBuffer16",(int)&local_res8,
               CONCAT44(in_stack_ffffffffffffffcc,(int)(this->Indices)._padding_),
               (FResourceArrayInterface *)&DAT_00000002,SUB81(&this->Indices,0));
    return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
  }
  (param_1->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// CreateRHIBuffer @ 1483f9db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::CreateRHIBuffer
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,FRHICommandListBase *param_1)

{
  EShaderPlatform EVar1;
  bool bVar2;
  wchar_t *in_R8;
  longlong local_res8;
  undefined4 in_stack_ffffffffffffffcc;
  
  if (this->CachedNumIndices != 0) {
    this->CachedNumIndices = (int)(this->Indices)._padding_;
    (**(code **)((this->Indices)._padding_ + 0x30))(&this->Indices);
    EVar1 = GMaxRHIShaderPlatform;
    bVar2 = AreBufferSRVsAlwaysCreatedByDefault(GMaxRHIShaderPlatform);
    if (!bVar2) {
      IsGPUSkinPassThroughSupported(EVar1);
    }
    local_res8 = this->_padding_;
    FRawStaticIndexBuffer16or32Interface::CreateRHIIndexBufferInternal
              (param_1,in_R8,(FName *)L"FRawStaticIndexBuffer32",(int)&local_res8,
               CONCAT44(in_stack_ffffffffffffffcc,(int)(this->Indices)._padding_),
               (FResourceArrayInterface *)&DAT_00000004,SUB81(&this->Indices,0));
    return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
  }
  (param_1->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

