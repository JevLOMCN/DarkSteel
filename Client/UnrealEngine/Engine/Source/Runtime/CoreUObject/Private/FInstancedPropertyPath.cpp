// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// FInstancedPropertyPath @ 141e846b0

FInstancedPropertyPath * __thiscall
FInstancedPropertyPath::FInstancedPropertyPath
          (FInstancedPropertyPath *this,FInstancedPropertyPath *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->PropertyChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PropertyChain).ArrayMax;
  iVar2 = (param_1->PropertyChain).ArrayNum;
  _Src = (param_1->PropertyChain).AllocatorInstance.Data;
  (this->PropertyChain).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->PropertyChain).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// operator() @ 141e8b6a0

FProperty * __thiscall
`FInstancedPropertyPath::Resolve'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FProperty *pFVar6;
  longlong lVar7;
  longlong lVar8;
  TFieldIterator<FProperty> local_38;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FProperty *)(*pcVar3)();
    return pFVar6;
  }
  pvVar2 = *(void **)(*plVar1 + (longlong)param_1 * 0x10);
  bVar4 = IsThisNotNull(pvVar2,"FField::GetFName");
  lVar8 = 0;
  if (bVar4) {
    lVar8 = *(longlong *)((longlong)pvVar2 + 0x20);
  }
  local_38.Struct = (UStruct *)**(longlong **)this;
  if (lVar8 != 0) {
    if (local_38.Struct == (UStruct *)0x0) {
      local_38.Field = (FField *)0x0;
    }
    else {
      local_38.Field = (local_38.Struct)->ChildProperties;
    }
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    pFVar6 = (FProperty *)local_38.Field;
    while (pFVar6 != (FProperty *)0x0) {
      local_38.Field = (FField *)pFVar6;
      bVar4 = IsThisNotNull(pFVar6,"FField::GetFName");
      lVar7 = 0;
      if (bVar4) {
        lVar7 = pFVar6->_padding_;
      }
      if (lVar7 == lVar8) {
        return pFVar6;
      }
      local_38.Field = (FField *)pFVar6->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      pFVar6 = (FProperty *)local_38.Field;
    }
  }
  return (FProperty *)0x0;
}

// operator() @ 141e8d090

int __thiscall
`FInstancedPropertyPath::Resolve'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  if (*(int *)(*plVar1 + 8 + (longlong)param_1 * 0x10) == -1) {
    iVar5 = 0;
  }
  else {
    plVar1 = *(longlong **)this;
    uVar4 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = *(int *)(*plVar1 + 8 + (longlong)param_1 * 0x10);
  }
  return iVar5;
}

// Head @ 141ea4fd0

FProperty * __thiscall FInstancedPropertyPath::Head(FInstancedPropertyPath *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FProperty *pFVar5;
  uint uVar6;
  
  iVar1 = (this->PropertyChain).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FProperty *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FProperty **)
          ((this->PropertyChain).AllocatorInstance.Data +
          (longlong)(this->PropertyChain).ArrayNum * 0x10 + -0x10);
}

// Pop @ 141eafdd0

void __thiscall FInstancedPropertyPath::Pop(FInstancedPropertyPath *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  uint uVar6;
  
  iVar5 = (this->PropertyChain).ArrayNum;
  uVar6 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar5) {
    uVar4 = ~uVar6 >> 0x1f;
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
  _Dst = (this->PropertyChain).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
  iVar5 = (this->PropertyChain).ArrayNum + ~uVar6;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 4);
  }
  piVar1 = &(this->PropertyChain).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,(ForAnyElementType *)this,(this->PropertyChain).ArrayNum,
             &(this->PropertyChain).ArrayMax);
  return;
}

// Push @ 141eb03c0

void __thiscall
FInstancedPropertyPath::Push
          (FInstancedPropertyPath *this,FProperty *param_1,int param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FProperty *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  pFVar2 = (this->PropertyChain).AllocatorInstance.Data;
  uStack_c = CONCAT31(uStack_c._1_3_,param_3);
  local_18 = param_1;
  iStack_10 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2 + (longlong)(this->PropertyChain).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->PropertyChain).ArrayNum;
  piVar1 = &(this->PropertyChain).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->PropertyChain).ArrayNum = iVar5 + 1;
  pFVar2 = (this->PropertyChain).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FProperty **)pFVar2 = local_18;
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_c,iStack_10);
  return;
}

// Resolve @ 141eb74d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

UObject * __thiscall FInstancedPropertyPath::Resolve(FInstancedPropertyPath *this,UObject *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  FProperty *pFVar3;
  FScriptMapHelper_u_16 FVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FMapProperty *this_00;
  ulonglong *puVar11;
  UObject *pUVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong *puVar19;
  FMapProperty *pFVar20;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  int local_108;
  FInstancedPropertyPath *local_100;
  longlong local_f8;
  int local_f0;
  int local_ec;
  int local_e8 [2];
  FProperty *local_e0;
  FInstancedPropertyPath *local_d8;
  FProperty **local_d0;
  FInstancedPropertyPath *local_c8;
  FScriptMapHelper *local_c0;
  undefined4 local_b8;
  <lambda_1> local_b0;
  FProperty *local_90;
  undefined8 uStack_88;
  int local_80;
  FScriptMapHelper local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_e0 = *(FProperty **)&param_1->field_0x10;
  local_d0 = &local_e0;
  local_100 = this;
  local_d8 = this;
  local_c8 = this;
  this_00 = (FMapProperty *)
            `FInstancedPropertyPath::Resolve'::__l2::<lambda_1>::operator()(&local_d0,0);
  if (this_00 != (FMapProperty *)0x0) {
    iVar7 = `FInstancedPropertyPath::Resolve'::__l2::<lambda_2>::operator()(&local_d8,0);
    puVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal((FProperty *)this_00,param_1,iVar7);
    iVar7 = 1;
    lVar17 = 1;
LAB_141eb7565:
    do {
      iVar10 = (this->PropertyChain).ArrayNum;
      local_108 = iVar7;
      local_f8 = lVar17;
      if (iVar10 <= iVar7) {
        if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x10 & 1) == 0) {
          return (UObject *)0x0;
        }
        if (((uint)this_00->_padding_ >> 0x13 & 1) == 0) {
          return (UObject *)0x0;
        }
        pUVar12 = (UObject *)(**(code **)(this_00->_padding_ + 0x1f8))(this_00,puVar11);
        return pUVar12;
      }
      if (iVar7 < 0) {
        local_118 = (longlong)iVar7;
        local_110 = (longlong)iVar10;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pUVar12 = (UObject *)(*pcVar2)();
          return pUVar12;
        }
      }
      pFVar16 = (this->PropertyChain).AllocatorInstance.Data + lVar17 * 0x10;
      uVar13 = *(ulonglong *)(this_00->_padding_ + 0x18);
      if ((uVar13 >> 0x15 & 1) == 0) {
        pFVar20 = (FMapProperty *)0x0;
        if ((uVar13 & 0x800000000000) != 0) {
          pFVar20 = this_00;
        }
        if (pFVar20 == (FMapProperty *)0x0) {
          if ((uVar13 & 0x400000000000) == 0) {
            if ((uVar13 & 0x100000000000000) == 0) {
              if ((uVar13 >> 0x14 & 1) != 0) {
                local_e0 = this_00->KeyProp;
              }
              this_00 = (FMapProperty *)
                        `FInstancedPropertyPath::Resolve'::__l2::<lambda_1>::operator()
                                  (&local_d0,iVar7);
              if (this_00 == (FMapProperty *)0x0) {
                return (UObject *)0x0;
              }
              iVar10 = `FInstancedPropertyPath::Resolve'::__l2::<lambda_2>::operator()
                                 (&local_d8,iVar7);
              if ((iVar10 < 0) || ((int)this_00->_padding_ <= iVar10)) {
                local_110 = CONCAT44(local_110._4_4_,(int)this_00->_padding_);
                local_118 = CONCAT44(local_118._4_4_,iVar10);
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
                ;
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  pUVar12 = (UObject *)(*pcVar2)();
                  return pUVar12;
                }
              }
              if ((puVar11 == (ulonglong *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                pUVar12 = (UObject *)(*pcVar2)();
                return pUVar12;
              }
              puVar11 = (ulonglong *)
                        ((longlong)puVar11 +
                        (longlong)*(int *)((longlong)&this_00->_padding_ + 4) * (longlong)iVar10 +
                        (longlong)*(int *)((longlong)&this_00->_padding_ + 4));
              iVar7 = iVar7 + 1;
              lVar17 = local_f8 + 1;
              goto LAB_141eb7565;
            }
            bVar5 = FOptionalPropertyLayout::IsSet
                              ((FOptionalPropertyLayout *)&this_00->KeyProp,puVar11);
            puVar19 = (ulonglong *)0x0;
            if (bVar5) {
              puVar19 = puVar11;
            }
            if (puVar19 == (ulonglong *)0x0) goto LAB_141eb7947;
            if ((this_00->KeyProp == (FProperty *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ValueProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                   ,0x18,L"Expected ValueProperty to be initialized"), bVar5)) {
              pcVar2 = (code *)swi(3);
              pUVar12 = (UObject *)(*pcVar2)();
              return pUVar12;
            }
            this_00 = (FMapProperty *)this_00->KeyProp;
          }
          else {
            FScriptMapHelper::FScriptMapHelper(&local_78,this_00,puVar11);
            local_c0 = &local_78;
            local_b8 = *(undefined4 *)(pFVar16 + 8);
            iVar10 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::FindInternalIndex_::__l2::<lambda_1>_>
                               (&local_78,(<lambda_1> *)&local_c0);
            local_f0 = iVar10;
            bVar5 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              (&local_78,(<lambda_1> *)&local_f0);
            if (!bVar5) {
              return (UObject *)0x0;
            }
            if (pFVar16[0xc] == (FScriptContainerElement)0x0) {
              cVar6 = (**(code **)(**(longlong **)pFVar16 + 0x1a0))
                                (*(longlong **)pFVar16,this_00->KeyProp);
              FVar4 = local_78.field2_0x10;
              if (cVar6 != '\0') {
                iVar8 = ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
                if ((local_78.MapFlags & UsesMemoryImageAllocator) == None) {
                  if (iVar8 == *(int *)&((local_78.field2_0x10.FreezableMap)->Pairs).field_0x34)
                  goto LAB_141eb7b0c;
                  local_e8[0] = iVar10;
                  bVar5 = FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                    (&local_78,(<lambda_1> *)local_e8);
                  if ((!bVar5) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(InternalIndex)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x12dd,
                                         L"Invalid internal index. Use IsValidIndex before calling this method."
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    pUVar12 = (UObject *)(*pcVar2)();
                    return pUVar12;
                  }
                  this_00 = (FMapProperty *)this_00->KeyProp;
                  puVar19 = (ulonglong *)
                            ((longlong)
                             (local_78.MapLayout.SetLayout.SparseArrayLayout.Size * iVar10) +
                            ((FVar4.FreezableMap)->Pairs).Elements.Data._padding_);
                  this = local_100;
                }
                else if (iVar8 == ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.
                                  NumFreeIndices) {
LAB_141eb7b0c:
                  if ((iVar10 != 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InternalIndex == 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x12d9,
                                         L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    pUVar12 = (UObject *)(*pcVar2)();
                    return pUVar12;
                  }
                  this_00 = (FMapProperty *)this_00->KeyProp;
                  puVar19 = (ulonglong *)0x0;
                  this = local_100;
                }
                else {
                  local_ec = iVar10;
                  bVar5 = FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                    (&local_78,(<lambda_1> *)&local_ec);
                  if ((!bVar5) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(InternalIndex)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x12dd,
                                         L"Invalid internal index. Use IsValidIndex before calling this method."
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    pUVar12 = (UObject *)(*pcVar2)();
                    return pUVar12;
                  }
                  puVar14 = (undefined1 *)((FVar4.FreezableMap)->Pairs).Elements.Data._padding_;
                  if (((ulonglong)puVar14 & 1) != 0) {
                    puVar14 = &(FVar4.HeapMap)->field_0x0 + ((longlong)puVar14 >> 0x18);
                  }
                  this_00 = (FMapProperty *)this_00->KeyProp;
                  puVar19 = (ulonglong *)
                            (puVar14 + local_78.MapLayout.SetLayout.SparseArrayLayout.Size * iVar10)
                  ;
                  this = local_100;
                }
                goto LAB_141eb794a;
              }
              this = local_100;
              if (pFVar16[0xc] == (FScriptContainerElement)0x0) goto LAB_141eb7947;
            }
            cVar6 = (**(code **)(**(longlong **)pFVar16 + 0x1a0))
                              (*(longlong **)pFVar16,this_00->ValueProp);
            this = local_100;
            if (cVar6 == '\0') goto LAB_141eb7947;
            local_b0.__this = &local_78;
            local_b0.Iterator.Container._0_4_ = iVar10;
            puVar19 = (ulonglong *)
                      FScriptMapHelper::
                      WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                (&local_78,&local_b0);
            this_00 = (FMapProperty *)this_00->ValueProp;
            this = local_100;
          }
        }
        else {
          cVar6 = (**(code **)(**(longlong **)pFVar16 + 0x1a0))
                            (*(longlong **)pFVar16,pFVar20->KeyProp);
          if (cVar6 == '\0') {
            return (UObject *)0x0;
          }
          local_90 = pFVar20->ValueProp;
          uStack_88._0_4_ = (pFVar20->MapLayout).ValueOffset;
          uStack_88._4_4_ = (pFVar20->MapLayout).SetLayout.HashNextIdOffset;
          local_80 = (pFVar20->MapLayout).SetLayout.HashIndexOffset;
          if ((pFVar20->KeyProp == (FProperty *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementProp",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1653,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            pUVar12 = (UObject *)(*pcVar2)();
            return pUVar12;
          }
          uVar18 = *(uint *)(pFVar16 + 8);
          this = local_100;
          if (-1 < (int)uVar18) {
            iVar10 = (int)puVar11[1];
            iVar8 = iVar10 - *(int *)((longlong)puVar11 + 0x34);
            if ((int)uVar18 < iVar8) {
              if (iVar8 == iVar10) {
                if ((int)uVar18 < (int)puVar11[5]) {
                  if (((int)puVar11[5] <= (int)uVar18) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x8c4,L""), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    pUVar12 = (UObject *)(*pcVar2)();
                    return pUVar12;
                  }
                  puVar19 = puVar11 + 2;
                  if ((ulonglong *)puVar11[4] != (ulonglong *)0x0) {
                    puVar19 = (ulonglong *)puVar11[4];
                  }
                  uVar15 = uVar18;
                  if ((int)uVar18 < 0) {
                    uVar15 = uVar18 + 0x1f;
                  }
                  if ((*(uint *)((longlong)puVar19 + (longlong)((int)uVar15 >> 5) * 4) >>
                       (uVar18 & 0x1f) & 1) == 0) goto LAB_141eb7810;
                  bVar5 = true;
                }
                else {
LAB_141eb7810:
                  bVar5 = false;
                }
                uVar15 = 0xffffffff;
                if (bVar5) {
                  uVar15 = uVar18;
                }
                this = local_100;
                if (-1 < (int)uVar15) {
LAB_141eb7824:
                  this = local_100;
                  if ((int)uVar15 < (int)puVar11[5]) {
                    if (((int)puVar11[5] <= (int)uVar15) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValidIndex(Index)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x8c4,L""), bVar5)) {
                      pcVar2 = (code *)swi(3);
                      pUVar12 = (UObject *)(*pcVar2)();
                      return pUVar12;
                    }
                    puVar19 = puVar11 + 2;
                    if ((ulonglong *)puVar11[4] != (ulonglong *)0x0) {
                      puVar19 = (ulonglong *)puVar11[4];
                    }
                    this = local_100;
                    if ((*(uint *)((longlong)puVar19 + (ulonglong)(uVar15 >> 5) * 4) >>
                         (uVar15 & 0x1f) & 1) != 0) {
                      this_00 = (FMapProperty *)pFVar20->KeyProp;
                      if ((int)puVar11[1] == *(int *)((longlong)puVar11 + 0x34)) {
                        if ((uVar15 != 0) &&
                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                              ("InternalIndex == 0",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                               ,0x169e,
                                               L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                              ), bVar5)) {
                          pcVar2 = (code *)swi(3);
                          pUVar12 = (UObject *)(*pcVar2)();
                          return pUVar12;
                        }
                        this = local_100;
                        puVar19 = (ulonglong *)0x0;
                        goto LAB_141eb794a;
                      }
                      if ((int)uVar15 < (int)puVar11[5]) {
                        if (((int)puVar11[5] <= (int)uVar15) &&
                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IsValidIndex(Index)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                               ,0x8c4,L""), bVar5)) {
                          pcVar2 = (code *)swi(3);
                          pUVar12 = (UObject *)(*pcVar2)();
                          return pUVar12;
                        }
                        puVar19 = puVar11 + 2;
                        if ((ulonglong *)puVar11[4] != (ulonglong *)0x0) {
                          puVar19 = (ulonglong *)puVar11[4];
                        }
                        if ((*(uint *)((longlong)puVar19 + (ulonglong)(uVar15 >> 5) * 4) >>
                             (uVar15 & 0x1f) & 1) == 0) goto LAB_141eb79df;
                      }
                      else {
LAB_141eb79df:
                        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValidIndex(InternalIndex)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                           ,0x16a2,
                                           L"Invalid internal index. Use IsValidIndex before calling this method."
                                          );
                        if (bVar5) {
                          pcVar2 = (code *)swi(3);
                          pUVar12 = (UObject *)(*pcVar2)();
                          return pUVar12;
                        }
                      }
                      this = local_100;
                      puVar19 = (ulonglong *)((longlong)(int)(local_80 * uVar15) + *puVar11);
                      goto LAB_141eb794a;
                    }
                  }
                }
              }
              else {
                uVar15 = 0;
                if (0 < iVar10) {
                  do {
                    if ((-1 < (int)uVar15) && ((int)uVar15 < (int)puVar11[5])) {
                      if (((int)puVar11[5] <= (int)uVar15) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValidIndex(Index)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                             ,0x8c4,L""), bVar5)) {
                        pcVar2 = (code *)swi(3);
                        pUVar12 = (UObject *)(*pcVar2)();
                        return pUVar12;
                      }
                      puVar19 = puVar11 + 2;
                      if ((ulonglong *)puVar11[4] != (ulonglong *)0x0) {
                        puVar19 = (ulonglong *)puVar11[4];
                      }
                      uVar9 = uVar15;
                      if ((int)uVar15 < 0) {
                        uVar9 = uVar15 + 0x1f;
                      }
                      if ((*(uint *)((longlong)puVar19 + (longlong)((int)uVar9 >> 5) * 4) >>
                           (uVar15 & 0x1f) & 1) != 0) {
                        if (uVar18 == 0) goto LAB_141eb7824;
                        uVar18 = uVar18 - 1;
                      }
                    }
                    uVar15 = uVar15 + 1;
                    this = local_100;
                  } while ((int)uVar15 < iVar10);
                }
              }
            }
          }
LAB_141eb7947:
          this_00 = (FMapProperty *)0x0;
          puVar19 = puVar11;
        }
      }
      else {
        cVar6 = (**(code **)(**(longlong **)pFVar16 + 0x1a0))
                          (*(longlong **)pFVar16,this_00->ValueProp);
        if (cVar6 == '\0') {
          return (UObject *)0x0;
        }
        iVar10 = *(int *)(pFVar16 + 8);
        if ((iVar10 == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TargetIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\InstancedReferenceSubobjectHelper.cpp"
                               ,0x2a,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          pUVar12 = (UObject *)(*pcVar2)();
          return pUVar12;
        }
        pFVar3 = this_00->KeyProp;
        (**(code **)(this_00->ValueProp->_padding_ + 0x168))();
        pFVar1 = this_00->ValueProp;
        iVar8 = pFVar1->ElementSize;
        if ((iVar8 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          pUVar12 = (UObject *)(*pcVar2)();
          return pUVar12;
        }
        if ((pFVar1 == (FProperty *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          pUVar12 = (UObject *)(*pcVar2)();
          return pUVar12;
        }
        if ((int)puVar11[1] <= iVar10) {
          return (UObject *)0x0;
        }
        this_00 = (FMapProperty *)this_00->ValueProp;
        this = local_100;
        iVar7 = local_108;
        if ((int)puVar11[1] == 0) {
          puVar19 = (ulonglong *)0x0;
        }
        else {
          uVar13 = *puVar11;
          if ((((ulonglong)pFVar3 & 1) != 0) && ((uVar13 & 1) != 0)) {
            uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar11;
          }
          puVar19 = (ulonglong *)((longlong)iVar8 * (longlong)iVar10 + uVar13);
        }
      }
LAB_141eb794a:
      iVar7 = iVar7 + 1;
      lVar17 = local_f8 + 1;
      puVar11 = puVar19;
    } while (this_00 != (FMapProperty *)0x0);
  }
  return (UObject *)0x0;
}

