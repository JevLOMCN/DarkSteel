// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// ComputeDescendingImportance @ 1435f5ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FPriorityOrderPoints::ComputeDescendingImportance
          (FPriorityOrderPoints *this,TArrayView<float_const_,int> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  FIdentityFunctor local_res10;
  DescendingPredicate<float> local_28;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    this_00 = &this->Order;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar1,Default);
    uVar5 = 0;
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < (this->Order).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        *(uint *)((this_00->AllocatorInstance).Data + lVar6 * 4) = uVar5;
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar1);
    }
    local_28.CompValues.DataPtr = param_1->DataPtr;
    local_28.CompValues.ArrayNum = param_1->ArrayNum;
    local_28.CompValues._12_4_ = *(undefined4 *)&param_1->field_0xc;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_>
              ((int *)(this_00->AllocatorInstance).Data,(this->Order).ArrayNum,local_res10,&local_28
              );
  }
  return;
}

// ComputeUniformSpaced @ 1435f6840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FPriorityOrderPoints::ComputeUniformSpaced
          (FPriorityOrderPoints *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,TArrayView<float_const_,int> *param_3,int param_4,
          int param_5)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStackY_d8 [32];
  undefined4 uStack_7c;
  TArrayView<TArrayView<float_const_,int>_const_,int> local_78;
  TArrayView<UE::Math::TVector<float>_const_,int> local_68;
  ForElementType<TArrayView<float_const_,int>_> local_58;
  TArrayView<float_const_,int> local_38;
  
  local_38._8_8_ = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_38.DataPtr._4_4_ = 2;
  local_38.DataPtr._0_4_ = 0;
  iVar5 = 0;
  if (((TArrayView<float_const_,int> *)&local_58 <= param_2) && (param_2 < &local_38)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)local_38.DataPtr;
    if ((int)local_38.DataPtr == local_38.DataPtr._4_4_) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<TArrayView<float_const_,int>_>_>
                        (0x810,&local_58,(int *)((longlong)&local_38.DataPtr + 4));
    }
  }
  uVar3 = *(undefined8 *)&param_2->ArrayNum;
  local_38.DataPtr._0_4_ = iVar5 + 1;
  *(float **)local_58.InlineData[iVar5].Pad = param_2->DataPtr;
  *(undefined8 *)(local_58.InlineData[iVar5].Pad + 8) = uVar3;
  if (((TArrayView<float_const_,int> *)&local_58 <= param_3) &&
     (param_3 < (TArrayView<float_const_,int> *)(local_58.InlineData + local_38.DataPtr._4_4_))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = (int)local_38.DataPtr;
  if ((int)local_38.DataPtr == local_38.DataPtr._4_4_) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<TArrayView<float_const_,int>_>_>
                      (0x810,&local_58,(int *)((longlong)&local_38.DataPtr + 4));
  }
  uVar3 = *(undefined8 *)&param_3->ArrayNum;
  iVar1 = this->SpatialLevels;
  local_38.DataPtr._0_4_ = iVar5 + 1;
  *(float **)local_58.InlineData[iVar5].Pad = param_3->DataPtr;
  *(undefined8 *)(local_58.InlineData[iVar5].Pad + 8) = uVar3;
  iVar5 = (int)local_38.DataPtr;
  local_78.DataPtr = (TArrayView<float_const_,int> *)&local_58;
  if ((int)local_38.DataPtr < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_78._12_4_ = uStack_7c;
  local_78.ArrayNum = iVar5;
  PriorityOrderPointsLocal::OrderPoints<float>
            (&this->Order,&local_68,&local_78,param_4,iVar1,param_5);
  return;
}

// ComputeUniformSpaced @ 1435f6a30

void __thiscall
UE::Geometry::FPriorityOrderPoints::ComputeUniformSpaced
          (FPriorityOrderPoints *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3,int param_4)

{
  TArrayView<TArrayView<float_const_,int>_const_,int> local_28;
  TArrayView<UE::Math::TVector<float>_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.ArrayNum = 1;
  local_28.DataPtr = param_2;
  PriorityOrderPointsLocal::OrderPoints<float>
            (&this->Order,&local_18,&local_28,param_3,this->SpatialLevels,param_4);
  return;
}

// ComputeUniformSpaced @ 1435f6a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FPriorityOrderPoints::ComputeUniformSpaced
          (FPriorityOrderPoints *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,TArrayView<float_const_,int> *param_3,int param_4,
          int param_5)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStackY_d8 [32];
  undefined4 uStack_7c;
  TArrayView<TArrayView<float_const_,int>_const_,int> local_78;
  TArrayView<UE::Math::TVector<double>_const_,int> local_68;
  ForElementType<TArrayView<float_const_,int>_> local_58;
  TArrayView<float_const_,int> local_38;
  
  local_38._8_8_ = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_38.DataPtr._4_4_ = 2;
  local_38.DataPtr._0_4_ = 0;
  iVar5 = 0;
  if (((TArrayView<float_const_,int> *)&local_58 <= param_2) && (param_2 < &local_38)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)local_38.DataPtr;
    if ((int)local_38.DataPtr == local_38.DataPtr._4_4_) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<TArrayView<float_const_,int>_>_>
                        (0x810,&local_58,(int *)((longlong)&local_38.DataPtr + 4));
    }
  }
  uVar3 = *(undefined8 *)&param_2->ArrayNum;
  local_38.DataPtr._0_4_ = iVar5 + 1;
  *(float **)local_58.InlineData[iVar5].Pad = param_2->DataPtr;
  *(undefined8 *)(local_58.InlineData[iVar5].Pad + 8) = uVar3;
  if (((TArrayView<float_const_,int> *)&local_58 <= param_3) &&
     (param_3 < (TArrayView<float_const_,int> *)(local_58.InlineData + local_38.DataPtr._4_4_))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = (int)local_38.DataPtr;
  if ((int)local_38.DataPtr == local_38.DataPtr._4_4_) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<TArrayView<float_const_,int>_>_>
                      (0x810,&local_58,(int *)((longlong)&local_38.DataPtr + 4));
  }
  uVar3 = *(undefined8 *)&param_3->ArrayNum;
  iVar1 = this->SpatialLevels;
  local_38.DataPtr._0_4_ = iVar5 + 1;
  *(float **)local_58.InlineData[iVar5].Pad = param_3->DataPtr;
  *(undefined8 *)(local_58.InlineData[iVar5].Pad + 8) = uVar3;
  iVar5 = (int)local_38.DataPtr;
  local_78.DataPtr = (TArrayView<float_const_,int> *)&local_58;
  if ((int)local_38.DataPtr < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_78._12_4_ = uStack_7c;
  local_78.ArrayNum = iVar5;
  PriorityOrderPointsLocal::OrderPoints<double>
            (&this->Order,&local_68,&local_78,param_4,iVar1,param_5);
  return;
}

// ComputeUniformSpaced @ 1435f6c80

void __thiscall
UE::Geometry::FPriorityOrderPoints::ComputeUniformSpaced
          (FPriorityOrderPoints *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3,int param_4)

{
  TArrayView<TArrayView<float_const_,int>_const_,int> local_28;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.ArrayNum = 1;
  local_28.DataPtr = param_2;
  PriorityOrderPointsLocal::OrderPoints<double>
            (&this->Order,&local_18,&local_28,param_3,this->SpatialLevels,param_4);
  return;
}

