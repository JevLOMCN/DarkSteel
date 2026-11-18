// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// AddToCache @ 145c4ec80

void __thiscall
FCachedBoundShaderStateLink_Threadsafe::AddToCache(FCachedBoundShaderStateLink_Threadsafe *this)

{
  TPairInitializer<FBoundShaderStateLookupKey_&&,FCachedBoundShaderStateLink_Threadsafe_*_&&>
  local_res10;
  undefined8 *local_48;
  FCachedBoundShaderStateLink_Threadsafe ***local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&BoundShaderStateCacheLock);
  local_38 = *(undefined8 *)&this->field_0x8;
  local_30 = *(undefined8 *)&this->field_0x10;
  local_28 = *(undefined8 *)&this->field_0x18;
  local_20 = *(undefined8 *)&this->field_0x20;
  local_18 = *(undefined8 *)&this->field_0x28;
  local_10 = *(undefined8 *)&this->field_0x30;
  local_48 = &local_38;
  local_40 = &local_res10.Value;
  local_res10.Value = (FCachedBoundShaderStateLink_Threadsafe **)this;
  TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FBoundShaderStateLookupKey_&&,FCachedBoundShaderStateLink_Threadsafe_*_&&>_>
            ((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
              *)&GBoundShaderStateCache_ThreadSafe,&local_res10,(bool *)&local_48);
                    /* WARNING: Could not recover jumptable at 0x000145c4ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&BoundShaderStateCacheLock);
  return;
}

// RemoveFromCache @ 145c752e0

void __thiscall
FCachedBoundShaderStateLink_Threadsafe::RemoveFromCache
          (FCachedBoundShaderStateLink_Threadsafe *this)

{
  uint uVar1;
  FBoundShaderStateLookupKey local_38;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&BoundShaderStateCacheLock);
  local_38.VertexDeclaration = *(FRHIVertexDeclaration **)&this->field_0x8;
  local_38.VertexShader = *(FRHIVertexShader **)&this->field_0x10;
  local_38.MeshShader = *(FRHIMeshShader **)&this->field_0x18;
  local_38.AmplificationShader = *(FRHIAmplificationShader **)&this->field_0x20;
  local_38.PixelShader = *(FRHIPixelShader **)&this->field_0x28;
  local_38.GeometryShader = *(FRHIGeometryShader **)&this->field_0x30;
  if (GBoundShaderStateCache_ThreadSafe._8_4_ != GBoundShaderStateCache_ThreadSafe._52_4_) {
    uVar1 = ::GetTypeHash(&local_38);
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FBoundShaderStateLookupKey>
              ((TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_Threadsafe_*,0>,FDefaultSetAllocator>
                *)&GBoundShaderStateCache_ThreadSafe,uVar1,&local_38);
  }
                    /* WARNING: Could not recover jumptable at 0x000145c75363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&BoundShaderStateCacheLock);
  return;
}

