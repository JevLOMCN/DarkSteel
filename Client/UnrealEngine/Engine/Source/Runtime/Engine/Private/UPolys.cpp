// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147320d80

UClass * __cdecl UPolys::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolys.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Polys",&Z_Registration_Info_UClass_UPolys.InnerSingleton,
               StaticRegisterNativesUPolys,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolys>,InternalVTableHelperCtorCaller<UPolys>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolys.InnerSingleton;
}

// ~UPolys @ 1473253d0

void __thiscall UPolys::~UPolys(UPolys *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPolys__6B_;
  DestructItems<FPoly,int>((FPoly *)(this->Element).AllocatorInstance.Data,(this->Element).ArrayNum)
  ;
  pFVar1 = (this->Element).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147327470

UClass * __cdecl UPolys::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolys.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Polys",&Z_Registration_Info_UClass_UPolys.InnerSingleton,
               StaticRegisterNativesUPolys,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolys>,InternalVTableHelperCtorCaller<UPolys>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolys.InnerSingleton;
}

// IsAsset @ 147327ac0

bool __thiscall UPolys::IsAsset(UPolys *this)

{
  return false;
}

// Serialize @ 147327eb0

void __thiscall UPolys::Serialize(UPolys *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUPolys @ 1473282c0

void __cdecl UPolys::StaticRegisterNativesUPolys(void)

{
  return;
}

// AddReferencedObjects @ 148355610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPolys::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  UClass *pUVar3;
  FString *pFVar4;
  ForElementType<UE::Math::TVector<float>_> _Dst;
  longlong lVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  void *_Src;
  longlong lVar9;
  undefined1 auStackY_208 [32];
  FString local_1c8;
  FString local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  ForElementType<UE::Math::TVector<float>_> local_178;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  UObject *local_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UPolys>(&local_1c8);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = Z_Construct_UClass_UPolys_NoRegister();
  iVar7 = (int)pUVar3->_padding_;
  if ((iVar7 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
      &pUVar3->_padding_)) {
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)&param_1[1].field_0x8)); iVar7 = iVar7 + 1) {
      lVar2 = *(longlong *)(param_1 + 1);
      lVar5 = (longlong)iVar7 * 0x158;
      _Src = (void *)(lVar2 + 0x30 + lVar5);
      local_1a8 = *(undefined8 *)(lVar5 + lVar2);
      local_1a0 = *(undefined4 *)(lVar5 + 8 + lVar2);
      local_19c = *(undefined8 *)(lVar5 + 0xc + lVar2);
      local_194 = *(undefined4 *)(lVar5 + 0x14 + lVar2);
      local_190 = *(undefined8 *)(lVar5 + 0x18 + lVar2);
      local_188 = *(undefined4 *)(lVar5 + 0x20 + lVar2);
      local_184 = *(undefined8 *)(lVar5 + 0x24 + lVar2);
      local_17c = *(undefined4 *)(lVar5 + 0x2c + lVar2);
      local_178.SecondaryData = (ForElementType<UE::Math::TVector<float>_>)0x0;
      local_b0 = *(int *)((longlong)_Src + 200);
      lVar9 = (longlong)local_b0;
      if (*(void **)((longlong)_Src + 0xc0) != (void *)0x0) {
        _Src = *(void **)((longlong)_Src + 0xc0);
      }
      if (local_b0 == 0) {
        local_ac = 0x10;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
                  (0xc,4,local_b0,0,&local_178,local_b0,&local_ac);
        _Dst = (ForElementType<UE::Math::TVector<float>_>)&local_178;
        if (local_178.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
          _Dst = local_178.SecondaryData;
        }
        memcpy((void *)_Dst,_Src,lVar9 * 0xc);
      }
      local_a8 = *(undefined4 *)(lVar5 + 0x100 + lVar2);
      local_a0 = *(UObject **)(lVar5 + 0x108 + lVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_a0);
      }
      local_98 = *(UObject **)(lVar5 + 0x110 + lVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_98);
      }
      local_90 = *(undefined8 *)(lVar5 + 0x118 + lVar2);
      local_88 = *(undefined8 *)(lVar5 + 0x120 + lVar2);
      local_80 = *(undefined4 *)(lVar5 + 0x128 + lVar2);
      local_7c = *(undefined4 *)(lVar5 + 300 + lVar2);
      local_78 = *(undefined4 *)(lVar5 + 0x130 + lVar2);
      local_74 = *(undefined4 *)(lVar5 + 0x134 + lVar2);
      local_70 = *(undefined4 *)(lVar5 + 0x138 + lVar2);
      puVar1 = (undefined4 *)(lVar5 + 0x13c + lVar2);
      local_6c = *puVar1;
      uStack_68 = puVar1[1];
      uStack_64 = puVar1[2];
      uStack_60 = puVar1[3];
      local_5c = *(undefined8 *)(lVar5 + 0x14c + lVar2);
      (**(code **)(param_2->_padding_ + 0x88))(param_2,&local_a0,param_1);
      (**(code **)(param_2->_padding_ + 0x88))(param_2,&local_98,param_1);
      if (local_178.SecondaryData != (ForElementType<UE::Math::TVector<float>_>)0x0) {
        FMemory::Free((void *)local_178.SecondaryData);
      }
    }
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar4 = GetTypeName<UPolys>(&local_1c8);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_1b8,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar8);
}

// Serialize @ 1483a3b10

void __thiscall UPolys::Serialize(UPolys *this,FArchive *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined8 local_38 [2];
  
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && (*(int *)&param_1->field_0x40 < 0x1d9)) {
    piVar1 = &(this->Element).ArrayNum;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Element).ArrayNum * 0x158,
               (longlong)(this->Element).ArrayMax * 0x158);
    local_res18[0] = (this->Element).ArrayNum;
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_res20[0] = local_res18[0];
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    local_38[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,local_38);
    if ((param_1->field_0x28 & 1) != 0) {
      TArray<FPoly,TSizedDefaultAllocator<32>_>::Empty(&this->Element,local_res18[0]);
      lVar8 = (longlong)(int)local_res18[0];
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x158,8,local_res18[0],&(this->Element).AllocatorInstance,piVar1,
                         &(this->Element).ArrayMax);
      memset((this->Element).AllocatorInstance.Data + (longlong)iVar5 * 0x158,0,lVar8 * 0x158);
    }
    uVar7 = 0;
    if (0 < (this->Element).ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < *piVar1) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        ::operator<<(param_1,(FPoly *)((this->Element).AllocatorInstance.Data +
                                      (longlong)(int)uVar7 * 0x158));
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (this->Element).ArrayNum);
    }
    return;
  }
  TArrayPrivateFriend::Serialize<FPoly,TSizedDefaultAllocator<32>_>(param_1,&this->Element);
  return;
}

