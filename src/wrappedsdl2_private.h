#if defined(GO) && defined(GOM) && defined(GO2) && defined(DATA)

// _fini
// _init
GO(SDL_abs, iFi)
GO(SDL_acos, dFd)
GO(SDL_acosf, fFf)
// SDL_AddEventWatch
// SDL_AddHintCallback
GOM(SDL_AddTimer, pFEupp)
// SDL_AllocFormat
GO(SDL_AllocPalette, pFi)
GO(SDL_AllocRW, pFv)    // no need to create a "my_" probably
GO(SDL_asin, dFd)
GO(SDL_asinf, fFf)
GO(SDL_atan, dFd)
GO(SDL_atan2, dFdd)
GO(SDL_atan2f, fFff)
GO(SDL_atanf, fFf)
GO(SDL_atof, dFp)
GO(SDL_atoi, iFp)
GO(SDL_AtomicAdd, iFpi)
// SDL_AtomicCAS
// SDL_AtomicCASPtr
GO(SDL_AtomicGet, iFp)
// SDL_AtomicGetPtr
// SDL_AtomicLock
GO(SDL_AtomicSet, iFpi)
// SDL_AtomicSetPtr
// SDL_AtomicTryLock
// SDL_AtomicUnlock
// SDL_AudioInit
// SDL_AudioQuit
// SDL_AudioStreamAvailable
// SDL_AudioStreamClear
// SDL_AudioStreamFlush
// SDL_AudioStreamGet
// SDL_AudioStreamPut
GO(SDL_BuildAudioCVT, iFpuuiuui)
// SDL_CalculateGammaRamp
GO(SDL_calloc, pFuu)
// SDL_CaptureMouse
GO(SDL_ceil, dFd)
GO(SDL_ceilf, fFf)
GO(SDL_ClearError, vFv)
// SDL_ClearHints
// SDL_ClearQueuedAudio
GO(SDL_CloseAudio, vFv)
GO(SDL_CloseAudioDevice, vFi)
// SDL_ComposeCustomBlendMode
GO(SDL_CondBroadcast, iFp)
GO(SDL_CondSignal, iFp)
GO(SDL_CondWait, iFpp)
GO(SDL_CondWaitTimeout, iFppu)
GO(SDL_ConvertAudio, iFp)
// SDL_ConvertPixels
GO(SDL_ConvertSurface, pFppu)
// SDL_ConvertSurfaceFormat
// SDL_copysign
// SDL_copysignf
// SDL_cos
// SDL_cosf
GO(SDL_CreateColorCursor, pFpii)
GO(SDL_CreateCond, pFv)
// SDL_CreateCursor
GO(SDL_CreateMutex, pFv)
GO(SDL_CreateRenderer, pFpiu)
GO(SDL_CreateRGBSurface, pFuiiiuuuu)
GO(SDL_CreateRGBSurfaceFrom, pFpiiiiuuuu)
// SDL_CreateRGBSurfaceWithFormat
// SDL_CreateRGBSurfaceWithFormatFrom
GO(SDL_CreateSemaphore, pFu)
// SDL_CreateShapedWindow
GO(SDL_CreateSoftwareRenderer, pFp)
GO(SDL_CreateSystemCursor, pFu)
GO(SDL_CreateTexture, pFpuiii)
GO(SDL_CreateTextureFromSurface, pFpp)
GOM(SDL_CreateThread, pFEppp)
// SDL_CreateThreadWithStackSize
GO(SDL_CreateWindow, pFpiiiiu)
// SDL_CreateWindowAndRenderer
// SDL_CreateWindowFrom
GO(SDL_Delay, vFu)
// SDL_DelEventWatch
// SDL_DelHintCallback
// SDL_DequeueAudio
GO(SDL_DestroyCond, vFp)
GO(SDL_DestroyMutex, vFp)
GO(SDL_DestroyRenderer, vFp)
GO(SDL_DestroySemaphore, vFp)
GO(SDL_DestroyTexture, vFp)
GO(SDL_DestroyWindow, vFp)
GO(SDL_DetachThread, vFp)
GO(SDL_DisableScreenSaver, vFv)
// SDL_DuplicateSurface
// SDL_DYNAPI_entry
GO(SDL_EnableScreenSaver, vFv)
// SDL_EnclosePoints
GO(SDL_Error, iFi)
GO(SDL_EventState, CFui)
// SDL_exp
// SDL_expf
GO(SDL_fabs, dFd)
GO(SDL_fabsf, fFf)
GO(SDL_FillRect, iFppu)
// SDL_FillRects
// SDL_FilterEvents
// SDL_floor
// SDL_floorf
// SDL_FlushEvent
GO(SDL_FlushEvents, vFuu)
// SDL_fmod
// SDL_fmodf
GO(SDL_free, vFp)
// SDL_FreeAudioStream
GO(SDL_FreeCursor, vFp)
// SDL_FreeFormat
GO(SDL_FreePalette, vFp)
GOM(SDL_FreeRW, vFEp)
GO(SDL_FreeSurface, vFp)
// SDL_FreeWAV
GO(SDL_GameControllerAddMapping, iFp)
GOM(SDL_GameControllerAddMappingsFromRW, iFEpi)
GO(SDL_GameControllerClose, vFp)
GO(SDL_GameControllerEventState, iFi)
// SDL_GameControllerFromInstanceID
GO(SDL_GameControllerGetAttached, iFp)
GO(SDL_GameControllerGetAxis, iFpi)
GO(SDL_GameControllerGetAxisFromString, uFp)
GOS(SDL_GameControllerGetBindForAxis, pFEppi)
// SDL_GameControllerGetBindForButton
GO(SDL_GameControllerGetButton, uFpi)
// SDL_GameControllerGetButtonFromString
GO(SDL_GameControllerGetJoystick, pFp)
// SDL_GameControllerGetPlayerIndex
// SDL_GameControllerGetProduct
// SDL_GameControllerGetProductVersion
// SDL_GameControllerGetStringForAxis
GO(SDL_GameControllerGetStringForButton, pFu)
// SDL_GameControllerGetVendor
GO(SDL_GameControllerMapping, pFp)
// SDL_GameControllerMappingForDeviceIndex
// SDL_GameControllerMappingForGUID
// SDL_GameControllerMappingForIndex
GO(SDL_GameControllerName, pFp)
// SDL_GameControllerNameForIndex
// SDL_GameControllerNumMappings
GO(SDL_GameControllerOpen, pFi)
// SDL_GameControllerRumble
GO(SDL_GameControllerUpdate, vFv)
// SDL_GetAssertionHandler
// SDL_GetAssertionReport
GO(SDL_GetAudioDeviceName, pFii)
// SDL_GetAudioDeviceStatus
// SDL_GetAudioDriver
// SDL_GetAudioStatus
GOM(SDL_GetBasePath, pFE)
GO(SDL_GetClipboardText, pFv)
// SDL_GetClipRect
// SDL_GetClosestDisplayMode
GO(SDL_GetColorKey, iFpp)
// SDL_GetCPUCacheLineSize
// SDL_GetCPUCount
// SDL_GetCurrentAudioDriver
GO(SDL_GetCurrentDisplayMode, iFip)
// SDL_GetCurrentVideoDriver
// SDL_GetCursor
// SDL_GetDefaultAssertionHandler
// SDL_GetDefaultCursor
GO(SDL_GetDesktopDisplayMode, iFip)
GO(SDL_GetDisplayBounds, iFip)
// SDL_GetDisplayDPI
GO(SDL_GetDisplayMode, iFiip)
// SDL_GetDisplayName
// SDL_GetDisplayOrientation
// SDL_GetDisplayUsableBounds
GO(SDL_getenv, pFp)
GO(SDL_GetError, pFv)
// SDL_GetEventFilter
// SDL_GetGlobalMouseState
// SDL_GetGrabbedWindow
// SDL_GetHint
// SDL_GetHintBoolean
GO(SDL_GetKeyboardFocus, pFv)
GO(SDL_GetKeyboardState, pFp)
GO(SDL_GetKeyFromName, pFp)
// SDL_GetKeyFromScancode
GO(SDL_GetKeyName, pFu)
// SDL_GetMemoryFunctions
GO(SDL_GetModState, pFv)
// SDL_GetMouseFocus
GO(SDL_GetMouseState, uFpp)
// SDL_GetNumAllocations
GO(SDL_GetNumAudioDevices, iFi)
// SDL_GetNumAudioDrivers
GO(SDL_GetNumDisplayModes, iFi)
// SDL_GetNumRenderDrivers
// SDL_GetNumTouchDevices
// SDL_GetNumTouchFingers
GO(SDL_GetNumVideoDisplays, iFv)
// SDL_GetNumVideoDrivers
GO(SDL_GetPerformanceCounter, UFv)
GO(SDL_GetPerformanceFrequency, UFv)
// SDL_GetPixelFormatName
GO(SDL_GetPlatform, pFv)
// SDL_GetPowerInfo
GO(SDL_GetPrefPath, pFpp)
// SDL_GetQueuedAudioSize
// SDL_GetRelativeMouseMode
// SDL_GetRelativeMouseState
GO(SDL_GetRenderDrawBlendMode, iFpp)
// SDL_GetRenderDrawColor
// SDL_GetRenderDriverInfo
// SDL_GetRenderer
GO(SDL_GetRendererInfo, iFpp)
// SDL_GetRendererOutputSize
// SDL_GetRenderTarget
// SDL_GetRevision
// SDL_GetRevisionNumber
GO(SDL_GetRGB, vFupppp)
GO(SDL_GetRGBA, vFuppppp)
GO(SDL_GetScancodeFromKey, uFu)
// SDL_GetScancodeFromName
// SDL_GetScancodeName
// SDL_GetShapedWindowMode
// SDL_GetSurfaceAlphaMod
// SDL_GetSurfaceBlendMode
// SDL_GetSurfaceColorMod
// SDL_GetSystemRAM
// SDL_GetTextureAlphaMod
GO(SDL_GetTextureBlendMode, iFpp)
// SDL_GetTextureColorMod
GO(SDL_GetThreadID, uFp)
// SDL_GetThreadName
GO(SDL_GetTicks, uFv)
// SDL_GetTouchDevice
// SDL_GetTouchDeviceType
GO(SDL_GetTouchFinger, pFui)
GO(SDL_GetVersion, vFp)
// SDL_GetVideoDriver
// SDL_GetWindowBordersSize
// SDL_GetWindowBrightness
// SDL_GetWindowData
GO(SDL_GetWindowDisplayIndex, iFp)
GO(SDL_GetWindowDisplayMode, iFpp)
GO(SDL_GetWindowFlags, uFp)
// SDL_GetWindowFromID
// SDL_GetWindowGammaRamp
GO(SDL_GetWindowGrab, iFp)
GO(SDL_GetWindowID, uFp)
// SDL_GetWindowMaximumSize
// SDL_GetWindowMinimumSize
// SDL_GetWindowOpacity
// SDL_GetWindowPixelFormat
GO(SDL_GetWindowPosition, vFppp)
GO(SDL_GetWindowSize, vFppp)
GO(SDL_GetWindowSurface, pFp)
GO(SDL_GetWindowTitl, pFp)
GO(SDL_GetWindowWMInfo, iFpp)
// SDL_GetYUVConversionMode
// SDL_GetYUVConversionModeForResolution
// SDL_GL_BindTexture
GO(SDL_GL_CreateContext, pFp)
GO(SDL_GL_DeleteContext, vFp)
GO(SDL_GL_ExtensionSupported, iFp)
GO(SDL_GL_GetAttribute, iFup)
GO(SDL_GL_GetCurrentContext, pFv)
GO(SDL_GL_GetCurrentWindow, pFv)
GO(SDL_GL_GetDrawableSize, vFppp)
GOM(SDL_GL_GetProcAddress, pFEp)
GO(SDL_GL_GetSwapInterval, iFv)
GO(SDL_GL_LoadLibrary, iFp)
GO(SDL_GL_MakeCurrent, iFpp)
// SDL_GL_ResetAttributes
GO(SDL_GL_SetAttribute, iFui)
GO(SDL_GL_SetSwapInterval, iFi)
GO(SDL_GL_SwapWindow, vFp)
// SDL_GL_UnbindTexture
// SDL_GL_UnloadLibrary
GO(SDL_HapticClose, vFp)
GO(SDL_HapticDestroyEffect, vFpi)
GO(SDL_HapticEffectSupported, iFpp)
// SDL_HapticGetEffectStatus
// SDL_HapticIndex
// SDL_HapticName
GO(SDL_HapticNewEffect, iFpp)
// SDL_HapticNumAxes
// SDL_HapticNumEffects
// SDL_HapticNumEffectsPlaying
// SDL_HapticOpen
// SDL_HapticOpened
GO(SDL_HapticOpenFromJoystick, pFp)
// SDL_HapticOpenFromMouse
// SDL_HapticPause
GO(SDL_HapticQuery, uFp)
GO(SDL_HapticRumbleInit, iFp)
GO(SDL_HapticRumblePlay, iFpfu)
GO(SDL_HapticRumbleStop, iFp)
GO(SDL_HapticRumbleSupported, iFp)
GO(SDL_HapticRunEffect, iFpiu)
// SDL_HapticSetAutocenter
// SDL_HapticSetGain
// SDL_HapticStopAll
GO(SDL_HapticStopEffect, iFpi)
// SDL_HapticUnpause
GO(SDL_HapticUpdateEffect, iFpip)
GOM(SDL_Has3DNow, iFv)
GOM(SDL_HasAltiVec, iFv)
GOM(SDL_HasAVX, iFv)
GOM(SDL_HasAVX2, iFv)
GOM(SDL_HasAVX512F, iFv)
GO(SDL_HasClipboardText, iFv)
GO(SDL_HasColorKey, iFv)
GO(SDL_HasEvent, iFv)
GO(SDL_HasEvents, iFv)
GO(SDL_HasIntersection, iFv)
GOM(SDL_HasMMX, iFv)
GOM(SDL_HasNEON, iFv)
GOM(SDL_HasRDTSC, iFv)
GO(SDL_HasScreenKeyboardSupport, iFv)
GOM(SDL_HasSSE, iFv)
GOM(SDL_HasSSE2, iFv)
GOM(SDL_HasSSE3, iFv)
GOM(SDL_HasSSE41, iFv)
GOM(SDL_HasSSE42, iFv)
GO(SDL_HideWindow, vFp)
// SDL_iconv
// SDL_iconv_close
// SDL_iconv_open
GO(SDL_iconv_string, pFpppu)
GO(SDL_Init, iFu)
GO(SDL_InitSubSystem, iFu)
// SDL_IntersectRect
// SDL_IntersectRectAndLine
// SDL_isdigit
GO(SDL_IsGameController, iFi)
GO(SDL_IsScreenKeyboardShown, iFp)
// SDL_IsScreenSaverEnabled
// SDL_IsShapedWindow
// SDL_isspace
// SDL_IsTablet
// SDL_IsTextInputActive
// SDL_itoa
GO(SDL_JoystickClose, vFp)
// SDL_JoystickCurrentPowerLevel
GO(SDL_JoystickEventState, iFi)
// SDL_JoystickFromInstanceID
// SDL_JoystickGetAttached
GO(SDL_JoystickGetAxis, iFpi)
// SDL_JoystickGetAxisInitialState
// SDL_JoystickGetBall
GO(SDL_JoystickGetButton, CFpi)
GOS(SDL_JoystickGetDeviceGUID, pFEpi)  // return a struct that is "uint8_t data[16]" => there is hidden 1st arg with address of return buffer, same for ARM
// SDL_JoystickGetDeviceInstanceID
// SDL_JoystickGetDevicePlayerIndex
// SDL_JoystickGetDeviceProduct
// SDL_JoystickGetDeviceProductVersion
// SDL_JoystickGetDeviceType
// SDL_JoystickGetDeviceVendor
GO(SDL_JoystickGetGUID, uFp)
// SDL_JoystickGetGUIDFromString
GO(SDL_JoystickGetGUIDString, vFupi)
GO(SDL_JoystickGetHat, CFpi)
// SDL_JoystickGetPlayerIndex
// SDL_JoystickGetProduct
// SDL_JoystickGetProductVersion
// SDL_JoystickGetType
// SDL_JoystickGetVendor
GO(SDL_JoystickInstanceID, iFp)
GO(SDL_JoystickIsHaptic, iFp)
GO(SDL_JoystickName, pFp)
GO(SDL_JoystickNameForIndex, pFi)
GO(SDL_JoystickNumAxes, iFp)
GO(SDL_JoystickNumBalls, iFp)
GO(SDL_JoystickNumButtons, iFp)
GO(SDL_JoystickNumHats, iFp)
GO(SDL_JoystickOpen, pFi)
// SDL_JoystickRumble
GO(SDL_JoystickUpdate, vFv)
// SDL_LinuxSetThreadPriority
// SDL_lltoa
GOM(SDL_LoadBMP_RW, pFEpi)
// SDL_LoadDollarTemplates
GOM(SDL_LoadFile_RW, pFEppi)
// SDL_LoadFunction
// SDL_LoadObject
GOM(SDL_LoadWAV_RW, pFEpippp)
GO(SDL_LockAudio, vFv)
GO(SDL_LockAudioDevice, vFi)
// SDL_LockJoysticks
GO(SDL_LockMutex, iFp)
GO(SDL_LockSurface, iFp)
// SDL_LockTexture
// SDL_log
GOM(SDL_Log, vFEpV)
// SDL_log10
// SDL_log10f
GOM(SDL_LogCritical, vFEipV)
GOM(SDL_LogDebug, vFEipV)
GOM(SDL_LogError, vFEipV)
// SDL_logf
// SDL_LogGetOutputFunction
// SDL_LogGetPriority
GOM(SDL_LogInfo, vFEipV)
GO2(SDL_LogMessage, vFiupV, SDL_LogMessageV)
GO(SDL_LogMessageV, vFiupV)
// SDL_LogResetPriorities
GO(SDL_LogSetAllPriority, vFu)
GOM(SDL_LogSetOutputFunction, vFEpp)
GO(SDL_LogSetPriority, vFiu)
GOM(SDL_LogVerbose, vFEipV)
GOM(SDL_LogWarn, vFEipV)
// SDL_LowerBlit
// SDL_LowerBlitScaled
// SDL_ltoa
GO(SDL_malloc, pFu)
GO(SDL_MapRGB, uFpCCC)
GO(SDL_MapRGBA, uFpCCCC)
// SDL_MasksToPixelFormatEnum
// SDL_MaximizeWindow
// SDL_memcmp
GO(SDL_memcpy, pFppu)
GO(SDL_memmove, pFppu)
// SDL_MemoryBarrierAcquireFunction
// SDL_MemoryBarrierReleaseFunction
GO(SDL_memset, pFpiu)
GO(SDL_MinimizeWindow, vFp)
GO(SDL_MixAudio, vFppui)
// SDL_MixAudioFormat
// SDL_MouseIsHaptic
// SDL_NewAudioStream
// SDL_NumHaptics
GO(SDL_NumJoysticks, iFv)
// SDL_NumSensors
GOM(SDL_OpenAudio, iFEpp)
GOM(SDL_OpenAudioDevice, iFEpippi)
GO(SDL_PauseAudio, vFi)
GO(SDL_PauseAudioDevice, vFii)
// SDL_PeepEvents
GO(SDL_PixelFormatEnumToMasks, iFuppppp)
GO(SDL_PollEvent, iFp)
// SDL_pow
// SDL_powf
GO(SDL_PumpEvents, vFv)
GO(SDL_PushEvent, iFp)
// SDL_qsort
// SDL_QueryTexture
// SDL_QueueAudio
GO(SDL_Quit, vFv)
GO(SDL_QuitSubSystem, vFu)
// SDL_RaiseWindow
GOM(SDL_ReadBE16, uFp)
GOM(SDL_ReadBE32, uFp)
GOM(SDL_ReadBE64, UFp)
GOM(SDL_ReadLE16, uFp)
GOM(SDL_ReadLE32, uFp)
GOM(SDL_ReadLE64, UFp)
GOM(SDL_ReadU8, uFp)
GO(SDL_realloc, pFpu)
// SDL_RecordGesture
GO(SDL_RegisterEvents, uFi)
GOM(SDL_RemoveTimer, iFEp)
GO(SDL_RenderClear, iFp)
GO(SDL_RenderCopy, iFpppp)
// SDL_RenderCopyEx
// SDL_RenderCopyExF
// SDL_RenderCopyF
GO(SDL_RenderDrawLine, iFpiiii)
// SDL_RenderDrawLineF
// SDL_RenderDrawLines
// SDL_RenderDrawLinesF
// SDL_RenderDrawPoint
// SDL_RenderDrawPointF
// SDL_RenderDrawPoints
// SDL_RenderDrawPointsF
// SDL_RenderDrawRect
// SDL_RenderDrawRectF
// SDL_RenderDrawRects
// SDL_RenderDrawRectsF
GO(SDL_RenderFillRect, iFpp)
// SDL_RenderFillRectF
// SDL_RenderFillRects
// SDL_RenderFillRectsF
// SDL_RenderFlush
GO(SDL_RenderGetClipRect, vFpp)
// SDL_RenderGetIntegerScale
// SDL_RenderGetLogicalSize
// SDL_RenderGetMetalCommandEncoder
// SDL_RenderGetMetalLayer
// SDL_RenderGetScale
// SDL_RenderGetViewport
// SDL_RenderIsClipEnabled
GO(SDL_RenderPresent, vFp)
// SDL_RenderReadPixels
GO(SDL_RenderSetClipRect, iFpp)
// SDL_RenderSetIntegerScale
GO(SDL_RenderSetLogicalSize, iFpii)
GO(SDL_RenderSetScale, iFpff)
GO(SDL_RenderSetViewport, iFpp)
// SDL_RenderTargetSupported
GO(SDL_ReportAssertion, uFpppi)
// SDL_ResetAssertionReport
GO(SDL_RestoreWindow, vFp)
GOM(SDL_RWFromConstMem, pFEpi)
GOM(SDL_RWFromFP, pFEpi)
GOM(SDL_RWFromFile, pFEpp)
GOM(SDL_RWFromMem, pFEpi)
// SDL_SaveAllDollarTemplates
GOM(SDL_SaveBMP_RW, iFEppi)
// SDL_SaveDollarTemplate
// SDL_scalbn
// SDL_scalbnf
GO(SDL_SemPost, iFp)
GO(SDL_SemTryWait, iFp)
// SDL_SemValue
GO(SDL_SemWait, iFp)
GO(SDL_SemWaitTimeout, iFpu)
// SDL_SensorClose
// SDL_SensorFromInstanceID
// SDL_SensorGetData
// SDL_SensorGetDeviceInstanceID
// SDL_SensorGetDeviceName
// SDL_SensorGetDeviceNonPortableType
// SDL_SensorGetDeviceType
// SDL_SensorGetInstanceID
// SDL_SensorGetName
// SDL_SensorGetNonPortableType
// SDL_SensorGetType
// SDL_SensorOpen
// SDL_SensorUpdate
// SDL_SetAssertionHandler
GO(SDL_SetClipboardText, iFp)
GO(SDL_SetClipRect, iFpp)
GO(SDL_SetColorKey, iFpiu)
GO(SDL_SetCursor, vFp)
GO(SDL_setenv, iFppi)
GO(SDL_SetError, iFppppp)    // it use ..., so putarbitrary  4 args
// SDL_SetEventFilter
GO(SDL_SetHint, iFpp)
// SDL_SetHintWithPriority
// SDL_SetMainReady
// SDL_SetMemoryFunctions
// SDL_SetModState
// SDL_SetPaletteColors
// SDL_SetPixelFormatPalette
// SDL_SetRelativeMouseMode
GO(SDL_SetRenderDrawBlendMode, iFpu)
GO(SDL_SetRenderDrawColor, iFpCCCC)
GO(SDL_SetRenderTarget, iFpp)
GO(SDL_SetSurfaceAlphaMod, iFpC)
GO(SDL_SetSurfaceBlendMode, iFpu)
// SDL_SetSurfaceColorMod
GO(SDL_SetSurfacePalette, iFpp)
GO(SDL_SetSurfaceRLE, iFpi)
// SDL_SetTextInputRect
GO(SDL_SetTextureAlphaMod, iFpC)
GO(SDL_SetTextureBlendMode, iFpu)
GO(SDL_SetTextureColorMod, iFpCCC)
GO(SDL_SetThreadPriority, iFu)
// SDL_SetWindowBordered
// SDL_SetWindowBrightness
// SDL_SetWindowData
// SDL_SetWindowDisplayMode
GO(SDL_SetWindowFullscreen, iFpu)
// SDL_SetWindowGammaRamp
GO(SDL_SetWindowGrab, vFpi)
// SDL_SetWindowHitTest
GO(SDL_SetWindowIcon, vFpp)
// SDL_SetWindowInputFocus
// SDL_SetWindowMaximumSize
GO(SDL_SetWindowMinimumSize, vFpii)
// SDL_SetWindowModalFor
// SDL_SetWindowOpacity
GO(SDL_SetWindowPosition, vFpii)
// SDL_SetWindowResizable
// SDL_SetWindowShape
GO(SDL_SetWindowSize, vFpii)
GO(SDL_SetWindowTitle, vFpp)
// SDL_SetYUVConversionMode
GO(SDL_ShowCursor, iFi)
GO(SDL_ShowMessageBox, iFpp)
GO(SDL_ShowSimpleMessageBox, iFuppp)
GO(SDL_ShowWindow, vFp)
GO(SDL_sin, dFd)
GO(SDL_sinf, fFf)
GOM(SDL_snprintf, iFEpupVV)
GO(SDL_SoftStretch, iFpppp)
GO(SDL_sqrt, dFd)
GO(SDL_sqrtf, fFf)
// SDL_sscanf
GO(SDL_StartTextInput, vFv)
GO(SDL_StopTextInput, vFv)
GO(SDL_strcasecmp, iFpp)
GO(SDL_strchr, pFpi)
GO(SDL_strcmp, iFpp)
GO(SDL_strdup, pFp)
GO(SDL_strlcat, uFppu)
GO(SDL_strlcpy, uFppu)
GO(SDL_strlen, uFp)
GO(SDL_strlwr, pFp)
GO(SDL_strncasecmp, iFppu)
GO(SDL_strncmp, iFppu)
GO(SDL_strrchr, pFpi)
GO(SDL_strrev, pFp)
GO(SDL_strstr, pFpp)
GO(SDL_strtod, dFpp)
GO(SDL_strtol, iFppi)
GO(SDL_strtoll, IFppi)
GO(SDL_strtoul, uFppi)
GO(SDL_strtoull, UFppi)
GO(SDL_strupr, pFp)
GO(SDL_tan, dFd)
GO(SDL_tanf, fFf)
GO(SDL_ThreadID, uFv)
GO(SDL_TLSCreate, uFv)
GO(SDL_TLSGet, pFu)
GOM(SDL_TLSSet, iFEupp)
// SDL_tolower
// SDL_toupper
// SDL_TryLockMutex
GO(SDL_uitoa, pFupi)
GO(SDL_ulltoa, pFUpi)
GO(SDL_ultoa, pFupi)
// SDL_UnionRect
// SDL_UnloadObject
GO(SDL_UnlockAudio, vFv)
GO(SDL_UnlockAudioDevice, vFi)
// SDL_UnlockJoysticks
GO(SDL_UnlockMutex, iFp)
GO(SDL_UnlockSurface, vFp)
// SDL_UnlockTexture
GO(SDL_UpdateTexture, iFpppi)
// SDL_UpdateWindowSurface
// SDL_UpdateWindowSurfaceRects
// SDL_UpdateYUVTexture
GO(SDL_UpperBlit, iFpppp)
// SDL_UpperBlitScaled
// SDL_utf8strlcpy
// SDL_utf8strlen
// SDL_VideoInit
// SDL_VideoQuit
GOM(SDL_vsnprintf, iFEpupVV)
// SDL_vsscanf
// SDL_Vulkan_CreateSurface
// SDL_Vulkan_GetDrawableSize
// SDL_Vulkan_GetInstanceExtensions
// SDL_Vulkan_GetVkGetInstanceProcAddr
// SDL_Vulkan_LoadLibrary
// SDL_Vulkan_UnloadLibrary
GO(SDL_WaitEvent, iFp)
GO(SDL_WaitEventTimeout, iFpi)
GO(SDL_WaitThread, vFpp)
// SDL_WarpMouseGlobal
GO(SDL_WarpMouseInWindow, vFpii)
GO(SDL_WasInit, uFu)
// SDL_wcscmp
// SDL_wcsdup
// SDL_wcslcat
// SDL_wcslcpy
// SDL_wcslen
GOM(SDL_WriteBE16, uFEpW)
GOM(SDL_WriteBE32, uFEpu)
GOM(SDL_WriteBE64, uFEpU)
GOM(SDL_WriteLE16, uFEpW)
GOM(SDL_WriteLE32, uFEpu)
GOM(SDL_WriteLE64, uFEpU)
GOM(SDL_WriteU8, uFEpu)

GO(SDL_doesntexist, IFpIi)

#endif