// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 30

// operator()<TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_> @ 14da06d00

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::
operator()<TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCachedSystemScalabilityCVars *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoInstancedSkinnedMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoInstancedSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar5 = FFastGeoElementType::IsA
                         (FFastGeoInstancedSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar5)))) {
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar11 + (longlong)iVar2 * 0x5f0;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoInstancedSkinnedMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar11 == pFVar10) break;
      pcVar3 = *(char **)this;
      if (*pcVar3 != '\0') {
        (**(code **)(*(longlong *)pFVar11 + 0xb8))(pFVar11,*(undefined8 *)(pcVar3 + 8));
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar9 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar9,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)
            ) && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                  bHasNullRHIOnCommandline == false)) &&
          (FVar1 = pFVar11[0x178], pFVar7 = GetCachedScalabilityCVars(),
          (int)(uint)(byte)FVar1 <= pFVar7->DetailMode)) &&
         (((lVar8 = (**(code **)(*(longlong *)pFVar11 + 0xa0))(pFVar11),
           ((byte)pFVar11[0x160] & 1) != 0 && ((*(uint *)(lVar8 + 0x74) & 0x40000) == 0)) ||
          (((*(uint *)(lVar8 + 0x70) & 0x110000) != 0 || ((*(byte *)(lVar8 + 0x74) & 0x40) != 0)))))
         ) {
        lVar8 = *(longlong *)(pcVar3 + 0x10);
        local_38[0] = pFVar11;
        if (((*(FScriptContainerElement ***)(lVar8 + 0x38) <= local_38) &&
            (local_38 < *(FScriptContainerElement ***)(lVar8 + 0x38) + *(int *)(lVar8 + 0x44))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = *(int *)(lVar8 + 0x40);
        if (iVar6 == *(int *)(lVar8 + 0x44)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar8 + 0x38),(int *)(lVar8 + 0x44));
        }
        *(int *)(lVar8 + 0x40) = iVar6 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar8 + 0x38) + (longlong)iVar6 * 8) =
             local_38[0];
      }
      pFVar11 = pFVar11 + 0x5f0;
    }
  }
  return;
}

// operator()<TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_> @ 14da06f80

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::
operator()<TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [16];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoInstancedSkinnedMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoInstancedSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar6 = FFastGeoElementType::IsA
                         (FFastGeoInstancedSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar6)))) {
    pFVar9 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x5f0;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoInstancedSkinnedMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar10) break;
      puVar3 = *(undefined8 **)this;
      if (pFVar9[0x3b0] == (FScriptContainerElement)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          pwVar8 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar8,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
        if ((((PRIVATE_GIsRunningCommandlet == false) ||
             (PRIVATE_GAllowCommandletRendering != false)) &&
            (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) && (bVar6 = IsComponentPSOPrecachingEnabled(), bVar6)) {
          LOCK();
          pFVar9[0x3b1] = (FScriptContainerElement)0x1;
          UNLOCK();
          LOCK();
          pFVar9[0x3b2] = (FScriptContainerElement)0x0;
          UNLOCK();
        }
      }
      pFVar4 = (ForAnyElementType *)*puVar3;
      local_38[0] = pFVar9;
      if (((pFVar4->Data <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar7 + 1;
      pFVar9 = pFVar9 + 0x5f0;
      *(FScriptContainerElement **)(pFVar4->Data + (longlong)iVar7 * 8) = local_38[0];
    }
  }
  return;
}

// operator()<TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_> @ 14da071b0

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::
operator()<TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCachedSystemScalabilityCVars *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoInstancedStaticMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoInstancedStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar5 = FFastGeoElementType::IsA
                         (FFastGeoInstancedStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar5)))) {
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar11 + (longlong)iVar2 * 0x650;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoInstancedStaticMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar11 == pFVar10) break;
      pcVar3 = *(char **)this;
      if (*pcVar3 != '\0') {
        (**(code **)(*(longlong *)pFVar11 + 0xb8))(pFVar11,*(undefined8 *)(pcVar3 + 8));
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar9 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar9,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)
            ) && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                  bHasNullRHIOnCommandline == false)) &&
          (FVar1 = pFVar11[0x178], pFVar7 = GetCachedScalabilityCVars(),
          (int)(uint)(byte)FVar1 <= pFVar7->DetailMode)) &&
         (((lVar8 = (**(code **)(*(longlong *)pFVar11 + 0xa0))(pFVar11),
           ((byte)pFVar11[0x160] & 1) != 0 && ((*(uint *)(lVar8 + 0x74) & 0x40000) == 0)) ||
          (((*(uint *)(lVar8 + 0x70) & 0x110000) != 0 || ((*(byte *)(lVar8 + 0x74) & 0x40) != 0)))))
         ) {
        lVar8 = *(longlong *)(pcVar3 + 0x10);
        local_38[0] = pFVar11;
        if (((*(FScriptContainerElement ***)(lVar8 + 0x38) <= local_38) &&
            (local_38 < *(FScriptContainerElement ***)(lVar8 + 0x38) + *(int *)(lVar8 + 0x44))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = *(int *)(lVar8 + 0x40);
        if (iVar6 == *(int *)(lVar8 + 0x44)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar8 + 0x38),(int *)(lVar8 + 0x44));
        }
        *(int *)(lVar8 + 0x40) = iVar6 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar8 + 0x38) + (longlong)iVar6 * 8) =
             local_38[0];
      }
      pFVar11 = pFVar11 + 0x650;
    }
  }
  return;
}

// operator()<TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_> @ 14da07430

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::
operator()<TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [16];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoInstancedStaticMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoInstancedStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar6 = FFastGeoElementType::IsA
                         (FFastGeoInstancedStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar6)))) {
    pFVar9 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x650;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoInstancedStaticMeshComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar10) break;
      puVar3 = *(undefined8 **)this;
      if (pFVar9[0x3b0] == (FScriptContainerElement)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          pwVar8 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar8,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
        if ((((PRIVATE_GIsRunningCommandlet == false) ||
             (PRIVATE_GAllowCommandletRendering != false)) &&
            (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) && (bVar6 = IsComponentPSOPrecachingEnabled(), bVar6)) {
          LOCK();
          pFVar9[0x3b1] = (FScriptContainerElement)0x1;
          UNLOCK();
          LOCK();
          pFVar9[0x3b2] = (FScriptContainerElement)0x0;
          UNLOCK();
        }
      }
      pFVar4 = (ForAnyElementType *)*puVar3;
      local_38[0] = pFVar9;
      if (((pFVar4->Data <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar7 + 1;
      pFVar9 = pFVar9 + 0x650;
      *(FScriptContainerElement **)(pFVar4->Data + (longlong)iVar7 * 8) = local_38[0];
    }
  }
  return;
}

// operator()<TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>_> @ 14da07660

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()<TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCachedSystemScalabilityCVars *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoProceduralISMComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoProceduralISMComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar5 = FFastGeoElementType::IsA
                         (FFastGeoProceduralISMComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar5)))) {
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar11 + (longlong)iVar2 * 0x5f0;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoProceduralISMComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar11 == pFVar10) break;
      pcVar3 = *(char **)this;
      if (*pcVar3 != '\0') {
        (**(code **)(*(longlong *)pFVar11 + 0xb8))(pFVar11,*(undefined8 *)(pcVar3 + 8));
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar9 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar9,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)
            ) && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                  bHasNullRHIOnCommandline == false)) &&
          (FVar1 = pFVar11[0x178], pFVar7 = GetCachedScalabilityCVars(),
          (int)(uint)(byte)FVar1 <= pFVar7->DetailMode)) &&
         (((lVar8 = (**(code **)(*(longlong *)pFVar11 + 0xa0))(pFVar11),
           ((byte)pFVar11[0x160] & 1) != 0 && ((*(uint *)(lVar8 + 0x74) & 0x40000) == 0)) ||
          (((*(uint *)(lVar8 + 0x70) & 0x110000) != 0 || ((*(byte *)(lVar8 + 0x74) & 0x40) != 0)))))
         ) {
        lVar8 = *(longlong *)(pcVar3 + 0x10);
        local_38[0] = pFVar11;
        if (((*(FScriptContainerElement ***)(lVar8 + 0x38) <= local_38) &&
            (local_38 < *(FScriptContainerElement ***)(lVar8 + 0x38) + *(int *)(lVar8 + 0x44))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = *(int *)(lVar8 + 0x40);
        if (iVar6 == *(int *)(lVar8 + 0x44)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar8 + 0x38),(int *)(lVar8 + 0x44));
        }
        *(int *)(lVar8 + 0x40) = iVar6 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar8 + 0x38) + (longlong)iVar6 * 8) =
             local_38[0];
      }
      pFVar11 = pFVar11 + 0x5f0;
    }
  }
  return;
}

// operator()<TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>_> @ 14da078e0

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()<TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [16];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoProceduralISMComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoProceduralISMComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar6 = FFastGeoElementType::IsA
                         (FFastGeoProceduralISMComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar6)))) {
    pFVar9 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x5f0;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoProceduralISMComponent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar9 == pFVar10) break;
      puVar3 = *(undefined8 **)this;
      if (pFVar9[0x3b0] == (FScriptContainerElement)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          pwVar8 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar8,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
        if ((((PRIVATE_GIsRunningCommandlet == false) ||
             (PRIVATE_GAllowCommandletRendering != false)) &&
            (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) && (bVar6 = IsComponentPSOPrecachingEnabled(), bVar6)) {
          LOCK();
          pFVar9[0x3b1] = (FScriptContainerElement)0x1;
          UNLOCK();
          LOCK();
          pFVar9[0x3b2] = (FScriptContainerElement)0x0;
          UNLOCK();
        }
      }
      pFVar4 = (ForAnyElementType *)*puVar3;
      local_38[0] = pFVar9;
      if (((pFVar4->Data <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar7 + 1;
      pFVar9 = pFVar9 + 0x5f0;
      *(FScriptContainerElement **)(pFVar4->Data + (longlong)iVar7 * 8) = local_38[0];
    }
  }
  return;
}

// operator()<TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_> @ 14da07b10

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()<TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCachedSystemScalabilityCVars *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoSkinnedMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar5 = FFastGeoElementType::IsA
                         (FFastGeoSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar5)))) {
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar11 + (longlong)iVar2 * 0x590;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoSkinnedMeshComponent,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar11 == pFVar10) break;
      pcVar3 = *(char **)this;
      if (*pcVar3 != '\0') {
        (**(code **)(*(longlong *)pFVar11 + 0xb8))(pFVar11,*(undefined8 *)(pcVar3 + 8));
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar9 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar9,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)
            ) && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                  bHasNullRHIOnCommandline == false)) &&
          (FVar1 = pFVar11[0x178], pFVar7 = GetCachedScalabilityCVars(),
          (int)(uint)(byte)FVar1 <= pFVar7->DetailMode)) &&
         (((lVar8 = (**(code **)(*(longlong *)pFVar11 + 0xa0))(pFVar11),
           ((byte)pFVar11[0x160] & 1) != 0 && ((*(uint *)(lVar8 + 0x74) & 0x40000) == 0)) ||
          (((*(uint *)(lVar8 + 0x70) & 0x110000) != 0 || ((*(byte *)(lVar8 + 0x74) & 0x40) != 0)))))
         ) {
        lVar8 = *(longlong *)(pcVar3 + 0x10);
        local_38[0] = pFVar11;
        if (((*(FScriptContainerElement ***)(lVar8 + 0x38) <= local_38) &&
            (local_38 < *(FScriptContainerElement ***)(lVar8 + 0x38) + *(int *)(lVar8 + 0x44))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = *(int *)(lVar8 + 0x40);
        if (iVar6 == *(int *)(lVar8 + 0x44)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar8 + 0x38),(int *)(lVar8 + 0x44));
        }
        *(int *)(lVar8 + 0x40) = iVar6 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar8 + 0x38) + (longlong)iVar6 * 8) =
             local_38[0];
      }
      pFVar11 = pFVar11 + 0x590;
    }
  }
  return;
}

// operator()<TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_> @ 14da07d90

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()<TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [16];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoSkinnedMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoSkinnedMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar6 = FFastGeoElementType::IsA
                         (FFastGeoSkinnedMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar6)))) {
    pFVar9 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x590;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoSkinnedMeshComponent,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar9 == pFVar10) break;
      puVar3 = *(undefined8 **)this;
      if (pFVar9[0x3b0] == (FScriptContainerElement)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          pwVar8 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar8,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
        if ((((PRIVATE_GIsRunningCommandlet == false) ||
             (PRIVATE_GAllowCommandletRendering != false)) &&
            (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) && (bVar6 = IsComponentPSOPrecachingEnabled(), bVar6)) {
          LOCK();
          pFVar9[0x3b1] = (FScriptContainerElement)0x1;
          UNLOCK();
          LOCK();
          pFVar9[0x3b2] = (FScriptContainerElement)0x0;
          UNLOCK();
        }
      }
      pFVar4 = (ForAnyElementType *)*puVar3;
      local_38[0] = pFVar9;
      if (((pFVar4->Data <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar7 + 1;
      pFVar9 = pFVar9 + 0x590;
      *(FScriptContainerElement **)(pFVar4->Data + (longlong)iVar7 * 8) = local_38[0];
    }
  }
  return;
}

// operator()<TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>_> @ 14da07fc0

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()<TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCachedSystemScalabilityCVars *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoStaticMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar5 = FFastGeoElementType::IsA
                         (FFastGeoStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar5)))) {
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar11 + (longlong)iVar2 * 0x580;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoStaticMeshComponent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar11 == pFVar10) break;
      pcVar3 = *(char **)this;
      if (*pcVar3 != '\0') {
        (**(code **)(*(longlong *)pFVar11 + 0xb8))(pFVar11,*(undefined8 *)(pcVar3 + 8));
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar9 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar9,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)
            ) && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                  bHasNullRHIOnCommandline == false)) &&
          (FVar1 = pFVar11[0x178], pFVar7 = GetCachedScalabilityCVars(),
          (int)(uint)(byte)FVar1 <= pFVar7->DetailMode)) &&
         (((lVar8 = (**(code **)(*(longlong *)pFVar11 + 0xa0))(pFVar11),
           ((byte)pFVar11[0x160] & 1) != 0 && ((*(uint *)(lVar8 + 0x74) & 0x40000) == 0)) ||
          (((*(uint *)(lVar8 + 0x70) & 0x110000) != 0 || ((*(byte *)(lVar8 + 0x74) & 0x40) != 0)))))
         ) {
        lVar8 = *(longlong *)(pcVar3 + 0x10);
        local_38[0] = pFVar11;
        if (((*(FScriptContainerElement ***)(lVar8 + 0x38) <= local_38) &&
            (local_38 < *(FScriptContainerElement ***)(lVar8 + 0x38) + *(int *)(lVar8 + 0x44))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = *(int *)(lVar8 + 0x40);
        if (iVar6 == *(int *)(lVar8 + 0x44)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar8 + 0x38),(int *)(lVar8 + 0x44));
        }
        *(int *)(lVar8 + 0x40) = iVar6 + 1;
        *(FScriptContainerElement **)(*(longlong *)(lVar8 + 0x38) + (longlong)iVar6 * 8) =
             local_38[0];
      }
      pFVar11 = pFVar11 + 0x580;
    }
  }
  return;
}

// operator()<TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>_> @ 14da08240

void __thiscall
`FFastGeoComponentCluster::
ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()<TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
          (void *this,TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res18 [16];
  FScriptContainerElement *local_38 [2];
  
  if ((FFastGeoStaticMeshComponent::Type.ID == FFastGeoPrimitiveComponent::Type.ID) ||
     ((FFastGeoStaticMeshComponent::Type.ParentType != (FFastGeoElementType *)0x0 &&
      (bVar6 = FFastGeoElementType::IsA
                         (FFastGeoStaticMeshComponent::Type.ParentType,
                          &FFastGeoPrimitiveComponent::Type), bVar6)))) {
    pFVar9 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x580;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FFastGeoStaticMeshComponent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar9 == pFVar10) break;
      puVar3 = *(undefined8 **)this;
      if (pFVar9[0x3b0] == (FScriptContainerElement)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          pwVar8 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar8,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
        if ((((PRIVATE_GIsRunningCommandlet == false) ||
             (PRIVATE_GAllowCommandletRendering != false)) &&
            (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) && (bVar6 = IsComponentPSOPrecachingEnabled(), bVar6)) {
          LOCK();
          pFVar9[0x3b1] = (FScriptContainerElement)0x1;
          UNLOCK();
          LOCK();
          pFVar9[0x3b2] = (FScriptContainerElement)0x0;
          UNLOCK();
        }
      }
      pFVar4 = (ForAnyElementType *)*puVar3;
      local_38[0] = pFVar9;
      if (((pFVar4->Data <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar7 + 1;
      pFVar9 = pFVar9 + 0x580;
      *(FScriptContainerElement **)(pFVar4->Data + (longlong)iVar7 * 8) = local_38[0];
    }
  }
  return;
}

// FFastGeoComponentCluster @ 14da18390

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFastGeoComponentCluster * __thiscall
FFastGeoComponentCluster::FFastGeoComponentCluster
          (FFastGeoComponentCluster *this,FFastGeoComponentCluster *param_1)

{
  int *piVar1;
  TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FFastGeoStaticMeshComponent *pFVar8;
  FFastGeoInstancedStaticMeshComponent *pFVar9;
  FFastGeoSkinnedMeshComponent *pFVar10;
  FFastGeoInstancedSkinnedMeshComponent *pFVar11;
  FFastGeoProceduralISMComponent *pFVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar13 = param_1->_padding_;
  lVar14 = param_1->_padding_;
  this->_padding_ = (longlong)&___7FFastGeoComponentCluster__6B_;
  pTVar2 = &this->StaticMeshComponents;
  this->_padding_ = lVar13;
  this->_padding_ = lVar14;
  piVar1 = &(this->StaticMeshComponents).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshComponents).ArrayNum = 0;
  pTVar3 = &this->InstancedStaticMeshComponents;
  *piVar1 = 0;
  pTVar4 = &this->SkinnedMeshComponents;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar5 = &this->InstancedSkinnedMeshComponents;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar6 = &this->ProceduralISMComponents;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->InstancedStaticMeshComponents).ArrayNum = 0;
  (this->InstancedStaticMeshComponents).ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SkinnedMeshComponents).ArrayNum = 0;
  (this->SkinnedMeshComponents).ArrayMax = 0;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InstancedSkinnedMeshComponents).ArrayNum = 0;
  (this->InstancedSkinnedMeshComponents).ArrayMax = 0;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ProceduralISMComponents).ArrayNum = 0;
  (this->ProceduralISMComponents).ArrayMax = 0;
  this->ComponentClusterIndex = param_1->ComponentClusterIndex;
  this->Owner = param_1->Owner;
  ::FString::operator=(&this->Name,&param_1->Name);
  if (pTVar2 != &param_1->StaticMeshComponents) {
    DestructItems<FFastGeoStaticMeshComponent,int>
              ((FFastGeoStaticMeshComponent *)(pTVar2->AllocatorInstance).Data,
               (this->StaticMeshComponents).ArrayNum);
    pFVar8 = (FFastGeoStaticMeshComponent *)(param_1->StaticMeshComponents).AllocatorInstance.Data;
    iVar7 = (param_1->StaticMeshComponents).ArrayNum;
    (this->StaticMeshComponents).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x580,0x10,iVar7,*piVar1,&pTVar2->AllocatorInstance,iVar7,
                 &(this->StaticMeshComponents).ArrayMax);
      ConstructItems<FFastGeoStaticMeshComponent,FFastGeoStaticMeshComponent,int>
                ((pTVar2->AllocatorInstance).Data,pFVar8,iVar7);
    }
  }
  if (pTVar3 != &param_1->InstancedStaticMeshComponents) {
    DestructItems<FFastGeoInstancedStaticMeshComponent,int>
              ((FFastGeoInstancedStaticMeshComponent *)(pTVar3->AllocatorInstance).Data,
               (this->InstancedStaticMeshComponents).ArrayNum);
    iVar7 = (param_1->InstancedStaticMeshComponents).ArrayNum;
    piVar1 = &(this->InstancedStaticMeshComponents).ArrayMax;
    pFVar9 = (FFastGeoInstancedStaticMeshComponent *)
             (param_1->InstancedStaticMeshComponents).AllocatorInstance.Data;
    (this->InstancedStaticMeshComponents).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x650,0x10,iVar7,*piVar1,&pTVar3->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FFastGeoInstancedStaticMeshComponent,FFastGeoInstancedStaticMeshComponent,int>
                ((pTVar3->AllocatorInstance).Data,pFVar9,iVar7);
    }
  }
  if (pTVar4 != &param_1->SkinnedMeshComponents) {
    DestructItems<FFastGeoSkinnedMeshComponent,int>
              ((FFastGeoSkinnedMeshComponent *)(pTVar4->AllocatorInstance).Data,
               (this->SkinnedMeshComponents).ArrayNum);
    iVar7 = (param_1->SkinnedMeshComponents).ArrayNum;
    piVar1 = &(this->SkinnedMeshComponents).ArrayMax;
    pFVar10 = (FFastGeoSkinnedMeshComponent *)
              (param_1->SkinnedMeshComponents).AllocatorInstance.Data;
    (this->SkinnedMeshComponents).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x590,0x10,iVar7,*piVar1,&pTVar4->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FFastGeoSkinnedMeshComponent,FFastGeoSkinnedMeshComponent,int>
                ((pTVar4->AllocatorInstance).Data,pFVar10,iVar7);
    }
  }
  if (pTVar5 != &param_1->InstancedSkinnedMeshComponents) {
    DestructItems<FFastGeoInstancedSkinnedMeshComponent,int>
              ((FFastGeoInstancedSkinnedMeshComponent *)(pTVar5->AllocatorInstance).Data,
               (this->InstancedSkinnedMeshComponents).ArrayNum);
    iVar7 = (param_1->InstancedSkinnedMeshComponents).ArrayNum;
    piVar1 = &(this->InstancedSkinnedMeshComponents).ArrayMax;
    pFVar11 = (FFastGeoInstancedSkinnedMeshComponent *)
              (param_1->InstancedSkinnedMeshComponents).AllocatorInstance.Data;
    (this->InstancedSkinnedMeshComponents).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x5f0,0x10,iVar7,*piVar1,&pTVar5->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FFastGeoInstancedSkinnedMeshComponent,FFastGeoInstancedSkinnedMeshComponent,int>
                ((pTVar5->AllocatorInstance).Data,pFVar11,iVar7);
    }
  }
  if (pTVar6 != &param_1->ProceduralISMComponents) {
    DestructItems<FFastGeoProceduralISMComponent,int>
              ((FFastGeoProceduralISMComponent *)(pTVar6->AllocatorInstance).Data,
               (this->ProceduralISMComponents).ArrayNum);
    iVar7 = (param_1->ProceduralISMComponents).ArrayNum;
    piVar1 = &(this->ProceduralISMComponents).ArrayMax;
    pFVar12 = (FFastGeoProceduralISMComponent *)
              (param_1->ProceduralISMComponents).AllocatorInstance.Data;
    (this->ProceduralISMComponents).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x5f0,0x10,iVar7,*piVar1,&pTVar6->AllocatorInstance,iVar7,piVar1);
      ConstructItems<FFastGeoProceduralISMComponent,FFastGeoProceduralISMComponent,int>
                ((pTVar6->AllocatorInstance).Data,pFVar12,iVar7);
    }
  }
  return this;
}

// FFastGeoComponentCluster @ 14da18650

FFastGeoComponentCluster * __thiscall
FFastGeoComponentCluster::FFastGeoComponentCluster
          (FFastGeoComponentCluster *this,UFastGeoContainer *param_1,FName param_2,
          FFastGeoElementType *param_3)

{
  longlong lVar1;
  FFastGeoElementType *pFVar2;
  FName local_res18 [2];
  
  lVar1 = *(longlong *)param_3;
  pFVar2 = param_3->ParentType;
  this->Owner = param_1;
  this->_padding_ = (longlong)&___7FFastGeoComponentCluster__6B_;
  this->_padding_ = lVar1;
  this->_padding_ = (longlong)pFVar2;
  local_res18[0] = param_2;
  ::FName::ToString(local_res18,&this->Name);
  this->ComponentClusterIndex = -1;
  (this->StaticMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshComponents).ArrayNum = 0;
  (this->StaticMeshComponents).ArrayMax = 0;
  (this->InstancedStaticMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedStaticMeshComponents).ArrayNum = 0;
  (this->InstancedStaticMeshComponents).ArrayMax = 0;
  (this->SkinnedMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinnedMeshComponents).ArrayNum = 0;
  (this->SkinnedMeshComponents).ArrayMax = 0;
  (this->InstancedSkinnedMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedSkinnedMeshComponents).ArrayNum = 0;
  (this->InstancedSkinnedMeshComponents).ArrayMax = 0;
  (this->ProceduralISMComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProceduralISMComponents).ArrayNum = 0;
  (this->ProceduralISMComponents).ArrayMax = 0;
  return this;
}

// ~FFastGeoComponentCluster @ 14da1b380

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FFastGeoComponentCluster::~FFastGeoComponentCluster(FFastGeoComponentCluster *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FFastGeoComponentCluster__6B_;
  DestructItems<FFastGeoProceduralISMComponent,int>
            ((FFastGeoProceduralISMComponent *)
             (this->ProceduralISMComponents).AllocatorInstance.Data,
             (this->ProceduralISMComponents).ArrayNum);
  pFVar1 = (this->ProceduralISMComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFastGeoInstancedSkinnedMeshComponent,int>
            ((FFastGeoInstancedSkinnedMeshComponent *)
             (this->InstancedSkinnedMeshComponents).AllocatorInstance.Data,
             (this->InstancedSkinnedMeshComponents).ArrayNum);
  pFVar1 = (this->InstancedSkinnedMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFastGeoSkinnedMeshComponent,int>
            ((FFastGeoSkinnedMeshComponent *)(this->SkinnedMeshComponents).AllocatorInstance.Data,
             (this->SkinnedMeshComponents).ArrayNum);
  pFVar1 = (this->SkinnedMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFastGeoInstancedStaticMeshComponent,int>
            ((FFastGeoInstancedStaticMeshComponent *)
             (this->InstancedStaticMeshComponents).AllocatorInstance.Data,
             (this->InstancedStaticMeshComponents).ArrayNum);
  pFVar1 = (this->InstancedStaticMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFastGeoStaticMeshComponent,int>
            ((FFastGeoStaticMeshComponent *)(this->StaticMeshComponents).AllocatorInstance.Data,
             (this->StaticMeshComponents).ArrayNum);
  pFVar1 = (this->StaticMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IFastGeoElement__6B_;
  return;
}

// operator() @ 14da1dca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FFastGeoComponentCluster::UpdateVisibility'::__l2::<lambda_1>::operator()
          (void *this,FFastGeoPrimitiveComponent *param_1)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FFastGeoPrimitiveComponent *pFVar7;
  char cVar8;
  ForAnyElementType *pFVar9;
  FFastGeoPrimitiveComponent *local_18;
  FFastGeoPrimitiveComponent *local_10;
  
  SRWLock = (param_1->Lock).Ptr;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  lVar6 = (**(code **)(param_1->_padding_ + 0xa0))(param_1);
  if ((*(uint *)(lVar6 + 0x74) & 0x800) == 0) {
LAB_14da1dcfa:
    cVar8 = '\0';
  }
  else {
    lVar6 = (**(code **)(param_1->_padding_ + 0xa0))(param_1);
    if ((*(uint *)(lVar6 + 0x74) & 0x40000) != 0) goto LAB_14da1dcfa;
    cVar8 = '\x01';
  }
  FFastGeoPrimitiveComponent::UpdateVisibility(param_1);
  lVar6 = (**(code **)(param_1->_padding_ + 0xa0))(param_1);
  if ((*(uint *)(lVar6 + 0x74) & 0x800) != 0) {
    lVar6 = (**(code **)(param_1->_padding_ + 0xa0))(param_1);
    if ((*(uint *)(lVar6 + 0x74) & 0x40000) == 0) {
      cVar3 = '\x01';
      goto LAB_14da1dd35;
    }
  }
  cVar3 = '\0';
LAB_14da1dd35:
  if ((cVar3 != cVar8) && ((param_1->PrimitiveSceneData).SceneProxy != (FPrimitiveSceneProxy *)0x0))
  {
    if (cVar3 == '\0') {
      pFVar9 = *(ForAnyElementType **)((longlong)this + 8);
      local_10 = param_1;
      if ((pFVar9->Data <= (FScriptContainerElement *)&local_10) &&
         ((FScriptContainerElement *)&local_10 <
          pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) {
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
      iVar5 = *(int *)&pFVar9[1].Data;
      piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar9,piVar1);
      }
      *(int *)&pFVar9[1].Data = iVar5 + 1;
      pFVar7 = local_10;
    }
    else {
      pFVar9 = *(ForAnyElementType **)this;
      local_18 = param_1;
      if ((pFVar9->Data <= (FScriptContainerElement *)&local_18) &&
         ((FScriptContainerElement *)&local_18 <
          pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) {
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
      iVar5 = *(int *)&pFVar9[1].Data;
      piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar9,piVar1);
      }
      *(int *)&pFVar9[1].Data = iVar5 + 1;
      pFVar7 = local_18;
    }
    *(FFastGeoPrimitiveComponent **)(pFVar9->Data + (longlong)iVar5 * 8) = pFVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00014da1deb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// operator() @ 14da1e020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  undefined4 uVar3;
  code *pcVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  UFastGeoContainer *this_00;
  FFastGeoComponentCluster *pFVar9;
  FTaskBase *this_01;
  FTask *pFVar10;
  undefined8 uVar11;
  bool bVar12;
  void **local_res18 [2];
  void *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId170,
               "FFastGeoComponentCluster::UpdateVisibility_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponentCluster.cpp"
               ,0xaa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId170);
  }
  this_00 = (UFastGeoContainer *)FWeakObjectPtr::Get(this);
  if ((this_00 != (UFastGeoContainer *)0x0) &&
     (pFVar9 = UFastGeoContainer::GetComponentCluster
                         (this_00,*(uint *)((longlong)this + 8),*(int *)((longlong)this + 0xc)),
     pFVar9 != (FFastGeoComponentCluster *)0x0)) {
    local_res18[0] = &local_78;
    uVar11 = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    ``FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>::operator()'::__l2::
    <lambda_1>::operator()
              (local_res18,
               (TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)
               ((longlong)this + 0x18),true);
    ``FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>::operator()'::__l2::
    <lambda_1>::operator()
              (local_res18,
               (TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)
               ((longlong)this + 0x28),false);
    pvVar5 = local_78;
    iVar6 = (int)local_70;
    if ((int)local_70 != 0) {
      uVar7 = local_70._4_4_;
      local_68 = *(longlong *)this;
      lStack_60 = *(longlong *)((longlong)this + 8);
      uVar3 = *(undefined4 *)((longlong)this + 0x10);
      local_78 = (void *)0x0;
      local_70 = 0;
      this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (this_01 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
        if (pvVar5 != (void *)0x0) {
          FMemory::Free(pvVar5);
        }
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_01,2,true);
        this_01->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<``FFastGeoComponentCluster::UpdateVisibility_Internal'::`5'::<lambda_1>::operator()'::`8'::<lambda_2>,void,void>
              ::_vftable_;
        if (((*(ulonglong *)&(this_01->LowLevelTask).field_0x38 & 0x20) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsCompleted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                               ,0x1dd,L"State: %d"), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)&(this_01->LowLevelTask).field_0x28 + 0x18))
                  (&(this_01->LowLevelTask).field_0x28,&this_01->LowLevelTask);
        *(FTaskBase **)&this_01->LowLevelTask = this_01;
        *(undefined ***)&(this_01->LowLevelTask).field_0x28 =
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(FTaskBase **)&(this_01->LowLevelTask).field_0x8 = this_01;
        pFVar10 = LowLevelTasks::FTask::GetActiveTask();
        if (pFVar10 != (FTask *)0x0) {
          uVar11 = *(undefined8 *)&pFVar10->field_0x30;
        }
        *(undefined8 *)&(this_01->LowLevelTask).field_0x30 = uVar11;
        *(undefined8 *)&(this_01->LowLevelTask).field_0x38 = 0xc8000054b1584c00;
        this_01->ExtendedPriority = GameThreadNormalPri;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&this_01->_padding_);
        *(undefined4 *)&this_01[1]._padding_ = uVar3;
        this_01[1]._padding_ = local_68;
        this_01[1]._padding_ = lStack_60;
        this_01[1]._padding_ = (longlong)pvVar5;
        *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = uVar7;
        *(int *)&this_01[1]._padding_ = iVar6;
        this_01->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<``FFastGeoComponentCluster::UpdateVisibility_Internal'::`5'::<lambda_1>::operator()'::`8'::<lambda_2>_>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
        LOCK();
        paVar1 = &this_01->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_01->_padding_)(this_01,1);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddComponent @ 14da1f9f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoComponent * __thiscall
FFastGeoComponentCluster::AddComponent(FFastGeoComponentCluster *this,FFastGeoElementType *param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FFastGeoInstancedStaticMeshComponent *this_00;
  FFastGeoComponent *pFVar8;
  FFastGeoElementType local_58;
  FFastGeoElementType local_48;
  FFastGeoElementType local_38;
  FFastGeoElementType local_28;
  FFastGeoElementType local_18;
  
  uVar3 = param_1->ID;
  if (uVar3 == FFastGeoInstancedStaticMeshComponent::Type.ID) {
    iVar4 = (this->InstancedStaticMeshComponents).ArrayNum;
    piVar1 = &(this->InstancedStaticMeshComponents).ArrayMax;
    iVar7 = iVar4;
    if (iVar4 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x650,0x10,&(this->InstancedStaticMeshComponents).AllocatorInstance,piVar1)
      ;
      (this->InstancedStaticMeshComponents).ArrayNum = iVar7;
    }
    (this->InstancedStaticMeshComponents).ArrayNum = iVar7 + 1;
    local_58._4_4_ = FFastGeoInstancedStaticMeshComponent::Type._4_4_;
    local_58.ParentType = FFastGeoInstancedStaticMeshComponent::Type.ParentType;
    local_58.ID = FFastGeoInstancedStaticMeshComponent::Type.ID;
    this_00 = FFastGeoInstancedStaticMeshComponent::FFastGeoInstancedStaticMeshComponent
                        ((FFastGeoInstancedStaticMeshComponent *)
                         ((this->InstancedStaticMeshComponents).AllocatorInstance.Data +
                         (longlong)iVar7 * 0x650),iVar4,&local_58);
  }
  else if (uVar3 == FFastGeoStaticMeshComponent::Type.ID) {
    iVar4 = (this->StaticMeshComponents).ArrayNum;
    piVar1 = &(this->StaticMeshComponents).ArrayMax;
    iVar7 = iVar4;
    if (iVar4 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x580,0x10,&(this->StaticMeshComponents).AllocatorInstance,piVar1);
      (this->StaticMeshComponents).ArrayNum = iVar7;
    }
    (this->StaticMeshComponents).ArrayNum = iVar7 + 1;
    local_48._4_4_ = FFastGeoStaticMeshComponent::Type._4_4_;
    local_48.ParentType = FFastGeoStaticMeshComponent::Type.ParentType;
    local_48.ID = FFastGeoStaticMeshComponent::Type.ID;
    this_00 = (FFastGeoInstancedStaticMeshComponent *)
              ((this->StaticMeshComponents).AllocatorInstance.Data + (longlong)iVar7 * 0x580);
    FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
              ((FFastGeoPrimitiveComponent *)this_00,iVar4,&local_48);
    this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7FFastGeoStaticMeshComponent__6B_;
    this_00->_padding_ = 0;
    *(undefined1 *)&this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
              ((FStaticMeshSceneProxyDesc *)&this_00->PerInstanceSMData);
  }
  else if (uVar3 == FFastGeoSkinnedMeshComponent::Type.ID) {
    iVar4 = (this->SkinnedMeshComponents).ArrayNum;
    piVar1 = &(this->SkinnedMeshComponents).ArrayMax;
    iVar7 = iVar4;
    if (iVar4 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x590,0x10,&(this->SkinnedMeshComponents).AllocatorInstance,piVar1);
      (this->SkinnedMeshComponents).ArrayNum = iVar7;
    }
    (this->SkinnedMeshComponents).ArrayNum = iVar7 + 1;
    local_38._4_4_ = FFastGeoSkinnedMeshComponent::Type._4_4_;
    local_38.ParentType = FFastGeoSkinnedMeshComponent::Type.ParentType;
    local_38.ID = FFastGeoSkinnedMeshComponent::Type.ID;
    this_00 = (FFastGeoInstancedStaticMeshComponent *)
              ((this->SkinnedMeshComponents).AllocatorInstance.Data + (longlong)iVar7 * 0x590);
    FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
              ((FFastGeoPrimitiveComponent *)this_00,iVar4,&local_38);
    *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xfe;
    pbVar2 = (byte *)((longlong)&this_00->_padding_ + 2);
    *pbVar2 = *pbVar2 & 0xfe;
    this_00->_padding_ = (longlong)&___7FFastGeoSkinnedMeshComponent__6B_;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    *(undefined1 *)((longlong)&this_00->_padding_ + 1) = 0;
    *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0;
    (this_00->PerInstanceSMData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->PerInstanceSMData).ArrayNum = 0;
    (this_00->PerInstanceSMData).ArrayMax = 0;
    *(undefined8 *)&this_00->InstancingRandomSeed = 0;
    memset(&this_00->PerInstanceSMCustomData,0,400);
    FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc
              ((FSkinnedMeshSceneProxyDesc *)&this_00->PerInstanceSMCustomData);
  }
  else if (uVar3 == FFastGeoInstancedSkinnedMeshComponent::Type.ID) {
    iVar4 = (this->InstancedSkinnedMeshComponents).ArrayNum;
    piVar1 = &(this->InstancedSkinnedMeshComponents).ArrayMax;
    iVar7 = iVar4;
    if (iVar4 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x5f0,0x10,&(this->InstancedSkinnedMeshComponents).AllocatorInstance,piVar1
                        );
      (this->InstancedSkinnedMeshComponents).ArrayNum = iVar7;
    }
    (this->InstancedSkinnedMeshComponents).ArrayNum = iVar7 + 1;
    local_28._4_4_ = FFastGeoInstancedSkinnedMeshComponent::Type._4_4_;
    local_28.ParentType = FFastGeoInstancedSkinnedMeshComponent::Type.ParentType;
    local_28.ID = FFastGeoInstancedSkinnedMeshComponent::Type.ID;
    this_00 = (FFastGeoInstancedStaticMeshComponent *)
              FFastGeoInstancedSkinnedMeshComponent::FFastGeoInstancedSkinnedMeshComponent
                        ((FFastGeoInstancedSkinnedMeshComponent *)
                         ((this->InstancedSkinnedMeshComponents).AllocatorInstance.Data +
                         (longlong)iVar7 * 0x5f0),iVar4,&local_28);
  }
  else if (uVar3 == FFastGeoProceduralISMComponent::Type.ID) {
    iVar4 = (this->ProceduralISMComponents).ArrayNum;
    piVar1 = &(this->ProceduralISMComponents).ArrayMax;
    iVar7 = iVar4;
    if (iVar4 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x5f0,0x10,&(this->ProceduralISMComponents).AllocatorInstance,piVar1);
      (this->ProceduralISMComponents).ArrayNum = iVar7;
    }
    (this->ProceduralISMComponents).ArrayNum = iVar7 + 1;
    local_18._4_4_ = FFastGeoProceduralISMComponent::Type._4_4_;
    local_18.ParentType = FFastGeoProceduralISMComponent::Type.ParentType;
    local_18.ID = FFastGeoProceduralISMComponent::Type.ID;
    this_00 = (FFastGeoInstancedStaticMeshComponent *)
              FFastGeoProceduralISMComponent::FFastGeoProceduralISMComponent
                        ((FFastGeoProceduralISMComponent *)
                         ((this->ProceduralISMComponents).AllocatorInstance.Data +
                         (longlong)iVar7 * 0x5f0),iVar4,&local_18);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponentCluster.cpp"
                       ,0xf2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FFastGeoComponent *)(*pcVar5)();
      return pFVar8;
    }
    this_00 = (FFastGeoInstancedStaticMeshComponent *)0x0;
  }
  return (FFastGeoComponent *)this_00;
}

// ForceUpdateVisibility @ 14da29050

void __thiscall
FFastGeoComponentCluster::ForceUpdateVisibility
          (FFastGeoComponentCluster *this,
          TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  PSRWLOCK SRWLock;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 local_res20 [8];
  longlong *local_78;
  TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_70;
  TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId138,"FFastGeoComponentCluster::ForceUpdateVisibility",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponentCluster.cpp"
               ,0x8a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId138);
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  do {
    if (param_1->ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FFastGeoPrimitiveComponent_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar12 == pFVar1) {
      UpdateVisibility_Internal(this,local_60,&local_70,param_2 + 1);
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].AllocatorInstance.Data);
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_78 = *(longlong **)pFVar12;
    SRWLock = (PSRWLOCK)local_78[0x77];
    AcquireSRWLockExclusive(SRWLock);
    plVar4 = local_78;
    lVar8 = (**(code **)(*local_78 + 0xa8))(local_78);
    if (((*(byte *)(plVar4 + 0x2c) & 1) == 0) ||
       (cVar5 = (**(code **)(*(longlong *)plVar4[4] + 0x20))(), cVar5 == '\0')) {
      *(uint *)(lVar8 + 0x74) = *(uint *)(lVar8 + 0x74) & 0xfffff7ff;
      uVar9 = *(uint *)(lVar8 + 0x74);
LAB_14da2918a:
      uVar10 = 0;
    }
    else {
      *(uint *)(lVar8 + 0x74) = *(uint *)(lVar8 + 0x74) | 0x800;
      uVar9 = *(uint *)(lVar8 + 0x74);
      if (FastGeo::GShowFastGeo == 0) goto LAB_14da2918a;
      uVar10 = 0x800;
    }
    plVar4 = local_78;
    *(uint *)(lVar8 + 0x74) = uVar9 & 0xfffff7ff | uVar10;
    lVar8 = (**(code **)(*local_78 + 0xa0))();
    if (((*(uint *)(lVar8 + 0x74) & 0x800) == 0) ||
       (lVar8 = (**(code **)(*plVar4 + 0xa0))(), (*(uint *)(lVar8 + 0x74) & 0x40000) != 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (local_78[0x69] != 0) {
      if (bVar6) {
        if (((local_60[0].AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_60[0].ArrayNum;
        if (local_60[0].ArrayNum == local_60[0].ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_60[0].AllocatorInstance,&local_60[0].ArrayMax);
        }
        local_60[0].ArrayNum = iVar7 + 1;
        FVar11.Data = local_60[0].AllocatorInstance.Data;
      }
      else {
        if (((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_70.ArrayNum;
        if (local_70.ArrayNum == local_70.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_70.AllocatorInstance,&local_70.ArrayMax);
        }
        local_70.ArrayNum = iVar7 + 1;
        FVar11.Data = local_70.AllocatorInstance.Data;
      }
      *(longlong **)(FVar11.Data + (longlong)iVar7 * 8) = local_78;
    }
    ReleaseSRWLockExclusive(SRWLock);
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// GetComponent @ 14da29f70

FFastGeoComponent * __thiscall
FFastGeoComponentCluster::GetComponent(FFastGeoComponentCluster *this,uint param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FFastGeoComponent *pFVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2;
  if (FFastGeoInstancedStaticMeshComponent::Type.ID == param_1) {
    if ((-1 < param_2) && (param_2 < (this->InstancedStaticMeshComponents).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->InstancedStaticMeshComponents).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FFastGeoComponent *)(*pcVar1)();
          return pFVar3;
        }
      }
      return (FFastGeoComponent *)
             ((this->InstancedStaticMeshComponents).AllocatorInstance.Data + lVar5 * 0x650);
    }
  }
  else if (FFastGeoStaticMeshComponent::Type.ID == param_1) {
    if ((-1 < param_2) && (param_2 < (this->StaticMeshComponents).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->StaticMeshComponents).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FFastGeoComponent *)(*pcVar1)();
          return pFVar3;
        }
      }
      return (FFastGeoComponent *)
             ((this->StaticMeshComponents).AllocatorInstance.Data + lVar5 * 0x580);
    }
  }
  else if (FFastGeoInstancedSkinnedMeshComponent::Type.ID == param_1) {
    if ((-1 < param_2) && (param_2 < (this->InstancedSkinnedMeshComponents).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->InstancedSkinnedMeshComponents).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FFastGeoComponent *)(*pcVar1)();
          return pFVar3;
        }
      }
      return (FFastGeoComponent *)
             ((this->InstancedSkinnedMeshComponents).AllocatorInstance.Data + lVar5 * 0x5f0);
    }
  }
  else if (FFastGeoSkinnedMeshComponent::Type.ID == param_1) {
    if ((-1 < param_2) && (param_2 < (this->SkinnedMeshComponents).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->SkinnedMeshComponents).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FFastGeoComponent *)(*pcVar1)();
          return pFVar3;
        }
      }
      return (FFastGeoComponent *)
             ((this->SkinnedMeshComponents).AllocatorInstance.Data + lVar5 * 0x590);
    }
  }
  else {
    if (FFastGeoProceduralISMComponent::Type.ID != param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponentCluster.cpp"
                         ,0x60,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FFastGeoComponent *)(*pcVar1)();
        return pFVar3;
      }
      return (FFastGeoComponent *)0x0;
    }
    if ((-1 < param_2) && (param_2 < (this->ProceduralISMComponents).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->ProceduralISMComponents).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FFastGeoComponent *)(*pcVar1)();
          return pFVar3;
        }
      }
      return (FFastGeoComponent *)
             ((this->ProceduralISMComponents).AllocatorInstance.Data + lVar5 * 0x5f0);
    }
  }
  return (FFastGeoComponent *)0x0;
}

// GetLevel @ 14da2a6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall FFastGeoComponentCluster::GetLevel(FFastGeoComponentCluster *this)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  
  if ((this->Owner->_padding_ & 0x10) == 0) {
    return (ULevel *)this->Owner->_padding_;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_634665728192020378>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                     ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (ULevel *)(*pcVar1)();
    return pUVar3;
  }
  return (ULevel *)0x0;
}

// GetOwnerContainer @ 14da2b050

UFastGeoContainer * __thiscall
FFastGeoComponentCluster::GetOwnerContainer(FFastGeoComponentCluster *this)

{
  return this->Owner;
}

// HasComponents @ 14da2c0e0

bool __thiscall FFastGeoComponentCluster::HasComponents(FFastGeoComponentCluster *this)

{
  if (((((this->InstancedStaticMeshComponents).ArrayNum < 1) &&
       ((this->StaticMeshComponents).ArrayNum < 1)) &&
      ((this->InstancedSkinnedMeshComponents).ArrayNum < 1)) &&
     (((this->SkinnedMeshComponents).ArrayNum < 1 && ((this->ProceduralISMComponents).ArrayNum < 1))
     )) {
    return false;
  }
  return true;
}

// InitializeDynamicProperties @ 14da2c4b0

void __thiscall
FFastGeoComponentCluster::InitializeDynamicProperties(FFastGeoComponentCluster *this)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].__this = this;
  ForEachComponent<FFastGeoComponentCluster,FFastGeoComponent,_FFastGeoComponentCluster::InitializeDynamicProperties_::__l2::<lambda_1>_>
            (this,local_res8);
  return;
}

// IsVisible @ 14da2e190

bool __thiscall FFastGeoComponentCluster::IsVisible(FFastGeoComponentCluster *this)

{
  return true;
}

// OnRegister @ 14da31930

void __thiscall FFastGeoComponentCluster::OnRegister(FFastGeoComponentCluster *this)

{
  return;
}

// OnUnregister @ 14da31b00

void __thiscall FFastGeoComponentCluster::OnUnregister(FFastGeoComponentCluster *this)

{
  return;
}

// Serialize @ 14da33ca0

void __thiscall
FFastGeoComponentCluster::Serialize(FFastGeoComponentCluster *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  ::operator<<(param_1,&this->Name);
  piVar1 = &this->ComponentClusterIndex;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>
            (param_1,&this->StaticMeshComponents);
  TArrayPrivateFriend::Serialize<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>
            (param_1,&this->InstancedStaticMeshComponents);
  TArrayPrivateFriend::Serialize<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>
            (param_1,&this->SkinnedMeshComponents);
  TArrayPrivateFriend::Serialize<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>
            (param_1,&this->InstancedSkinnedMeshComponents);
  TArrayPrivateFriend::Serialize<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>
            (param_1,&this->ProceduralISMComponents);
  return;
}

// SetComponentClusterIndex @ 14da37dd0

void __thiscall
FFastGeoComponentCluster::SetComponentClusterIndex(FFastGeoComponentCluster *this,int param_1)

{
  this->ComponentClusterIndex = param_1;
  return;
}

// SetOwnerContainer @ 14da37e40

void __thiscall
FFastGeoComponentCluster::SetOwnerContainer
          (FFastGeoComponentCluster *this,UFastGeoContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (UFastGeoContainer *)0x0) {
    this->Owner = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InOwner",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponentCluster.cpp"
                     ,0x3c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Owner = (UFastGeoContainer *)0x0;
  return;
}

// UpdateVisibility @ 14da394a0

void __thiscall FFastGeoComponentCluster::UpdateVisibility(FFastGeoComponentCluster *this)

{
  bool bVar1;
  TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_28;
  <lambda_1> local_18;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId107,"FFastGeoComponentCluster::UpdateVisibility",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponentCluster.cpp"
               ,0x6b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId107);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_18.ShowComponents = &local_28;
  local_18.HideComponents = &local_38;
  ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,_FFastGeoComponentCluster::UpdateVisibility_::__l2::<lambda_1>_>
            (this,&local_18);
  UpdateVisibility_Internal(this,&local_28,&local_38,0);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateVisibility_Internal @ 14da395f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FFastGeoComponentCluster::UpdateVisibility_Internal
          (FFastGeoComponentCluster *this,
          TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UFastGeoContainer *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FCommandList *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  FRenderCommandList *this_00;
  FRenderCommandTag *pFVar13;
  code **ppcVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  int local_128;
  FWeakObjectPtr local_120;
  undefined8 uStack_118;
  UFastGeoContainer *local_110;
  FWeakObjectPtr local_108;
  code *pcStack_100;
  FWeakObjectPtr local_f8;
  code *pcStack_f0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  piVar1 = &param_2->ArrayNum;
  if ((param_1->ArrayNum != 0) || (*piVar1 != 0)) {
    local_120.ObjectIndex = 0;
    local_120.ObjectSerialNumber = 0;
    uStack_118 = (code *)0xffffffffffffffff;
    local_128 = param_3;
    if ((this != (FFastGeoComponentCluster *)0x0) &&
       (pUVar6 = this->Owner, pUVar6 != (UFastGeoContainer *)0x0)) {
      local_110 = pUVar6;
      local_108 = (FWeakObjectPtr)param_2;
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_110);
      uStack_118 = (code *)CONCAT44(this->ComponentClusterIndex,(int)this->_padding_);
      param_2 = (TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)local_108;
    }
    pFVar7 = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = param_1->ArrayNum;
    iVar3 = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    pFVar8 = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar4 = *piVar1;
    iVar5 = param_2->ArrayMax;
    *piVar1 = 0;
    param_2->ArrayMax = 0;
    local_b8[0] = (code *)0x0;
    local_108 = local_120;
    pcStack_100 = uStack_118;
    local_f8 = local_120;
    pcStack_f0 = uStack_118;
    local_90 = FMemory::Malloc(0x40,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FFastGeoComponentCluster::UpdateVisibility_Internal'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    *(FWeakObjectPtr *)(local_90 + 1) = local_108;
    local_90[2] = pcStack_100;
    *(int *)(local_90 + 3) = local_128;
    local_90[4] = (code *)pFVar7;
    *(int *)(local_90 + 5) = iVar2;
    *(int *)((longlong)local_90 + 0x2c) = iVar3;
    local_90[6] = (code *)pFVar8;
    *(int *)(local_90 + 7) = iVar4;
    *(int *)((longlong)local_90 + 0x3c) = iVar5;
    if ((FWeakObjectPtr *)(local_90 + 1) != (FWeakObjectPtr *)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FFastGeoComponentCluster::UpdateVisibility_Internal_::__l5::TSTR_168>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      if (this_00->bInitialized == 0) {
        FRenderCommandList::Init(this_00);
      }
      iVar2 = (this_00->CommandLists).ArrayNum;
      uVar15 = iVar2 - 1;
      uVar12 = 0;
      if ((int)uVar15 < iVar2) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_138 = (longlong)(int)uVar15;
        local_130 = (longlong)iVar2;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar2 = (this_00->CommandLists).ArrayNum;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_58 = 2;
      pFVar9 = (this_00->CommandLists).AllocatorInstance.Data;
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_b8[0] = (code *)0x0;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::TSTR_168>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar9 + (iVar2 + -1),
                 (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_88,pFVar13);
      uVar16 = (ulonglong)local_58;
      if (2 < uVar16) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L"");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar16] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar14 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar14 = local_60;
          }
          (**(code **)(*ppcVar14 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar16])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar14 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar14 = local_90;
      }
      (**(code **)(*ppcVar14 + 0x10))();
    }
  }
  return;
}

