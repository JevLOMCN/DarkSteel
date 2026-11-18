// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14741eb10

UScriptStruct * __cdecl FFloatCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FFloatCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatCurve,(UObject *)pUVar1,L"FloatCurve");
  }
  return Z_Registration_Info_UScriptStruct_FFloatCurve.OuterSingleton;
}

// FFloatCurve @ 147433b80

FFloatCurve * __thiscall FFloatCurve::FFloatCurve(FFloatCurve *this,FFloatCurve *param_1)

{
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->FloatCurve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->FloatCurve)._padding_ + 4) = 0;
  (this->FloatCurve)._padding_ = 0;
  *(undefined4 *)&(this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = 0;
  (this->FloatCurve)._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&(this->FloatCurve)._padding_ = (int)(param_1->FloatCurve)._padding_;
  *(undefined1 *)((longlong)&(this->FloatCurve)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->FloatCurve)._padding_ + 4);
  *(undefined1 *)((longlong)&(this->FloatCurve)._padding_ + 5) =
       *(undefined1 *)((longlong)&(param_1->FloatCurve)._padding_ + 5);
  (this->FloatCurve)._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->FloatCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatCurve).Keys.AllocatorInstance.Data = (param_1->FloatCurve).Keys.AllocatorInstance.Data
  ;
  (param_1->FloatCurve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatCurve).Keys.ArrayNum = (param_1->FloatCurve).Keys.ArrayNum;
  (this->FloatCurve).Keys.ArrayMax = (param_1->FloatCurve).Keys.ArrayMax;
  (param_1->FloatCurve).Keys.ArrayNum = 0;
  (param_1->FloatCurve).Keys.ArrayMax = 0;
  return this;
}

// CopyCurve @ 1474450d0

void __thiscall FFloatCurve::CopyCurve(FFloatCurve *this,FFloatCurve *param_1)

{
  FRichCurve::operator=(&this->FloatCurve,&param_1->FloatCurve);
  return;
}

// Evaluate @ 147449360

float __thiscall FFloatCurve::Evaluate(FFloatCurve *this,float param_1)

{
  float fVar1;
  
  fVar1 = FRichCurve::Eval(&this->FloatCurve,param_1,0.0);
  return fVar1;
}

// GetKeys @ 147456710

void __thiscall
FFloatCurve::GetKeys
          (FFloatCurve *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FRichCurve *this_00;
  float local_38;
  float local_34 [7];
  
  uVar3 = (this->FloatCurve).Keys.ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  iVar8 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&param_1->AllocatorInstance,0,piVar1);
  }
  piVar2 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar2 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&param_2->AllocatorInstance,0,piVar2);
  }
  this_00 = &this->FloatCurve;
  iVar7 = (**(code **)((this->FloatCurve)._padding_ + 8))(this_00);
  FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this_00,iVar7);
  for (; (-1 < iVar8 && (iVar8 < (int)(this->FloatCurve)._padding_)); iVar8 = iVar8 + 1) {
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_38 = FRichCurve::GetKeyTime
                         (this_00,(FKeyHandle)
                                  *(uint *)((this->FloatCurve)._padding_ + (longlong)iVar8 * 4));
    local_34[0] = FRichCurve::Eval(this_00,local_38,0.0);
    pFVar4 = (param_1->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)*piVar1 * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_38;
    pFVar4 = (param_2->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_34) &&
       ((FScriptContainerElement *)local_34 < pFVar4 + (longlong)*piVar2 * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,piVar2);
    }
    param_2->ArrayNum = iVar7 + 1;
    *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_34[0];
  }
  return;
}

// Resize @ 147475750

void __thiscall
FFloatCurve::Resize(FFloatCurve *this,float param_1,bool param_2,float param_3,float param_4)

{
  FRichCurve::ReadjustTimeRange(&this->FloatCurve,0.0,param_1,param_2,param_3,param_4);
  return;
}

// UpdateOrAddKey @ 147482900

void __thiscall FFloatCurve::UpdateOrAddKey(FFloatCurve *this,float param_1,float param_2)

{
  bool in_R9B;
  uint in_stack_ffffffffffffffe8;
  
  FRichCurve::UpdateOrAddKey
            (&this->FloatCurve,param_1,param_2,in_R9B,
             (float)(in_stack_ffffffffffffffe8 & 0xffffff00));
  return;
}

