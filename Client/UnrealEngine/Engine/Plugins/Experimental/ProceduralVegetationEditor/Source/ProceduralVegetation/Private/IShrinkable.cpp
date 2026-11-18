// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 2

// ~IShrinkable @ 14da679d0

void __thiscall PV::Facades::IShrinkable::~IShrinkable(IShrinkable *this)

{
  return;
}

// RemoveEntries @ 14daa1660

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __cdecl
PV::Facades::IShrinkable::RemoveEntries
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
           *__return_storage_ptr__,IShrinkable *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  IShrinkable IVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<int_&,int_&> local_res18;
  uint *local_48;
  uint *local_40;
  
  uVar6 = 0;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_class_TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>___cdecl_PV::Facades::IShrinkable::RemoveEntries(PV::Facades::IShrinkable&___ptr64,TArray<bool,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId28,"PV::Facades::IShrinkable::RemoveEntries",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Public\\Facades\\IShrinkableFacade.h"
               ,0x1c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_class_TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>___cdecl_PV::Facades::IShrinkable::RemoveEntries(PV::Facades::IShrinkable&___ptr64,TArray<bool,TSizedDefaultAllocator<32>_>&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId28);
  }
  iVar7 = param_2->ArrayNum;
  iVar4 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if ((iVar4 != iVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FacadeOut.GetElementCount() == EntriesToRemove.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Public\\Facades\\IShrinkableFacade.h"
                         ,0x1e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
             (*pcVar2)();
    return pTVar8;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res8[0] = 0;
  do {
    iVar7 = param_2->ArrayNum;
    uVar9 = uVar6;
    if ((int)uVar6 < iVar7) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar7) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        uVar9 = uVar6;
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar9 = local_res8[0], bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        if ((param_2->AllocatorInstance).Data[(int)uVar6] != (FScriptContainerElement)0x0) break;
        iVar7 = param_2->ArrayNum;
        local_res8[0] = uVar9 + 1;
        uVar9 = local_res8[0];
        uVar6 = local_res8[0];
      } while ((int)local_res8[0] < iVar7);
    }
    local_res10[0] = uVar9;
    iVar7 = param_2->ArrayNum;
    uVar6 = local_res10[0];
    if ((int)local_res10[0] < iVar7) {
      do {
        uVar9 = local_res10[0];
        uVar6 = 0;
        if ((int)local_res10[0] < iVar7) {
          uVar6 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar2)();
          return pTVar8;
        }
        uVar6 = local_res8[0];
        if ((param_2->AllocatorInstance).Data[(int)uVar9] == (FScriptContainerElement)0x0) break;
        iVar7 = param_2->ArrayNum;
        local_res10[0] = local_res10[0] + 1;
      } while ((int)local_res10[0] < iVar7);
    }
    if ((int)local_res10[0] < param_2->ArrayNum) {
      (**(code **)((longlong)*param_1 + 0x10))(param_1,local_res10[0],uVar6);
      lVar10 = (longlong)(int)local_res10[0];
      uVar6 = 0;
      if ((int)local_res10[0] < param_2->ArrayNum) {
        uVar6 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
      (param_2->AllocatorInstance).Data[lVar10] = (FScriptContainerElement)0x1;
      local_48 = local_res10;
      local_40 = local_res8;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&,int_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_res18,(bool *)&local_48);
      local_res8[0] = local_res8[0] + 1;
      uVar6 = local_res8[0];
    }
    uVar9 = param_2->ArrayNum;
    if (((int)uVar9 <= (int)uVar6) || ((int)uVar9 <= (int)local_res10[0])) {
      if (uVar6 != uVar9) {
        IVar1 = *param_1;
        iVar7 = (**(code **)((longlong)IVar1 + 8))(param_1);
        (**(code **)((longlong)IVar1 + 0x18))(param_1,iVar7 - local_res8[0],uVar6);
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

