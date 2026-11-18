// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// FCachedBoundShaderStateLink @ 145c44cd0

FCachedBoundShaderStateLink * __thiscall
FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
          (FCachedBoundShaderStateLink *this,FRHIMeshShader *param_1,
          FRHIAmplificationShader *param_2,FRHIPixelShader *param_3,FRHIBoundShaderState *param_4,
          bool param_5)

{
  FRHIVertexDeclaration **local_48;
  FRHIBoundShaderState **local_40;
  FRHIVertexDeclaration *local_38;
  FRHIVertexShader *local_30;
  FRHIMeshShader *local_28;
  FRHIAmplificationShader *local_20;
  FRHIPixelShader *local_18;
  FRHIGeometryShader *local_10;
  
  this->BoundShaderState = param_4;
  (this->Key).VertexDeclaration.Reference = (FRHIVertexDeclaration *)0x0;
  (this->Key).VertexShader.Reference = (FRHIVertexShader *)0x0;
  (this->Key).MeshShader.Reference = param_1;
  if (param_1 != (FRHIMeshShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_1);
  }
  (this->Key).AmplificationShader.Reference = param_2;
  if (param_2 != (FRHIAmplificationShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  (this->Key).PixelShader.Reference = param_3;
  if (param_3 != (FRHIPixelShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_3);
  }
  (this->Key).GeometryShader.Reference = (FRHIGeometryShader *)0x0;
  this->bAddedToSingleThreadedCache = param_5;
  if (param_5 != false) {
    local_38 = (this->Key).VertexDeclaration.Reference;
    local_30 = (this->Key).VertexShader.Reference;
    local_28 = (this->Key).MeshShader.Reference;
    local_20 = (this->Key).AmplificationShader.Reference;
    local_18 = (this->Key).PixelShader.Reference;
    local_10 = (this->Key).GeometryShader.Reference;
    local_48 = &local_38;
    local_40 = &param_4;
    param_4 = (FRHIBoundShaderState *)this;
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FBoundShaderStateLookupKey_&&,FCachedBoundShaderStateLink_*_&&>_>
              ((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
                *)&GBoundShaderStateCache,
               (TPairInitializer<FBoundShaderStateLookupKey_&&,FCachedBoundShaderStateLink_*_&&> *)
               &param_5,(bool *)&local_48);
  }
  return this;
}

// FCachedBoundShaderStateLink @ 145c44de0

FCachedBoundShaderStateLink * __thiscall
FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
          (FCachedBoundShaderStateLink *this,FRHIVertexDeclaration *param_1,
          FRHIVertexShader *param_2,FRHIPixelShader *param_3,FRHIBoundShaderState *param_4,
          bool param_5)

{
  TRefCountPtr<FRHIGeometryShader> *pTVar1;
  FRHIVertexDeclaration **local_48;
  FRHIBoundShaderState **local_40;
  FRHIVertexDeclaration *local_38;
  FRHIVertexShader *local_30;
  FRHIMeshShader *local_28;
  FRHIAmplificationShader *local_20;
  FRHIPixelShader *local_18;
  FRHIGeometryShader *local_10;
  
  this->BoundShaderState = param_4;
  (this->Key).VertexDeclaration.Reference = param_1;
  if (param_1 != (FRHIVertexDeclaration *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_1);
  }
  (this->Key).VertexShader.Reference = param_2;
  if (param_2 != (FRHIVertexShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  (this->Key).MeshShader.Reference = (FRHIMeshShader *)0x0;
  (this->Key).AmplificationShader.Reference = (FRHIAmplificationShader *)0x0;
  (this->Key).PixelShader.Reference = param_3;
  if (param_3 != (FRHIPixelShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_3);
  }
  pTVar1 = &(this->Key).GeometryShader;
  pTVar1->Reference = (FRHIGeometryShader *)0x0;
  this->bAddedToSingleThreadedCache = param_5;
  if (param_5 != false) {
    local_38 = (this->Key).VertexDeclaration.Reference;
    local_30 = (this->Key).VertexShader.Reference;
    local_28 = (this->Key).MeshShader.Reference;
    local_20 = (this->Key).AmplificationShader.Reference;
    local_18 = (this->Key).PixelShader.Reference;
    local_10 = pTVar1->Reference;
    local_48 = &local_38;
    local_40 = &param_4;
    param_4 = (FRHIBoundShaderState *)this;
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FBoundShaderStateLookupKey_&&,FCachedBoundShaderStateLink_*_&&>_>
              ((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
                *)&GBoundShaderStateCache,
               (TPairInitializer<FBoundShaderStateLookupKey_&&,FCachedBoundShaderStateLink_*_&&> *)
               &param_5,(bool *)&local_48);
  }
  return this;
}

// FCachedBoundShaderStateLink @ 145c44ee0

FCachedBoundShaderStateLink * __thiscall
FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
          (FCachedBoundShaderStateLink *this,FRHIVertexDeclaration *param_1,
          FRHIVertexShader *param_2,FRHIPixelShader *param_3,FRHIGeometryShader *param_4,
          FRHIBoundShaderState *param_5,bool param_6)

{
  FRHIVertexDeclaration **local_48;
  FRHIBoundShaderState **local_40;
  FRHIVertexDeclaration *local_38;
  FRHIVertexShader *local_30;
  FRHIMeshShader *local_28;
  FRHIAmplificationShader *local_20;
  FRHIPixelShader *local_18;
  FRHIGeometryShader *local_10;
  
  this->BoundShaderState = param_5;
  (this->Key).VertexDeclaration.Reference = param_1;
  if (param_1 != (FRHIVertexDeclaration *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_1);
  }
  (this->Key).VertexShader.Reference = param_2;
  if (param_2 != (FRHIVertexShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  (this->Key).MeshShader.Reference = (FRHIMeshShader *)0x0;
  (this->Key).AmplificationShader.Reference = (FRHIAmplificationShader *)0x0;
  (this->Key).PixelShader.Reference = param_3;
  if (param_3 != (FRHIPixelShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_3);
  }
  (this->Key).GeometryShader.Reference = param_4;
  if (param_4 != (FRHIGeometryShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_4);
  }
  this->bAddedToSingleThreadedCache = param_6;
  if (param_6 != false) {
    local_38 = (this->Key).VertexDeclaration.Reference;
    local_30 = (this->Key).VertexShader.Reference;
    local_28 = (this->Key).MeshShader.Reference;
    local_20 = (this->Key).AmplificationShader.Reference;
    local_18 = (this->Key).PixelShader.Reference;
    local_10 = (this->Key).GeometryShader.Reference;
    local_48 = &local_38;
    local_40 = &param_5;
    param_5 = (FRHIBoundShaderState *)this;
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FBoundShaderStateLookupKey_&&,FCachedBoundShaderStateLink_*_&&>_>
              ((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
                *)&GBoundShaderStateCache,
               (TPairInitializer<FBoundShaderStateLookupKey_&&,FCachedBoundShaderStateLink_*_&&> *)
               &param_6,(bool *)&local_48);
  }
  return this;
}

// ~FCachedBoundShaderStateLink @ 145c47c90

void __thiscall
FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink(FCachedBoundShaderStateLink *this)

{
  uint uVar1;
  FBoundShaderStateLookupKey local_38;
  
  if (this->bAddedToSingleThreadedCache != false) {
    local_38.VertexDeclaration = (this->Key).VertexDeclaration.Reference;
    local_38.VertexShader = (this->Key).VertexShader.Reference;
    local_38.MeshShader = (this->Key).MeshShader.Reference;
    local_38.AmplificationShader = (this->Key).AmplificationShader.Reference;
    local_38.PixelShader = (this->Key).PixelShader.Reference;
    local_38.GeometryShader = (this->Key).GeometryShader.Reference;
    if (GBoundShaderStateCache._8_4_ != GBoundShaderStateCache._52_4_) {
      uVar1 = ::GetTypeHash(&local_38);
      TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FBoundShaderStateLookupKey>
                ((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
                  *)&GBoundShaderStateCache,uVar1,&local_38);
    }
    this->bAddedToSingleThreadedCache = false;
  }
  FBoundShaderStateKey::~FBoundShaderStateKey(&this->Key);
  return;
}

