// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 4

// StaticStruct @ 145fd5d20

UScriptStruct * __cdecl FSlatePostSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlatePostSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateRHIRenderer();
    Z_Registration_Info_UScriptStruct_FSlatePostSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlatePostSettings,(UObject *)pUVar1,
                         L"SlatePostSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSlatePostSettings.OuterSingleton;
}

// FSlatePostSettings @ 145fe6ad0

FSlatePostSettings * __thiscall
FSlatePostSettings::FSlatePostSettings(FSlatePostSettings *this,FSlatePostSettings *param_1)

{
  UClass *pUVar1;
  UTextureRenderTarget2D *pUVar2;
  
  *(byte *)this = *(byte *)this ^ (this->bEnabled ^ param_1->bEnabled) & 1;
  this->Resolution = param_1->Resolution;
  pUVar1 = (param_1->PostProcessorClass).Class.field0_0x0.DebugPtr;
  (this->PostProcessorClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PathToSlatePostRT).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathToSlatePostRT).Data.AllocatorInstance.Data =
       (param_1->PathToSlatePostRT).Data.AllocatorInstance.Data;
  (param_1->PathToSlatePostRT).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathToSlatePostRT).Data.ArrayNum = (param_1->PathToSlatePostRT).Data.ArrayNum;
  (this->PathToSlatePostRT).Data.ArrayMax = (param_1->PathToSlatePostRT).Data.ArrayMax;
  (param_1->PathToSlatePostRT).Data.ArrayNum = 0;
  (param_1->PathToSlatePostRT).Data.ArrayMax = 0;
  pUVar2 = (param_1->CachedSlatePostRT).field0_0x0.DebugPtr;
  (this->CachedSlatePostRT).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->field_0x28 = this->field_0x28 ^ (this->bLoadAttempted ^ param_1->bLoadAttempted) & 1U;
  return this;
}

// FSlatePostSettings @ 145fe6b70

FSlatePostSettings * __thiscall FSlatePostSettings::FSlatePostSettings(FSlatePostSettings *this)

{
  this->bEnabled = '\0';
  (this->PostProcessorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bLoadAttempted = false;
  this->Resolution = Full;
  (this->PathToSlatePostRT).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathToSlatePostRT).Data.ArrayNum = 0;
  (this->PathToSlatePostRT).Data.ArrayMax = 0;
  (this->CachedSlatePostRT).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  return this;
}

// operator= @ 145feb8c0

FSlatePostSettings * __thiscall
FSlatePostSettings::operator=(FSlatePostSettings *this,FSlatePostSettings *param_1)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  FScriptContainerElement *_Src;
  UTextureRenderTarget2D *pUVar6;
  
  *(byte *)this = *(byte *)this ^ (this->bEnabled ^ param_1->bEnabled) & 1;
  this->Resolution = param_1->Resolution;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->PostProcessorClass).Class.field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pFVar1 = &this->PathToSlatePostRT;
  (this->PostProcessorClass).Class.field0_0x0 = (param_1->PostProcessorClass).Class.field0_0x0;
  if (pFVar1 != &param_1->PathToSlatePostRT) {
    iVar3 = (this->PathToSlatePostRT).Data.ArrayMax;
    piVar2 = &(this->PathToSlatePostRT).Data.ArrayMax;
    iVar4 = (param_1->PathToSlatePostRT).Data.ArrayNum;
    _Src = (param_1->PathToSlatePostRT).Data.AllocatorInstance.Data;
    (this->PathToSlatePostRT).Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,iVar3,(ForAnyElementType *)pFVar1,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->CachedSlatePostRT).field0_0x0.DebugPtr,
     pUVar6 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->CachedSlatePostRT).field0_0x0 = (param_1->CachedSlatePostRT).field0_0x0;
  this->field_0x28 = this->field_0x28 ^ (this->bLoadAttempted ^ param_1->bLoadAttempted) & 1U;
  return this;
}

