// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// AddPass @ 144c29930

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGScatterUploadBuilder::AddPass
          (FRDGScatterUploadBuilder *this,FRDGBuilder *param_1,FRDGAsyncScatterUploadBuffer *param_2
          ,FRDGViewableResource *param_3,uint param_4,uint param_5,wchar_t *param_6,
          TFunction<void___cdecl(FRDGScatterUploader_&)> *param_7)

{
  int *piVar1;
  int iVar2;
  FRDGScatterUploader *pFVar3;
  undefined8 *puVar4;
  FPass *pFVar5;
  
  pFVar3 = FRDGAsyncScatterUploadBuffer::Begin(param_2,param_1,param_3,param_4,param_5,param_6);
  piVar1 = &(this->Passes).ArrayMax;
  iVar2 = (this->Passes).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGScatterUploadBuilder::FPass>_>
                      (0x1040,(ForElementType<FRDGScatterUploadBuilder::FPass> *)this,piVar1);
  }
  (this->Passes).ArrayNum = iVar2 + 1;
  pFVar5 = (this->Passes).AllocatorInstance.Data + iVar2;
  pFVar5->UploadBuffer = param_2;
  pFVar5->Uploader = pFVar3;
  *(undefined8 *)&pFVar5->Function = *(undefined8 *)param_7;
  *(undefined8 *)&(pFVar5->Function).field_0x28 = 0;
  if (*(longlong *)&pFVar5->Function != 0) {
    puVar4 = (undefined8 *)&param_7->field_0x10;
    if (*(undefined8 **)&param_7->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_7->field_0x28;
    }
    (**(code **)*puVar4)();
  }
  this->MaxBytes = this->MaxBytes + param_4 * param_5;
  return;
}

