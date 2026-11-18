// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// FindOrAddImpl<FOpenGLCompiledShaderKey_const_&> @ 145bdc270

FOpenGLCompiledShaderValue * __thiscall
TMapBase<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>_>
::FindOrAddImpl<FOpenGLCompiledShaderKey_const_&>
          (TMapBase<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>_>
           *this,uint param_1,FOpenGLCompiledShaderKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FOpenGLCompiledShaderKey *local_res20;
  
  iVar1 = TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLCompiledShaderKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FOpenGLCompiledShaderValue *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FOpenGLCompiledShaderKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FOpenGLCompiledShaderKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FOpenGLCompiledShaderValue *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x10);
}

// FindOrAddImpl<FOpenGLProgramKey_const_&> @ 145bdc300

FProgramUseTimes * __thiscall
TMapBase<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>_>
::FindOrAddImpl<FOpenGLProgramKey_const_&>
          (TMapBase<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>_>
           *this,uint param_1,FOpenGLProgramKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FOpenGLProgramKey *local_res20;
  
  iVar1 = TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLProgramKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x98 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FProgramUseTimes *)(lVar2 + 0x78);
  }
  local_res20 = param_2;
  TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FOpenGLProgramKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FOpenGLProgramKey_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FProgramUseTimes *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x98 + 0x78);
}

