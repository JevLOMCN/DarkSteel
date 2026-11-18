// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FScopedResolvingExportTracker @ 141e86090

FScopedResolvingExportTracker * __thiscall
FScopedResolvingExportTracker::FScopedResolvingExportTracker
          (FScopedResolvingExportTracker *this,FLinkerLoad *param_1,int param_2)

{
  FTlsAutoCleanup *pFVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint uVar2;
  int local_res8 [2];
  FLinkerLoad *local_res10;
  int local_res18 [2];
  code *local_18;
  int *local_10;
  
  local_10 = local_res18;
  this->TrackedLinker = param_1;
  this->TrackedExport = param_2;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_res8[0] = param_2;
  local_res10 = param_1;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  this_00 = TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<FLinkerLoad_*_const_&>
                      ((TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                        *)(pFVar1 + 2),uVar2 >> 0x10 ^ uVar2,&local_res10);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (this_00,local_res18,(bool *)local_res8);
  return this;
}

// ~FScopedResolvingExportTracker @ 141e87e30

void __thiscall
FScopedResolvingExportTracker::~FScopedResolvingExportTracker(FScopedResolvingExportTracker *this)

{
  FLinkerLoad *pFVar1;
  FTlsAutoCleanup *pFVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint uVar3;
  undefined1 local_res8 [8];
  FLinkerLoad *local_res10;
  code *local_28;
  undefined1 *local_20;
  
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  pFVar1 = this->TrackedLinker;
  this_00 = TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
            ::Find((TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                    *)(pFVar2 + 2),pFVar1);
  if (this_00 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    local_res10 = (FLinkerLoad *)CONCAT44(local_res10._4_4_,this->TrackedExport);
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (this_00,this->TrackedExport,(int *)&local_res10);
    }
    if ((*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) &&
       (*(int *)(pFVar2 + 3) != *(int *)&pFVar2[8].field_0x4)) {
      uVar3 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      local_res10 = pFVar1;
      TSet<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FLinkerLoad_const_*>
                ((TSet<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)(pFVar2 + 2),uVar3 >> 0x10 ^ uVar3,&local_res10);
    }
  }
  return;
}

