// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 9

// FSlateBaseUTextureResource @ 145fe5d30

FSlateBaseUTextureResource * __thiscall
FSlateBaseUTextureResource::FSlateBaseUTextureResource
          (FSlateBaseUTextureResource *this,UTexture *param_1)

{
  UTexture *pUVar1;
  undefined4 uVar2;
  char cVar3;
  UTexture *local_res8;
  
  this->TextureObject = param_1;
  (this->ObjectWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&___7FSlateBaseUTextureResource__6B_;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  this->CachedSlatePostBuffers = None;
  this->CachedIsVirtualTexture = false;
  *(undefined1 *)&this->_padding_ = 0x21;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->ObjectWeakPtr).WeakPtr,(FObjectPtr)&local_res8);
  pUVar1 = this->TextureObject;
  if (pUVar1 == (UTexture *)0x0) {
    (this->DebugName).ComparisonIndex = 0;
    (this->DebugName).Number = 0;
  }
  else {
    uVar2 = *(undefined4 *)((longlong)&pUVar1->_padding_ + 4);
    (this->DebugName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar1->_padding_;
    (this->DebugName).Number = uVar2;
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x348))();
    if (cVar3 != '\0') {
      this->CachedIsVirtualTexture = true;
      return this;
    }
  }
  this->CachedIsVirtualTexture = false;
  return this;
}

// ~FSlateBaseUTextureResource @ 145fea030

void __thiscall
FSlateBaseUTextureResource::~FSlateBaseUTextureResource(FSlateBaseUTextureResource *this)

{
  *(undefined1 *)&this->_padding_ = 0x84;
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  return;
}

// CheckForStaleResources @ 145ff6c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateBaseUTextureResource::CheckForStaleResources(FSlateBaseUTextureResource *this)

{
  code *pcVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  if (((this->DebugName != (FName)0x0) && (GSlateCheckUObjectRenderResources)) &&
     (bVar2 = FWeakObjectPtr::IsValid(&(this->ObjectWeakPtr).WeakPtr,true,true), !bVar2)) {
    if (GSlateCheckUObjectRenderResourcesShouldLogFatal == false) {
      ::FName::ToString(&this->DebugName,&local_18);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateUTextureResource.cpp"
                         ,0x54,
                         L"Texture %s has become invalid. This means the resource was garbage collected while slate was using it"
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      ::FName::ToString(&this->DebugName,&local_28);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// GetHeight @ 14600caa0

uint __thiscall FSlateBaseUTextureResource::GetHeight(FSlateBaseUTextureResource *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->TextureObject->_padding_ + 0x370))();
  return (uint)(longlong)fVar1;
}

// GetType @ 146018fd0

Type __thiscall FSlateBaseUTextureResource::GetType(FSlateBaseUTextureResource *this)

{
  return TextureObject;
}

// GetUsedSlatePostBuffers @ 1460197d0

ESlatePostRT __thiscall
FSlateBaseUTextureResource::GetUsedSlatePostBuffers(FSlateBaseUTextureResource *this)

{
  return this->CachedSlatePostBuffers;
}

// GetWidth @ 146019ac0

uint __thiscall FSlateBaseUTextureResource::GetWidth(FSlateBaseUTextureResource *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->TextureObject->_padding_ + 0x368))();
  return (uint)(longlong)fVar1;
}

// RequiresVirtualTextureFeedback @ 146022d00

bool __thiscall
FSlateBaseUTextureResource::RequiresVirtualTextureFeedback(FSlateBaseUTextureResource *this)

{
  return this->CachedIsVirtualTexture;
}

// UpdateDebugName @ 14602e090

void __thiscall FSlateBaseUTextureResource::UpdateDebugName(FSlateBaseUTextureResource *this)

{
  UTexture *pUVar1;
  undefined4 uVar2;
  
  pUVar1 = this->TextureObject;
  if (pUVar1 != (UTexture *)0x0) {
    uVar2 = *(undefined4 *)((longlong)&pUVar1->_padding_ + 4);
    (this->DebugName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar1->_padding_;
    (this->DebugName).Number = uVar2;
    return;
  }
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  return;
}

