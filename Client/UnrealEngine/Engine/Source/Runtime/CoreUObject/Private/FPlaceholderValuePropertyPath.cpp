// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FPlaceholderValuePropertyPath @ 1420a2870

FPlaceholderValuePropertyPath * __thiscall
FLinkerPlaceholderBase::FPlaceholderValuePropertyPath::FPlaceholderValuePropertyPath
          (FPlaceholderValuePropertyPath *this,FPlaceholderValuePropertyPath *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (this->PropertyChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PropertyChain).ArrayMax;
  iVar2 = (param_1->PropertyChain).ArrayNum;
  pFVar3 = (param_1->PropertyChain).AllocatorInstance.Data;
  (this->PropertyChain).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  ConstructItems<FFieldVariant,FFieldVariant,int>
            ((this->PropertyChain).AllocatorInstance.Data,(FFieldVariant *)pFVar3,iVar2);
  return this;
}

// FPlaceholderValuePropertyPath @ 1420a2900

FPlaceholderValuePropertyPath * __thiscall
FLinkerPlaceholderBase::FPlaceholderValuePropertyPath::FPlaceholderValuePropertyPath
          (FPlaceholderValuePropertyPath *this,FFieldVariant param_1)

{
  FFieldObjectUnion FVar1;
  FFieldObjectUnion *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FFieldClass *pFVar8;
  UClass *pUVar9;
  FPlaceholderValuePropertyPath *pFVar10;
  FTlsAutoCleanup *pFVar11;
  ulonglong uVar12;
  FFieldVariant FVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  FFieldObjectUnion local_res10 [2];
  FFieldObjectUnion local_58;
  code *local_50;
  undefined1 *local_48;
  
  (this->PropertyChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyChain).ArrayNum = 0;
  (this->PropertyChain).ArrayMax = 0;
  pFVar8 = FProperty::StaticClass();
  bVar5 = FFieldVariant::IsA((FFieldVariant *)param_1.Container,pFVar8);
  if (!bVar5) {
    pUVar9 = Z_Construct_UClass_UProperty_NoRegister();
    bVar5 = FFieldVariant::IsA((FFieldVariant *)param_1.Container,pUVar9);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReferencingProperty.IsA<FProperty>() || ReferencingProperty.IsA<UProperty>()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                           ,0x146,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPlaceholderValuePropertyPath *)(*pcVar4)();
      return pFVar10;
    }
  }
  FVar1 = (FFieldObjectUnion)(this->PropertyChain).AllocatorInstance.Data;
  if (((FVar1.Field <= (ulonglong)param_1.Container) &&
      ((ulonglong)param_1.Container <
       (FField *)(&(FVar1.Field)->_padding_ + (this->PropertyChain).ArrayMax))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPlaceholderValuePropertyPath *)(*pcVar4)();
    return pFVar10;
  }
  iVar6 = (this->PropertyChain).ArrayNum;
  if (iVar6 == (this->PropertyChain).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,&(this->PropertyChain).ArrayMax);
  }
  pFVar16 = (this->PropertyChain).AllocatorInstance.Data;
  (this->PropertyChain).ArrayNum = iVar6 + 1;
  uVar14 = *(ulonglong *)param_1.Container;
  *(ulonglong *)(pFVar16 + (longlong)iVar6 * 8) = uVar14;
  if ((((uVar14 & 1) != 0) && ((UObject *)(uVar14 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar14 & 0xfffffffffffffffe));
  }
  FFieldVariant::GetOwnerVariant((FFieldVariant *)param_1.Container);
  local_48 = local_res8;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  uVar15 = *(int *)(pFVar11 + 7) - 1;
  if ((local_res10[0].Unknown & 0xfffffffffffffffe) == 0) {
    return this;
  }
  lVar18 = (longlong)(int)uVar15 * 8;
  do {
    if ((local_res10[0].Unknown & 1) == 0) {
LAB_1420a2ae0:
      if ((local_res10[0].Field != (FField *)0x0) &&
         (((uint)(int)(local_res10[0].Field)->ClassPrivate->CastFlags >> 0xf & 1) != 0)) {
        local_58 = local_res10[0];
        if (((local_res10[0].Unknown & 1) != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsUObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x180,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaceholderValuePropertyPath *)(*pcVar4)();
          return pFVar10;
        }
        pFVar2 = (FFieldObjectUnion *)(this->PropertyChain).AllocatorInstance.Data;
        if (((pFVar2 <= &local_58) && (&local_58 < pFVar2 + (this->PropertyChain).ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaceholderValuePropertyPath *)(*pcVar4)();
          return pFVar10;
        }
        iVar6 = (this->PropertyChain).ArrayNum;
        if (iVar6 == (this->PropertyChain).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,&(this->PropertyChain).ArrayMax);
        }
        (this->PropertyChain).ArrayNum = iVar6 + 1;
        ((FFieldObjectUnion *)((this->PropertyChain).AllocatorInstance.Data + (longlong)iVar6 * 8))
        ->Unknown = (ulong64)local_58;
        if ((((byte)local_58.Unknown &
             (UObject *)(local_58.Unknown & 0xfffffffffffffffe) != (UObject *)0x0) != 0) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)(local_58.Unknown & 0xfffffffffffffffe));
        }
      }
    }
    else {
      lVar17 = *(longlong *)((local_res10[0].Unknown & 0xfffffffffffffffe) + 0x10);
      pUVar9 = Z_Construct_UClass_UClass_NoRegister();
      if (pUVar9 != (UClass *)0x0) {
        iVar6 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar17 + 0x38) < iVar6) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar9->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          return this;
        }
      }
      if ((local_res10[0].Unknown & 1) == 0) goto LAB_1420a2ae0;
      uVar14 = local_res10[0].Unknown & 0xfffffffffffffffe;
      if (uVar14 != 0) {
        pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar6 = (int)pUVar9->_padding_;
        if ((iVar6 <= *(int *)(*(longlong *)(uVar14 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar9->_padding_)) {
          if (uVar15 == 0xffffffff) {
            return this;
          }
          uVar7 = 0;
          if ((int)uVar15 < *(int *)(pFVar11 + 7)) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FPlaceholderValuePropertyPath *)(*pcVar4)();
            return pFVar10;
          }
          lVar17 = 0;
          pFVar16 = (FScriptContainerElement *)((longlong)pFVar11[6] + lVar18);
          pFVar8 = FStructProperty::StaticClass();
          bVar5 = FFieldVariant::IsA((FFieldVariant *)pFVar16,pFVar8);
          if ((bVar5) && (uVar12 = *(ulonglong *)pFVar16, uVar12 != 0)) {
LAB_1420a2cc0:
            lVar17 = *(longlong *)(uVar12 + 0x70);
            if (lVar17 == 0) goto LAB_1420a2cc9;
          }
          else {
            pUVar9 = Z_Construct_UClass_UStructProperty_NoRegister();
            bVar5 = FFieldVariant::IsA((FFieldVariant *)pFVar16,pUVar9);
            if ((bVar5) && (uVar12 = *(ulonglong *)pFVar16 & 0xfffffffffffffffe, uVar12 != 0))
            goto LAB_1420a2cc0;
LAB_1420a2cc9:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerStruct",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                               ,0x16c,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FPlaceholderValuePropertyPath *)(*pcVar4)();
              return pFVar10;
            }
          }
          if (*(int *)(lVar17 + 0x38) < *(int *)(uVar14 + 0x38)) {
            return this;
          }
          if (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(uVar14 + 0x38) * 8) !=
              uVar14 + 0x30) {
            return this;
          }
          local_res10[0].Unknown = *(ulong64 *)pFVar16;
          if ((((local_res10[0].Unknown & 1) != 0) &&
              ((UObject *)(local_res10[0].Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)(local_res10[0].Unknown & 0xfffffffffffffffe));
          }
          pFVar3 = (this->PropertyChain).AllocatorInstance.Data;
          if (((pFVar3 <= pFVar16) &&
              (pFVar16 < pFVar3 + (longlong)(this->PropertyChain).ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FPlaceholderValuePropertyPath *)(*pcVar4)();
            return pFVar10;
          }
          iVar6 = (this->PropertyChain).ArrayNum;
          if (iVar6 == (this->PropertyChain).ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)this,&(this->PropertyChain).ArrayMax);
          }
          (this->PropertyChain).ArrayNum = iVar6 + 1;
          uVar14 = *(ulonglong *)pFVar16;
          *(ulonglong *)((this->PropertyChain).AllocatorInstance.Data + (longlong)iVar6 * 8) =
               uVar14;
          if ((((byte)uVar14 & (UObject *)(uVar14 & 0xfffffffffffffffe) != (UObject *)0x0) != 0) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)(uVar14 & 0xfffffffffffffffe));
          }
          uVar15 = uVar15 - 1;
          lVar18 = lVar18 + -8;
        }
      }
    }
    FVar13 = FFieldVariant::GetOwnerVariant((FFieldVariant *)local_res10);
                    /* WARNING: Load size is inaccurate */
    local_res10[0].Field = *FVar13.Container;
    if ((((local_res10[0].Unknown & 1) != 0) &&
        ((UObject *)(local_res10[0].Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10[0].Unknown & 0xfffffffffffffffe));
    }
    if ((local_res10[0].Unknown & 0xfffffffffffffffe) == 0) {
      return this;
    }
  } while( true );
}

// GetOwnerClass @ 1420c7a30

UClass * __thiscall
FLinkerPlaceholderBase::FPlaceholderValuePropertyPath::GetOwnerClass
          (FPlaceholderValuePropertyPath *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  uint uVar5;
  
  iVar1 = (this->PropertyChain).ArrayNum;
  if (iVar1 < 1) {
    return (UClass *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UClass *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = FFieldVariant::GetOwnerClass
                     ((FFieldVariant *)
                      ((this->PropertyChain).AllocatorInstance.Data +
                      (longlong)((this->PropertyChain).ArrayNum + -1) * 8));
  return pUVar4;
}

// IsValid @ 1420c9c20

bool __thiscall
FLinkerPlaceholderBase::FPlaceholderValuePropertyPath::IsValid(FPlaceholderValuePropertyPath *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FFieldClass *pFVar6;
  UClass *pUVar7;
  uint uVar8;
  uint uVar9;
  
  if (0 < (this->PropertyChain).ArrayNum) {
    pFVar2 = (this->PropertyChain).AllocatorInstance.Data;
    pFVar6 = FObjectPropertyBase::StaticClass();
    bVar4 = FFieldVariant::IsA((FFieldVariant *)pFVar2,pFVar6);
    if (!bVar4) {
      if (((this->PropertyChain).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->PropertyChain).AllocatorInstance.Data;
      pUVar7 = Z_Construct_UClass_UObjectPropertyBase_NoRegister();
      bVar4 = FFieldVariant::IsA((FFieldVariant *)pFVar2,pUVar7);
      if (!bVar4) {
        return false;
      }
    }
    iVar1 = (this->PropertyChain).ArrayNum;
    uVar9 = iVar1 - 1;
    uVar8 = 0;
    if ((int)uVar9 < iVar1) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar7 = FFieldVariant::GetOwnerClass
                       ((FFieldVariant *)
                        ((this->PropertyChain).AllocatorInstance.Data +
                        (longlong)((this->PropertyChain).ArrayNum + -1) * 8));
    if (pUVar7 != (UClass *)0x0) {
      return true;
    }
  }
  return false;
}

// Resolve @ 1420d42d0

int __thiscall
FLinkerPlaceholderBase::FPlaceholderValuePropertyPath::Resolve
          (FPlaceholderValuePropertyPath *this,FLinkerPlaceholderBase *param_1,UObject *param_2,
          UObject *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  UObject *pUVar7;
  uint uVar8;
  ulonglong local_res8;
  
  iVar5 = (this->PropertyChain).ArrayNum;
  uVar8 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar8 < iVar5) {
    uVar4 = ~uVar8 >> 0x1f;
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
  uVar1 = *(ulonglong *)
           ((this->PropertyChain).AllocatorInstance.Data +
           (longlong)(this->PropertyChain).ArrayNum * 8 + -8);
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1420d439a;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1420d439a:
  puVar6 = ResolvePropertyAddress((FFieldVariant)&local_res8,param_3);
  pUVar7 = (UObject *)(**(code **)(param_1->_padding_ + 0x18))(param_1);
  iVar5 = FLinkerPlaceholderObjectImpl::ResolvePlaceholderValues
                    (&this->PropertyChain,(this->PropertyChain).ArrayNum + -1,puVar6,pUVar7,param_2)
  ;
  return iVar5;
}

// ResolveRaw @ 1420d5da0

int __thiscall
FLinkerPlaceholderBase::FPlaceholderValuePropertyPath::ResolveRaw
          (FPlaceholderValuePropertyPath *this,FLinkerPlaceholderBase *param_1,UObject *param_2,
          void *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  UObject *pUVar7;
  uint uVar8;
  ulonglong local_res8;
  
  iVar5 = (this->PropertyChain).ArrayNum;
  uVar8 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar8 < iVar5) {
    uVar4 = ~uVar8 >> 0x1f;
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
  uVar1 = *(ulonglong *)
           ((this->PropertyChain).AllocatorInstance.Data +
           (longlong)(this->PropertyChain).ArrayNum * 8 + -8);
  local_res8 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_1420d5e6a;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_1420d5e6a:
  puVar6 = ResolvePropertyAddress((FFieldVariant)&local_res8,param_3);
  pUVar7 = (UObject *)(**(code **)(param_1->_padding_ + 0x18))(param_1);
  iVar5 = FLinkerPlaceholderObjectImpl::ResolvePlaceholderValues
                    (&this->PropertyChain,(this->PropertyChain).ArrayNum + -1,puVar6,pUVar7,param_2)
  ;
  return iVar5;
}

