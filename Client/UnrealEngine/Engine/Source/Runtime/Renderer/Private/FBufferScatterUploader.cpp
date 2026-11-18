// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// UploadTo @ 145463d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBufferScatterUploader::UploadTo
          (FBufferScatterUploader *this,FRDGBuilder *param_1,FRDGBuffer *param_2,FRDGBuffer *param_3
          ,FRDGBuffer *param_4,TFunction<unsigned___int64___cdecl(void)> *param_5,uint param_6,
          int param_7)

{
  FRDGBufferSRV *pFVar1;
  FRDGBufferSRV *pFVar2;
  longlong *plVar3;
  undefined1 auStackY_e8 [32];
  FRDGBufferSRVDesc local_b8;
  FRDGBufferSRVDesc local_98;
  undefined1 local_78 [48];
  uint local_48;
  int local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_78._0_8_ = *(undefined8 *)param_5;
  local_78._40_8_ = *(undefined8 *)&param_5->field_0x28;
  *(undefined8 *)&param_5->field_0x28 = 0;
  local_78._32_8_ = *(undefined8 *)&param_5->field_0x20;
  local_78._16_8_ = *(undefined8 *)&param_5->field_0x10;
  local_78._24_8_ = *(undefined8 *)&param_5->field_0x18;
  if (local_78._0_8_ != 0) {
    *(undefined8 *)param_5 = 0;
  }
  local_48 = param_6;
  local_44 = param_7;
  local_b8.Buffer = param_4;
  local_b8._padding_._4_4_ = 0;
  local_b8._padding_._0_4_ = 0xffffffff;
  local_b8._padding_ = 0;
  local_b8._padding_._0_1_ = 0;
  if (((param_4->Desc).Usage & DrawIndirect) != None) {
    local_b8._padding_._0_1_ = 0x1c;
  }
  pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_b8);
  local_98._padding_._4_4_ = 0;
  local_98._padding_._0_4_ = 0xffffffff;
  local_98._padding_._0_1_ = 0;
  local_98._padding_ = 0;
  if (((param_3->Desc).Usage & DrawIndirect) != None) {
    local_98._padding_._0_1_ = 0x1c;
  }
  local_98.Buffer = param_3;
  pFVar2 = FRDGBuilder::CreateSRV(param_1,&local_98);
  ScatterCopyResource(param_1,param_2,pFVar2,pFVar1,(FAsyncScatterCopyParams *)local_78);
  if (local_78._0_8_ != 0) {
    plVar3 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// UploadTo @ 145463ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBufferScatterUploader::UploadTo
          (FBufferScatterUploader *this,FRDGBuilder *param_1,FRDGBuffer *param_2,FRDGBuffer *param_3
          ,FRDGBuffer *param_4,uint param_5,uint param_6,int param_7)

{
  FRDGBufferSRV *pFVar1;
  FRDGBufferSRV *pFVar2;
  FScatterCopyParams local_68;
  FRDGBufferSRVDesc local_58;
  FRDGBufferSRVDesc local_38;
  
  local_68.NumScatters = param_5;
  local_68.NumBytesPerElement = param_6;
  local_68.NumElementsPerScatter = param_7;
  local_58._padding_._4_4_ = 0;
  local_58._padding_._0_4_ = 0xffffffff;
  local_58.Buffer = param_4;
  local_58._padding_ = 0;
  local_58._padding_._0_1_ = 0;
  if (((param_4->Desc).Usage & DrawIndirect) != None) {
    local_58._padding_._0_1_ = 0x1c;
  }
  pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_58);
  local_38._padding_._4_4_ = 0;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._0_1_ = 0;
  local_38._padding_ = 0;
  if (((param_3->Desc).Usage & DrawIndirect) != None) {
    local_38._padding_._0_1_ = 0x1c;
  }
  local_38.Buffer = param_3;
  pFVar2 = FRDGBuilder::CreateSRV(param_1,&local_38);
  ScatterCopyResource(param_1,param_2,pFVar2,pFVar1,&local_68);
  return;
}

