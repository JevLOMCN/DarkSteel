// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// FExpressionObject @ 14e14f880

FExpressionObject * __thiscall
Optimus::Expression::FExpressionObject::FExpressionObject
          (FExpressionObject *this,FExpressionObject *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar3;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar4;
  
  (this->Expression).AllocatorInstance.SecondaryData =
       (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
        )0x0;
  FVar3 = (param_1->Expression).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Expression).ArrayNum;
  (this->Expression).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )0x0) {
    param_1 = (FExpressionObject *)FVar3;
  }
  piVar1 = &(this->Expression).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
            (0xc,4,iVar2,0,
             (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              *)this,iVar2,piVar1);
  FVar3 = (this->Expression).AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )this;
  if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )0x0) {
    FVar4 = FVar3;
  }
  ConstructItems<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>,TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>,int>
            ((void *)FVar4,
             (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
              *)param_1,iVar2);
  return this;
}

// GetAsSingleConstant @ 14e1ba150

TOptional<FName> __thiscall
Optimus::Expression::FExpressionObject::GetAsSingleConstant(FExpressionObject *this)

{
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<FName> TVar5;
  TOptional<FName>_u_0 in_RDX;
  
  if ((this->Expression).ArrayNum == 1) {
    FVar1 = (this->Expression).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                  )0x0) {
      this = (FExpressionObject *)FVar1;
    }
    if (*(uchar *)((longlong)this + 8) != '\x01') {
      this = (FExpressionObject *)
             (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              )0x0;
    }
    if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )this != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                   )0x0) {
      uVar2 = *(undefined8 *)this;
      *(undefined8 *)in_RDX = uVar2;
      if ((int)uVar2 != -1) {
        return (TOptional<FName>)in_RDX.TypedValue;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (!bVar4) {
        return (TOptional<FName>)in_RDX.TypedValue;
      }
      pcVar3 = (code *)swi(3);
      TVar5.field0_0x0 = (TOptional<FName>_u_0)(*pcVar3)();
      return (TOptional<FName>)TVar5.field0_0x0;
    }
  }
  *(undefined4 *)in_RDX = 0xffffffff;
  *(undefined4 *)((longlong)in_RDX + 4) = 0;
  return (TOptional<FName>)in_RDX;
}

// GetUsedConstants @ 14e1e8c70

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
Optimus::Expression::FExpressionObject::GetUsedConstants
          (FExpressionObject *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar10;
  FName local_res8;
  ulonglong uVar9;
  
  uVar7 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  iVar6 = (this->Expression).ArrayNum;
  uVar9 = uVar7;
  if (0 < iVar6) {
    do {
      uVar8 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
        return pTVar5;
      }
      FVar1 = (this->Expression).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )this;
      if (FVar1 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                    )0x0) {
        FVar10 = FVar1;
      }
      if (((bool *)((longlong)FVar10 + uVar7))[8] == true) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (__return_storage_ptr__,&local_res8,(bool *)((longlong)FVar10 + uVar7));
      }
      iVar6 = (this->Expression).ArrayNum;
      uVar7 = uVar7 + 0xc;
      uVar9 = (ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < iVar6);
  }
  return __return_storage_ptr__;
}

// Load @ 14e1f1210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Optimus::Expression::FExpressionObject::Load(FExpressionObject *this,FArchive *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar6;
  uint *puVar7;
  uint *puVar8;
  code *pcVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStackY_e8 [32];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88 [2];
  undefined8 local_80;
  uint local_78 [2];
  byte local_70;
  uint local_6c [2];
  byte local_64;
  undefined8 local_60;
  byte local_58;
  uint local_54 [2];
  byte local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_98 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_98);
    }
  }
  else {
    local_98 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((int)local_98 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_98);
  }
  piVar1 = &(this->Expression).ArrayMax;
  (this->Expression).ArrayNum = 0;
  if ((this->Expression).ArrayMax < (int)local_98) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
              (0xc,4,local_98,
               (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                *)this,0,piVar1);
  }
  iVar10 = 0;
  if (0 < (int)local_98) {
    do {
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_94 = 0xffffffff;
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_94);
        }
      }
      else {
        local_94 = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if (local_94 == 0) {
        plVar2 = *(longlong **)&param_1->field_0x8;
        local_90 = 0;
        if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_90,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_90);
          }
        }
        else {
          local_90 = *(uint *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
        FVar3 = (this->Expression).AllocatorInstance.SecondaryData;
        local_54[0] = local_90;
        FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                 )this;
        if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )0x0) {
          FVar6 = FVar3;
        }
        local_4c = 0;
        if ((ulonglong)FVar6 <= local_54) {
          FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                   )this;
          if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )0x0) {
            FVar6 = FVar3;
          }
          if ((local_54 < (uint *)((longlong)FVar6 + (longlong)*piVar1 * 0xc)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar5 = (this->Expression).ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                            (0x40c,(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                                    *)this,piVar1);
        }
        uVar11 = (ulonglong)local_4c;
        (this->Expression).ArrayNum = iVar5 + 1;
        FVar3 = (this->Expression).AllocatorInstance.SecondaryData;
        FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                 )this;
        if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )0x0) {
          FVar6 = FVar3;
        }
        ((uchar *)((longlong)FVar6 + 8))[(longlong)iVar5 * 0xc] = local_4c;
        puVar8 = (uint *)((longlong)FVar6 + (longlong)iVar5 * 0xc);
        if ((3 < local_4c) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar4)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                           ::__l2::MoveConstructors)[uVar11];
        if (pcVar9 != UE::Core::Private::
                      TMoveConstructorCaller<enum_Optimus::Expression::FExpressionObject::EOperator>
                      ::Construct) {
          puVar7 = local_54;
          goto LAB_14e1f18d7;
        }
        *puVar8 = local_54[0];
      }
      else if (local_94 == 1) {
        local_80 = 0;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_80);
        FVar3 = (this->Expression).AllocatorInstance.SecondaryData;
        local_60 = local_80;
        local_58 = 1;
        FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                 )this;
        if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )0x0) {
          FVar6 = FVar3;
        }
        if ((ulonglong)FVar6 <= &local_60) {
          FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                   )this;
          if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )0x0) {
            FVar6 = FVar3;
          }
          if ((&local_60 < (undefined8 *)((longlong)FVar6 + (longlong)*piVar1 * 0xc)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar5 = (this->Expression).ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                            (0x40c,(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                                    *)this,piVar1);
        }
        uVar11 = (ulonglong)local_58;
        (this->Expression).ArrayNum = iVar5 + 1;
        FVar3 = (this->Expression).AllocatorInstance.SecondaryData;
        FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                 )this;
        if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )0x0) {
          FVar6 = FVar3;
        }
        ((uchar *)((longlong)FVar6 + 8))[(longlong)iVar5 * 0xc] = local_58;
        puVar8 = (uint *)((longlong)FVar6 + (longlong)iVar5 * 0xc);
        if ((3 < local_58) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar4)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                           ::__l2::MoveConstructors)[uVar11];
        if (pcVar9 != UE::Core::Private::TMoveConstructorCaller<FName>::Construct) {
          puVar7 = (uint *)&local_60;
          goto LAB_14e1f18d7;
        }
        *(undefined8 *)puVar8 = local_60;
      }
      else if (local_94 == 2) {
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_88,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_88);
          }
        }
        else {
          local_88[0] = *(uint *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
        FVar3 = (this->Expression).AllocatorInstance.SecondaryData;
        local_6c[0] = local_88[0];
        FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                 )this;
        if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )0x0) {
          FVar6 = FVar3;
        }
        local_64 = 2;
        if ((ulonglong)FVar6 <= local_6c) {
          FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                   )this;
          if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )0x0) {
            FVar6 = FVar3;
          }
          if ((local_6c < (uint *)((longlong)FVar6 + (longlong)*piVar1 * 0xc)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar5 = (this->Expression).ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                            (0x40c,(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                                    *)this,piVar1);
        }
        uVar11 = (ulonglong)local_64;
        (this->Expression).ArrayNum = iVar5 + 1;
        FVar3 = (this->Expression).AllocatorInstance.SecondaryData;
        FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                 )this;
        if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )0x0) {
          FVar6 = FVar3;
        }
        ((uchar *)((longlong)FVar6 + 8))[(longlong)iVar5 * 0xc] = local_64;
        puVar8 = (uint *)((longlong)FVar6 + (longlong)iVar5 * 0xc);
        if ((3 < local_64) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar4)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                           ::__l2::MoveConstructors)[uVar11];
        if (pcVar9 != UE::Core::Private::
                      TMoveConstructorCaller<Optimus::Expression::FExpressionObject::FFunctionRef>::
                      Construct) {
          puVar7 = local_6c;
          goto LAB_14e1f18d7;
        }
        *puVar8 = local_6c[0];
      }
      else {
        if (local_94 != 3) {
          if (1 < (byte)LogOptimusCore._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
          }
          FArchiveState::SetError((FArchiveState *)param_1);
          return;
        }
        plVar2 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_8c,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_8c);
          }
        }
        else {
          local_8c = *(uint *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
        FVar3 = (this->Expression).AllocatorInstance.SecondaryData;
        local_78[0] = local_8c;
        FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                 )this;
        if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )0x0) {
          FVar6 = FVar3;
        }
        local_70 = 3;
        if ((ulonglong)FVar6 <= local_78) {
          FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                   )this;
          if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )0x0) {
            FVar6 = FVar3;
          }
          if ((local_78 < (uint *)((longlong)FVar6 + (longlong)*piVar1 * 0xc)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar5 = (this->Expression).ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
                            (0x40c,(ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                                    *)this,piVar1);
        }
        uVar11 = (ulonglong)local_70;
        (this->Expression).ArrayNum = iVar5 + 1;
        FVar3 = (this->Expression).AllocatorInstance.SecondaryData;
        FVar6 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                 )this;
        if (FVar3 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                      )0x0) {
          FVar6 = FVar3;
        }
        ((uchar *)((longlong)FVar6 + 8))[(longlong)iVar5 * 0xc] = local_70;
        puVar8 = (uint *)((longlong)FVar6 + (longlong)iVar5 * 0xc);
        if ((3 < local_70) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar4)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                           ::__l2::MoveConstructors)[uVar11];
        if (pcVar9 == UE::Core::Private::TMoveConstructorCaller<float>::Construct) {
          *puVar8 = local_78[0];
        }
        else {
          puVar7 = local_78;
LAB_14e1f18d7:
          (*pcVar9)(puVar8,puVar7);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)local_98);
  }
  return;
}

// Save @ 14e21b250

void __thiscall
Optimus::Expression::FExpressionObject::Save(FExpressionObject *this,FArchive *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_58;
  uint local_54;
  undefined8 local_50 [2];
  
  local_res18[0] = (this->Expression).ArrayNum;
  piVar1 = &(this->Expression).ArrayNum;
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  FVar4 = (this->Expression).AllocatorInstance.SecondaryData;
  iVar2 = *piVar1;
  if (FVar4 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )0x0) {
    this = (FExpressionObject *)FVar4;
  }
  FVar4 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )((longlong)this + (longlong)iVar2 * 0xc);
LAB_14e21b2e0:
  while( true ) {
    while( true ) {
      if (*piVar1 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )this == FVar4) {
        return;
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      local_res10[0] = (uint)*(uchar *)((longlong)this + 8);
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res10);
        }
      }
      else {
        local_res10[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      if (local_res10[0] != 0) break;
      if ((*(uchar *)((longlong)this + 8) != '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      local_54 = *(uint *)this;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        puVar7 = &local_54;
        goto LAB_14e21b4ce;
      }
      local_54 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
      this = (FExpressionObject *)((longlong)this + 0xc);
    }
    if (local_res10[0] != 1) break;
    if ((*(uchar *)((longlong)this + 8) != '\x01') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_50[0] = *(undefined8 *)this;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_50);
    this = (FExpressionObject *)((longlong)this + 0xc);
  }
  if (local_res10[0] == 2) {
    if ((*(uchar *)((longlong)this + 8) != '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_58 = *(uint *)this;
    if ((uint *)*plVar3 + 1 <= (uint *)plVar3[1]) {
      local_58 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
      this = (FExpressionObject *)((longlong)this + 0xc);
      goto LAB_14e21b2e0;
    }
    puVar7 = &local_58;
  }
  else {
    if (local_res10[0] != 3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusExpressionEvaluator.cpp"
                         ,0xf4,L"");
      if (!bVar6) {
        return;
      }
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(uchar *)((longlong)this + 8) != '\x03') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_res20[0] = *(uint *)this;
    if ((uint *)*plVar3 + 1 <= (uint *)plVar3[1]) {
      local_res20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
      this = (FExpressionObject *)((longlong)this + 0xc);
      goto LAB_14e21b2e0;
    }
    puVar7 = local_res20;
  }
LAB_14e21b4ce:
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
    this = (FExpressionObject *)((longlong)this + 0xc);
  }
  else {
    FArchive::SerializeByteOrderSwapped(param_1,puVar7);
    this = (FExpressionObject *)((longlong)this + 0xc);
  }
  goto LAB_14e21b2e0;
}

// ToString @ 14e226b50

/* WARNING: Removing unreachable block (ram,0x00014e22742d) */

FString * __thiscall
Optimus::Expression::FExpressionObject::ToString
          (FExpressionObject *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_108;
  undefined8 local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  
  FVar4 = (this->Expression).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Expression).ArrayNum;
  iVar3 = *piVar1;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  if (FVar4 != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                )0x0) {
    this = (FExpressionObject *)FVar4;
  }
  FVar4 = (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )((longlong)this + (longlong)iVar3 * 0xc);
  do {
    if (*piVar1 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
         )this == FVar4) {
      iVar3 = (int)local_100;
      bVar6 = true;
      pFVar11 = local_108.Data + (longlong)(int)local_100 * 0x10;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      FVar10.Data = local_108.Data;
      while( true ) {
        if ((int)local_100 != iVar3) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar10.Data == pFVar11) break;
        if (bVar6) {
          bVar6 = false;
        }
        else {
          ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
        }
        iVar7 = *(int *)(FVar10.Data + 8) + -1;
        if (*(int *)(FVar10.Data + 8) == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar10.Data,iVar7);
        FVar10.Data = FVar10.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_108.Data,(int)local_100);
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      return __return_storage_ptr__;
    }
    cVar2 = *(char *)((longlong)this + 8);
    if (cVar2 == '\0') {
      if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )this != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                     )0x0) {
        switch(*(undefined4 *)this) {
        case 0:
          ::FString::FString(&local_f8,L"Op[Negate]");
          if (((local_108.Data <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 <
               local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar5)();
            return pFVar8;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
          lVar9 = (longlong)iVar7;
          *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
          *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
               local_f8.Data.AllocatorInstance.Data;
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_f8.Data.ArrayNum;
          *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_f8.Data.ArrayMax;
          FVar10.Data = (FScriptContainerElement *)0x0;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          break;
        case 1:
          ::FString::FString(&local_e8,L"Op[Add]");
          if (((local_108.Data <= (FScriptContainerElement *)&local_e8) &&
              ((FScriptContainerElement *)&local_e8 <
               local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar5)();
            return pFVar8;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
          lVar9 = (longlong)iVar7;
          *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
          *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
               local_e8.Data.AllocatorInstance.Data;
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_e8.Data.ArrayNum;
          *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_e8.Data.ArrayMax;
          FVar10.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          break;
        case 2:
          ::FString::FString(&local_d8,L"Op[Subtract]");
          if (((local_108.Data <= (FScriptContainerElement *)&local_d8) &&
              ((FScriptContainerElement *)&local_d8 <
               local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar5)();
            return pFVar8;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
          lVar9 = (longlong)iVar7;
          *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
          *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
               local_d8.Data.AllocatorInstance.Data;
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_d8.Data.ArrayNum;
          *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_d8.Data.ArrayMax;
          FVar10.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          break;
        case 3:
          ::FString::FString(&local_c8,L"Op[Multiply]");
          if (((local_108.Data <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 <
               local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar5)();
            return pFVar8;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
          lVar9 = (longlong)iVar7;
          *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
          *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
               local_c8.Data.AllocatorInstance.Data;
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_c8.Data.ArrayNum;
          *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_c8.Data.ArrayMax;
          FVar10.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          break;
        case 4:
          ::FString::FString(&local_b8,L"Op[Divide]");
          if (((local_108.Data <= (FScriptContainerElement *)&local_b8) &&
              ((FScriptContainerElement *)&local_b8 <
               local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar5)();
            return pFVar8;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
          lVar9 = (longlong)iVar7;
          *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
          *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
               local_b8.Data.AllocatorInstance.Data;
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_b8.Data.ArrayNum;
          *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_b8.Data.ArrayMax;
          FVar10.Data = (FScriptContainerElement *)0x0;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
          break;
        case 5:
          ::FString::FString(&local_a8,L"Op[Modulo]");
          if (((local_108.Data <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 <
               local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar5)();
            return pFVar8;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
          lVar9 = (longlong)iVar7;
          *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
          *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
               local_a8.Data.AllocatorInstance.Data;
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_a8.Data.ArrayNum;
          *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_a8.Data.ArrayMax;
          FVar10.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          break;
        case 6:
          ::FString::FString(&local_98,L"Op[Power]");
          if (((local_108.Data <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 <
               local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar5)();
            return pFVar8;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
          lVar9 = (longlong)iVar7;
          *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
          *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
               local_98.Data.AllocatorInstance.Data;
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_98.Data.ArrayNum;
          *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_98.Data.ArrayMax;
          FVar10.Data = (FScriptContainerElement *)0x0;
          local_98.Data.ArrayNum = 0;
          local_98.Data.ArrayMax = 0;
          break;
        case 7:
          ::FString::FString(&local_88,L"Op[FloorDivide]");
          if (((local_108.Data <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 <
               local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FString *)(*pcVar5)();
            return pFVar8;
          }
          iVar7 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
          lVar9 = (longlong)iVar7;
          *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
          *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
               local_88.Data.AllocatorInstance.Data;
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_88.Data.ArrayNum;
          *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_88.Data.ArrayMax;
          FVar10.Data = (FScriptContainerElement *)0x0;
          local_88.Data.ArrayNum = 0;
          local_88.Data.ArrayMax = 0;
          break;
        default:
          goto switchD_14e226bf6_default;
        }
LAB_14e22762b:
        if (FVar10.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar10.Data);
        }
      }
    }
    else if (cVar2 == '\x01') {
      if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )this != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                     )0x0) {
        ::FName::ToString((FName *)this,&local_48);
        ::FString::PrintfImpl(&local_78,L"C[%s]");
        if (((local_108.Data <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar5)();
          return pFVar8;
        }
        iVar7 = (int)local_100;
        if ((int)local_100 == local_100._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_108,(int *)((longlong)&local_100 + 4));
        }
        local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
        lVar9 = (longlong)iVar7;
        *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
        *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
             local_78.Data.AllocatorInstance.Data;
        *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_78.Data.ArrayNum;
        *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_78.Data.ArrayMax;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar10.Data = local_48.Data.AllocatorInstance.Data;
        goto LAB_14e22762b;
      }
    }
    else if (cVar2 == '\x02') {
      if ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
           )this != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                     )0x0) {
        ::FString::PrintfImpl(&local_68,L"F[%d]");
        if (((local_108.Data <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             local_108.Data + (longlong)local_100._4_4_ * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FString *)(*pcVar5)();
          return pFVar8;
        }
        iVar7 = (int)local_100;
        if ((int)local_100 == local_100._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_108,(int *)((longlong)&local_100 + 4));
        }
        local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
        lVar9 = (longlong)iVar7;
        *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
        *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) =
             local_68.Data.AllocatorInstance.Data;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_108.Data + lVar9 * 0x10 + 8) = local_68.Data.ArrayNum;
        *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_68.Data.ArrayMax;
        FVar10.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        goto LAB_14e22762b;
      }
    }
    else if ((cVar2 == '\x03') &&
            ((ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
              )this != (ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
                        )0x0)) {
      ::FString::PrintfImpl((FString *)&local_58,L"V[%g]");
      if ((local_108.Data <= (FScriptContainerElement *)&local_58) &&
         (((FScriptContainerElement *)&local_58 < local_108.Data + (longlong)local_100._4_4_ * 0x10
          && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)))) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar5)();
        return pFVar8;
      }
      iVar7 = (int)local_100;
      if ((int)local_100 == local_100._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_108,(int *)((longlong)&local_100 + 4));
      }
      local_100 = CONCAT44(local_100._4_4_,iVar7 + 1);
      lVar9 = (longlong)iVar7;
      *(undefined8 *)(local_108.Data + lVar9 * 0x10) = 0;
      *(FScriptContainerElement **)(local_108.Data + lVar9 * 0x10) = local_58.Data;
      local_58.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_108.Data + lVar9 * 0x10 + 8) = (int)local_50;
      *(int *)(local_108.Data + lVar9 * 0x10 + 0xc) = local_50._4_4_;
      FVar10.Data = (FScriptContainerElement *)0x0;
      local_50._0_4_ = 0;
      local_50._4_4_ = 0;
      goto LAB_14e22762b;
    }
switchD_14e226bf6_default:
    this = (FExpressionObject *)((longlong)this + 0xc);
  } while( true );
}

